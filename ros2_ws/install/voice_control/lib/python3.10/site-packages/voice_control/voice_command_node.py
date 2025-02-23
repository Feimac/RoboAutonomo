import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import speech_recognition as sr


class VoiceCommandNode(Node):
    def __init__(self):
        super().__init__('voice_command_node')
        self.publisher_ = self.create_publisher(String, '/cmd_voice', 10)
        self.recognizer = sr.Recognizer()
        self.microphone = sr.Microphone()

        self.get_logger().info("Nó de comando de voz iniciado!")
        self.listen_voice_command()

    def listen_voice_command(self):
        while rclpy.ok():
            with self.microphone as source:
                self.get_logger().info("Diga o nome do local (ex: sala, cozinha)...")
                self.recognizer.adjust_for_ambient_noise(source)
                try:
                    audio = self.recognizer.listen(source)
                    command = self.recognizer.recognize_google(audio, language="pt-BR").lower()
                    self.get_logger().info(f"Comando reconhecido: {command}")

                    msg = String()
                    msg.data = command
                    self.publisher_.publish(msg)

                except sr.UnknownValueError:
                    self.get_logger().warn("Não entendi o comando!")
                except sr.RequestError:
                    self.get_logger().error("Erro no serviço de reconhecimento de voz!")


def main(args=None):
    rclpy.init(args=args)
    node = VoiceCommandNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Nó interrompido pelo usuário.")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()






