#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#
# Created by omar on 2/5/24
# Adaptado para Python por <seu_nome>
#

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from geometry_msgs.msg import PoseWithCovarianceStamped, Point
from nav_msgs.msg import OccupancyGrid
from visualization_msgs.msg import MarkerArray, Marker
from std_msgs.msg import ColorRGBA

from slam_toolbox.srv import SerializePoseGraph, SaveMap
from nav2_msgs.action import NavigateToPose

import math
import queue
from typing import List

# Constantes de custo (seguindo o costmap_2d)
FREE_SPACE = 0
LETHAL_OBSTACLE = 254
NO_INFORMATION = 255

class PythonCostmap2D:
    """
    Classe auxiliar que simula a lógica do Costmap2D, com:
    - resizeMap
    - indexToCells
    - cellsToIndex
    - mapToWorld
    - worldToMap
    - get e set de dados
    """
    def __init__(self):
        self.size_in_cells_x = 0
        self.size_in_cells_y = 0
        self.resolution = 0.0
        self.origin_x = 0.0
        self.origin_y = 0.0
        
        self.data = []  # Armazena o mapa em 1D (estilo OccupancyGrid.data)
        self._mutex = False  # Aqui, usaremos algo simples. Em C++ é std::mutex
    
    def getMutex(self):
        # Retorna referência para "mutex"; aqui poderia ser algo como threading.Lock()
        return self
    
    # Métodos para simular lock. Você pode ajustar conforme necessidade real de multithreading.
    def __enter__(self):
        self._mutex = True
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        self._mutex = False

    def resizeMap(self, size_in_cells_x, size_in_cells_y, resolution, origin_x, origin_y):
        self.size_in_cells_x = size_in_cells_x
        self.size_in_cells_y = size_in_cells_y
        self.resolution = resolution
        self.origin_x = origin_x
        self.origin_y = origin_y
        self.data = [NO_INFORMATION] * (size_in_cells_x * size_in_cells_y)

    def getSizeInCellsX(self):
        return self.size_in_cells_x

    def getSizeInCellsY(self):
        return self.size_in_cells_y

    def getCharMap(self):
        return self.data

    def setCost(self, idx, cost):
        self.data[idx] = cost

    def getIndex(self, mx, my):
        return my * self.size_in_cells_x + mx

    def indexToCells(self, idx):
        mx = idx % self.size_in_cells_x
        my = idx // self.size_in_cells_x
        return mx, my

    def mapToWorld(self, mx, my):
        # Converte coordenadas de célula em coordenadas do mundo
        wx = self.origin_x + (mx + 0.5) * self.resolution
        wy = self.origin_y + (my + 0.5) * self.resolution
        return wx, wy

    def worldToMap(self, wx, wy):
        # Converte coordenadas do mundo em coordenadas de célula
        if wx < self.origin_x or wy < self.origin_y:
            return False, 0, 0
        mx = int((wx - self.origin_x) / self.resolution)
        my = int((wy - self.origin_y) / self.resolution)
        if mx < 0 or my < 0 or mx >= self.size_in_cells_x or my >= self.size_in_cells_y:
            return False, 0, 0
        return True, mx, my


class Frontier:
    """
    Estrutura similar à do C++: 
    - centroid (geometry_msgs/Point)
    - lista de points (fronteira)
    """
    def __init__(self):
        self.centroid = Point()
        self.points: List[Point] = []

    def getKey(self):
        return f"{self.centroid.x},{self.centroid.y}"


class AutoMapper(Node):
    def __init__(self):
        super().__init__('auto_mapper')
        self.get_logger().info("AutoMapper started...")

        # Parâmetros
        self.declare_parameter('map_path', '')
        self.map_path_ = self.get_parameter('map_path').get_parameter_value().string_value

        # Variáveis de controle
        self.MIN_FRONTIER_DENSITY = 0.3
        self.MIN_DISTANCE_TO_FRONTIER = 1.0
        self.MIN_FREE_THRESHOLD = 4

        # Costmap "simulado"
        self.costmap_ = PythonCostmap2D()

        # Armazena pose mais recente
        self.pose_ = None

        # Marcadores
        self.markerArrayPublisher_ = self.create_publisher(MarkerArray, '/frontiers', 10)
        self.markersMsg_ = MarkerArray()
        self.markerId_ = 0
        
        # Flag para saber se está explorando
        self.isExploring_ = False

        # Tabela de tradução de custos
        self.costTranslationTable_ = self.initTranslationTable()

        # Assinatura de tópicos
        self.poseSubscription_ = self.create_subscription(
            PoseWithCovarianceStamped,
            '/pose',
            self.poseTopicCallback,
            10
        )

        self.mapSubscription_ = self.create_subscription(
            OccupancyGrid,
            '/map',
            self.updateFullMap,
            10
        )

        # Cliente de ação para navegar até a fronteira
        # Necessário callback_group se quiser rodar multi-threaded
        self.poseNavigator_ = ActionClient(self, NavigateToPose, '/navigate_to_pose')
        self.get_logger().info("Esperando pelo servidor de ação '/navigate_to_pose'...")

        # Podemos aguardar a disponibilidade do servidor de ação de forma assíncrona
        self.poseNavigator_.wait_for_server()
        self.get_logger().info("Servidor de ação '/navigate_to_pose' disponível")

    def initTranslationTable(self):
        """
        Em C++, há uma lógica para mapear [0..100] -> [0..255].
        Abaixo, reproduzimos esse mapeamento, respeitando os casos especiais
        """
        cost_translation_table = [0]*256
        for i in range(256):
            # valor default
            # "1 + (251 * (i - 1)) / 97" é a fórmula aproximada do C++
            cost_translation_table[i] = int(1 + (251 * (i - 1)) / 97) if i < 101 else 255

        cost_translation_table[0] = FREE_SPACE
        cost_translation_table[99] = 253
        cost_translation_table[100] = LETHAL_OBSTACLE
        # -1 em char é 255 em C++, que definimos como NO_INFORMATION = 255
        cost_translation_table[255] = NO_INFORMATION
        return cost_translation_table

    # ----------------------------------------------------------------------------
    # Callbacks
    # ----------------------------------------------------------------------------
    def poseTopicCallback(self, msg: PoseWithCovarianceStamped):
        self.pose_ = msg
        self.get_logger().info("poseTopicCallback...")

    def updateFullMap(self, occupancyGrid: OccupancyGrid):
        if self.pose_ is None:
            return

        info = occupancyGrid.info
        size_in_cells_x = info.width
        size_in_cells_y = info.height
        resolution = info.resolution
        origin_x = info.origin.position.x
        origin_y = info.origin.position.y

        self.get_logger().info(f"received full new map, resizing to: {size_in_cells_x}, {size_in_cells_y}")
        self.costmap_.resizeMap(size_in_cells_x,
                                size_in_cells_y,
                                resolution,
                                origin_x,
                                origin_y)

        # Lock (simples) para manipular costmap_
        with self.costmap_ as c:
            costmap_size = c.getSizeInCellsX() * c.getSizeInCellsY()
            self.get_logger().info(f"full map update, {costmap_size} values")
            # Preenche o costmap com os dados traduzidos
            for i in range(min(costmap_size, len(occupancyGrid.data))):
                cell_cost = occupancyGrid.data[i]
                # Converte para unsigned char e aplica tabela
                cell_cost = int(cell_cost) & 0xFF
                c.data[i] = self.costTranslationTable_[cell_cost]

        # Inicia a exploração
        self.explore()

    # ----------------------------------------------------------------------------
    # Lógica de Exploração
    # ----------------------------------------------------------------------------
    def explore(self):
        if self.isExploring_:
            return

        frontiers = self.findFrontiers()
        if not frontiers:
            self.get_logger().warn("NO BOUNDARIES FOUND!!")
            self.stop()
            return

        # Vamos para a primeira fronteira encontrada
        frontier = frontiers[0]
        self.drawMarkers(frontiers)

        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = 'map'
        goal_msg.pose.pose.position = frontier.centroid
        goal_msg.pose.pose.orientation.w = 1.0

        self.get_logger().info(f"Sending goal {frontier.centroid.x},{frontier.centroid.y}")

        # Callback para resposta do envio do goal
        def goal_response_callback(future):
            goal_handle = future.result()
            if not goal_handle:
                self.get_logger().error('Goal was rejected by server')
                return
            self.get_logger().info('Goal accepted by server, waiting for result')
            self.isExploring_ = True

        # Callback de feedback
        def feedback_callback(feedback_msg):
            feedback = feedback_msg.feedback
            self.get_logger().info(f"Distance remaining: {feedback.distance_remaining}")

        # Callback de resultado
        def result_callback(future):
            result = future.result()
            self.isExploring_ = False
            self.saveMap()
            self.clearMarkers()
            # Tenta explorar novamente (pode haver mais fronteiras)
            self.explore()

            if result.result is not None:
                self.get_logger().info(f"Goal reached, result code: {result.status}")
            else:
                self.get_logger().error("Goal finished with unknown result.")

        self.poseNavigator_.send_goal_async(
            goal_msg,
            feedback_callback=feedback_callback
        ).add_done_callback(goal_response_callback)

        self.poseNavigator_.send_goal_async(
            goal_msg
        ).add_done_callback(result_callback)

    def stop(self):
        self.get_logger().info("Stopped...")
        self.poseSubscription_.destroy()
        self.mapSubscription_.destroy()
        self.poseNavigator_.cancel_all_goals_async()
        self.saveMap()
        self.clearMarkers()

    # ----------------------------------------------------------------------------
    # Mapa e Fronteiras
    # ----------------------------------------------------------------------------
    def findFrontiers(self) -> List[Frontier]:
        if not self.pose_:
            return []

        position = self.pose_.pose.pose.position

        ok, mx, my = self.costmap_.worldToMap(position.x, position.y)
        if not ok:
            self.get_logger().error("Robot out of costmap bounds, cannot search for frontiers")
            return []

        with self.costmap_ as c:
            map_data = c.getCharMap()
            size_x = c.getSizeInCellsX()
            size_y = c.getSizeInCellsY()

            frontier_flag = [False]*(size_x * size_y)
            visited_flag = [False]*(size_x * size_y)

            pos_index = c.getIndex(mx, my)
            q_ = queue.Queue()
            q_.put(pos_index)
            visited_flag[pos_index] = True

            frontiers = []

            # BFS
            while not q_.empty():
                idx = q_.get()
                for nbr in self.nhood8(idx):
                    if map_data[nbr] == FREE_SPACE and not visited_flag[nbr]:
                        visited_flag[nbr] = True
                        q_.put(nbr)
                    elif self.isAchievableFrontierCell(nbr, frontier_flag, map_data):
                        frontier_flag[nbr] = True
                        new_f = self.buildNewFrontier(nbr, frontier_flag, map_data)
                        dist = math.sqrt((new_f.centroid.x - position.x)**2 + 
                                         (new_f.centroid.y - position.y)**2)
                        if dist < self.MIN_DISTANCE_TO_FRONTIER:
                            continue
                        # Checa se a fronteira tem densidade mínima
                        if len(new_f.points) * c.resolution >= self.MIN_FRONTIER_DENSITY:
                            frontiers.append(new_f)
            return frontiers

    def nhood8(self, idx) -> List[int]:
        """ Retorna as células em 8-direções ao redor de 'idx'. """
        c = self.costmap_
        mx, my = c.indexToCells(idx)
        directions = [
            (-1, -1),
            (-1,  1),
            ( 1, -1),
            ( 1,  1),
            ( 1,  0),
            (-1,  0),
            ( 0,  1),
            ( 0, -1)
        ]
        out = []
        for dx, dy in directions:
            nx = mx + dx
            ny = my + dy
            if 0 <= nx < c.getSizeInCellsX() and 0 <= ny < c.getSizeInCellsY():
                out.append(c.getIndex(nx, ny))
        return out

    def isAchievableFrontierCell(self, idx, frontier_flag, map_data):
        # Celula deve ser NO_INFORMATION e não ser fronteira ainda
        if map_data[idx] != NO_INFORMATION or frontier_flag[idx]:
            return False
        # Checa se há células livres (FREE_SPACE) suficientes em torno
        freeCount = 0
        for nbr in self.nhood8(idx):
            if map_data[nbr] == FREE_SPACE:
                freeCount += 1
                if freeCount >= self.MIN_FREE_THRESHOLD:
                    return True
        return False

    def buildNewFrontier(self, start_cell, frontier_flag, map_data):
        frontier = Frontier()
        frontier.centroid.x = 0.0
        frontier.centroid.y = 0.0

        q_ = queue.Queue()
        q_.put(start_cell)

        c = self.costmap_

        count_points = 0
        while not q_.empty():
            idx = q_.get()
            # Verifica as 8 células vizinhas
            for nbr in self.nhood8(idx):
                if self.isAchievableFrontierCell(nbr, frontier_flag, map_data):
                    frontier_flag[nbr] = True
                    mx, my = c.indexToCells(nbr)
                    wx, wy = c.mapToWorld(mx, my)
                    p = Point(x=wx, y=wy, z=0.0)
                    frontier.points.append(p)
                    frontier.centroid.x += wx
                    frontier.centroid.y += wy
                    count_points += 1
                    q_.put(nbr)

        if count_points > 0:
            frontier.centroid.x /= count_points
            frontier.centroid.y /= count_points
        return frontier

    # ----------------------------------------------------------------------------
    # Visualização (Markers)
    # ----------------------------------------------------------------------------
    def drawMarkers(self, frontiers: List[Frontier]):
        for f in frontiers:
            self.get_logger().info(f"visualising {f.centroid.x},{f.centroid.y}")
            green = ColorRGBA(r=0.0, g=1.0, b=0.0, a=1.0)

            m = Marker()
            m.header.frame_id = 'map'
            m.header.stamp = self.get_clock().now().to_msg()
            m.frame_locked = True

            m.action = Marker.ADD
            m.ns = "frontiers"
            self.markerId_ += 1
            m.id = self.markerId_
            m.type = Marker.SPHERE

            m.pose.position = f.centroid
            m.pose.orientation.w = 1.0
            m.scale.x = 0.3
            m.scale.y = 0.3
            m.scale.z = 0.3
            m.color = green

            self.markersMsg_.markers.append(m)

        self.markerArrayPublisher_.publish(self.markersMsg_)

    def clearMarkers(self):
        for m in self.markersMsg_.markers:
            m.action = Marker.DELETE
        self.markerArrayPublisher_.publish(self.markersMsg_)
        self.markersMsg_.markers.clear()

    # ----------------------------------------------------------------------------
    # Salvando o mapa
    # ----------------------------------------------------------------------------
    def saveMap(self):
        if not self.map_path_:
            self.get_logger().warn("Map path parameter is empty, skipping save...")
            return

        # 1) serialize_map (slam_toolbox)
        mapSerializer = self.create_client(SerializePoseGraph, '/slam_toolbox/serialize_map')
        while not mapSerializer.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("'serialize_map' service not available, waiting...")

        req_serialize = SerializePoseGraph.Request()
        req_serialize.filename = self.map_path_
        future_serialize = mapSerializer.call_async(req_serialize)

        # 2) save_map (slam_toolbox)
        mapSaver = self.create_client(SaveMap, '/slam_toolbox/save_map')
        while not mapSaver.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("'save_map' service not available, waiting...")

        req_save = SaveMap.Request()
        req_save.name.data = self.map_path_
        future_save = mapSaver.call_async(req_save)

        self.get_logger().info(f"Saving map to {self.map_path_}...")

        # Obs: Em um código de produção, você provavelmente aguardaria as respostas
        # desses serviços (futures) para verificar se tudo deu certo.

# ------------------------------------------------------------------------------
# main
# ------------------------------------------------------------------------------
def main(args=None):
    rclpy.init(args=args)

    # Podemos usar um MultiThreadedExecutor se quisermos rodar assinaturas e
    # callbacks de ação em paralelo.
    executor = MultiThreadedExecutor()

    node = AutoMapper()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        node.get_logger().info("Keyboard interrupt, shutting down.")
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
