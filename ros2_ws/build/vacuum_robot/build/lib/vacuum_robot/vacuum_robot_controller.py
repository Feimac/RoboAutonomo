#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from transforms3d.euler import quat2euler  # Importação atualizada

class ReactiveNavigator(Node):
    def __init__(self):
        super().__init__('reactive_navigator')

        # Publicador no cmd_vel
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)

        # Assinaturas dos tópicos
        self.scan_sub = self.create_subscription(
            LaserScan,
            '/scan',  # Ajuste caso seu tópico do LIDAR seja diferente
            self.laser_callback,
            10
        )
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)

        # Timer para controle
        self.timer_period = 0.1  # 10Hz
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        # Parâmetros de navegação
        self.goal_x = 2.0
        self.goal_y = 2.0
        self.threshold = 0.5   # Limiar de distância para evasão de obstáculo (metros)
        self.k_angular = 0.5   # Constante para cálculo inversamente proporcional (ajuste conforme necessário)

        # Estado do robô
        self.current_x = 0.0
        self.current_y = 0.0
        self.current_yaw = 0.0

        # Dados do laser
        self.min_distance = float('inf')
        self.min_dist_angle = 0.0

        # Estado da navegação
        # "navigate" = indo para objetivo
        # "avoid_obstacle" = desviando do obstáculo
        self.state = "navigate"

        self.get_logger().info('Nó de Navegação Reativa Iniciado')

    def odom_callback(self, msg):
        # Extrai posição e orientação do robô a partir da Odometry
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y
        orientation_q = msg.pose.pose.orientation
        _, _, yaw = quat2euler([orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w])
        self.current_yaw = yaw

    def laser_callback(self, msg: LaserScan):
        # Encontra a distância mínima e o ângulo em que ela ocorre
        ranges = msg.ranges
        angle_min = msg.angle_min
        angle_increment = msg.angle_increment

        valid_ranges = [(r, angle_min + i*angle_increment) for i, r in enumerate(ranges) if not math.isnan(r) and r > 0.0]
        if not valid_ranges:
            self.min_distance = float('inf')
            self.min_dist_angle = 0.0
            return

        min_dist, angle = min(valid_ranges, key=lambda x: x[0])
        self.min_distance = min_dist
        self.min_dist_angle = angle

    def timer_callback(self):
        cmd = Twist()

        # Checa se há obstáculo próximo
        if self.min_distance < self.threshold:
            # Entra no modo de evitar obstáculo
            self.state = "avoid_obstacle"
        else:
            # Se não há obstáculo próximo, volta a navegar
            if self.state == "avoid_obstacle":
                # Antes estava desviando, agora livre novamente
                self.state = "navigate"

        if self.state == "navigate":
            # Controlar para ir para (goal_x, goal_y)
            dx = self.goal_x - self.current_x
            dy = self.goal_y - self.current_y
            distance_to_goal = math.sqrt(dx*dx + dy*dy)

            # Definir um limiar de chegada, exemplo: 0.1m
            if distance_to_goal < 0.1:
                # Já chegou, parar
                cmd.linear.x = 0.0
                cmd.angular.z = 0.0
            else:
                # Navegar em direção ao objetivo
                desired_yaw = math.atan2(dy, dx)
                yaw_error = desired_yaw - self.current_yaw

                # Normaliza o yaw_error para -pi a pi
                yaw_error = (yaw_error + math.pi) % (2 * math.pi) - math.pi

                # Simples P-controller
                cmd.linear.x = 0.15  # velocidade linear constante
                cmd.angular.z = 0.5 * yaw_error  # velocidade angular proporcional ao erro de orientação

        elif self.state == "avoid_obstacle":
            # Evitar obstáculo
            # Identificar de qual lado o obstáculo está mais próximo
            # Se o ângulo da menor distância for negativo, obstáculo à esquerda
            # Se positivo, obstáculo à direita

            # Converte ângulo para graus apenas para facilitar raciocínio
            angle_degrees = math.degrees(self.min_dist_angle)

            # Quanto mais perto o obstáculo, maior a rotação. 
            # Usar inversamente proporcional: angular = k_angular / min_distance
            angular_speed = self.k_angular / max(self.min_distance, 0.01)

            # Se obstáculo está à esquerda (ângulo negativo), gira para a direita (angular negativo)
            # Se obstáculo está à direita (ângulo positivo), gira para a esquerda (angular positivo)
            if angle_degrees < 0:
                # Gira para a direita
                cmd.angular.z = -abs(angular_speed)
            else:
                # Gira para a esquerda
                cmd.angular.z = abs(angular_speed)
            
            # Não anda para frente enquanto desvia
            cmd.linear.x = 0.0

        # Publica comando
        self.publisher_.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    navigator = ReactiveNavigator()
    rclpy.spin(navigator)
    navigator.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

