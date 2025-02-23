import rclpy
from rclpy.node import Node
import math

from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import PoseStamped
from rclpy.action import ActionClient
from std_msgs.msg import String


def quaternion_from_euler(roll, pitch, yaw):
    """
    Converte ângulos de Euler (roll, pitch, yaw) para quaternion.
    """
    qx = math.sin(roll / 2) * math.cos(pitch / 2) * math.cos(yaw / 2) - math.cos(roll / 2) * math.sin(pitch / 2) * math.sin(yaw / 2)
    qy = math.cos(roll / 2) * math.sin(pitch / 2) * math.cos(yaw / 2) + math.sin(roll / 2) * math.cos(pitch / 2) * math.sin(yaw / 2)
    qz = math.cos(roll / 2) * math.cos(pitch / 2) * math.sin(yaw / 2) - math.sin(roll / 2) * math.sin(pitch / 2) * math.cos(yaw / 2)
    qw = math.cos(roll / 2) * math.cos(pitch / 2) * math.cos(yaw / 2) + math.sin(roll / 2) * math.sin(pitch / 2) * math.sin(yaw / 2)
    return [qx, qy, qz, qw]


class MotionControlNode(Node):
    def __init__(self):
        super().__init__('motion_control_node')
        # Subscreve os comandos de voz (nomes de locais)
        self.subscription = self.create_subscription(String, '/cmd_voice', self.command_callback, 10)
        # Cria o action client para navegação
        self._action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

        # Mapeia nomes de locais para coordenadas (x, y e ângulo theta em radianos)
        self.locations = {
            'posição leste': {'x': 2.12593, 'y': -1.70981, 'theta': 0.0},
            'posição oeste': {'x': 2.08585, 'y':2.3629, 'theta': 0.0},
            'base': {'x': -1.94477, 'y':1.94477, 'theta': 0.0},
            'posição norte': {'x': -1.70981, 'y':0.404884, 'theta': 0.0},
            'posição sul': {'x': -1.94477, 'y':1.94477, 'theta': 0.0},
            
        }

        self.get_logger().info("Nó de controle de movimento iniciado!")

    def command_callback(self, msg):
        location_name = msg.data.lower()
        if location_name not in self.locations:
            self.get_logger().warn(f"Localização desconhecida: {location_name}")
            return

        coord = self.locations[location_name]

        # Cria a mensagem de objetivo para a ação de navegação
        goal_msg = NavigateToPose.Goal()

        # Preenche o PoseStamped com os dados da localização
        pose = PoseStamped()
        pose.header.frame_id = "map"  # ou outro frame de referência utilizado
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.pose.position.x = coord['x']
        pose.pose.position.y = coord['y']

        # Converte o ângulo theta para quaternion
        q = quaternion_from_euler(0, 0, coord['theta'])
        pose.pose.orientation.x = q[0]
        pose.pose.orientation.y = q[1]
        pose.pose.orientation.z = q[2]
        pose.pose.orientation.w = q[3]

        goal_msg.pose = pose

        self.get_logger().info(f"Enviando objetivo para '{location_name}': {coord}")

        # Aguarda o servidor da ação estar disponível
        if not self._action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("Servidor de ação de navegação não disponível!")
            return

        # Envia o objetivo de forma assíncrona
        send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Objetivo rejeitado!")
            return

        self.get_logger().info("Objetivo aceito! Navegando...")
        get_result_future = goal_handle.get_result_async()
        get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback_msg):
        # Você pode tratar feedback adicional se necessário
        self.get_logger().info("Recebendo feedback da navegação...")

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info("Navegação concluída!")


def main(args=None):
    rclpy.init(args=args)
    node = MotionControlNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Nó interrompido pelo usuário.")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

