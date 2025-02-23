#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TurtleBot3Mover(Node):
    def __init__(self):
        super().__init__('turtlebot3_mover')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        timer_period = 0.1  # segundos
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.cmd = Twist()
        self.get_logger().info('TurtleBot3 Mover Iniciado')

        # Definir os parâmetros de movimento
        self.state = 'move_forward'
        self.move_time = 5.0  # segundos
        self.rotate_time = 2.0  # segundos
        self.start_time = self.get_clock().now()

        # Registrar o callback de shutdown
        self.add_on_shutdown(self.shutdown_callback)

    def timer_callback(self):
        current_time = self.get_clock().now()
        elapsed = (current_time - self.start_time).nanoseconds / 1e9

        if self.state == 'move_forward':
            if elapsed < self.move_time:
                self.cmd.linear.x = 0.2
                self.cmd.angular.z = 0.0
            else:
                self.state = 'rotate'
                self.start_time = current_time
        elif self.state == 'rotate':
            if elapsed < self.rotate_time:
                self.cmd.linear.x = 0.0
                self.cmd.angular.z = 0.5
            else:
                self.state = 'move_forward'
                self.start_time = current_time

        self.publisher_.publish(self.cmd)

    def shutdown_callback(self):
        """Função chamada ao encerrar o nó para parar o robô."""
        self.get_logger().info('Encerrando TurtleBot3 Mover... Parando o robô.')
        stop_cmd = Twist()  # Todos os valores zero
        self.publisher_.publish(stop_cmd)

class VacuumRobotController(TurtleBot3Mover):
    def __init__(self):
        super().__init__()
        self.get_logger().info('Vacuum Robot Controller Iniciado')
        # Adicione aqui quaisquer inicializações específicas do Vacuum Robot

    def shutdown_callback(self):
        """Override shutdown callback para adicionar funcionalidades específicas do Vacuum Robot Controller."""
        self.get_logger().info('Encerrando Vacuum Robot Controller... Parando o robô.')
        stop_cmd = Twist()  # Todos os valores zero
        self.publisher_.publish(stop_cmd)
        # Chamar o shutdown_callback da classe base para garantir que todas as ações de shutdown sejam executadas
        super().shutdown_callback()

def main(args=None):
    rclpy.init(args=args)
    controller = VacuumRobotController()
    try:
        rclpy.spin(controller)
    except KeyboardInterrupt:
        controller.get_logger().info('Interrompido pelo usuário.')
    finally:
        # Assegurar que o robô pare ao encerrar
        controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

