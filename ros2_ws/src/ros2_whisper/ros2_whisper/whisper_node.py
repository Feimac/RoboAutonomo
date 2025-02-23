#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

# Exemplo usando a versão Python do Whisper
import whisper
import numpy as np

# Mensagens ROS2 (por exemplo, std_msgs ou audio_common_msgs)
from std_msgs.msg import String
# Caso queira se inscrever em um tópico de áudio, existem diferentes tipos de mensagem.
# Por exemplo, do pacote audio_common_msgs: AudioData
# from audio_common_msgs.msg import AudioData

class WhisperNode(Node):
    def __init__(self):
        super().__init__('whisper_node')
        
        # Modelo a ser carregado (pode ser 'tiny', 'base', 'small', 'medium', 'large')
        self.declare_parameter('model_name', 'base')
        model_name = self.get_parameter('model_name').value
        
        self.get_logger().info(f"Carregando modelo Whisper: {model_name}")
        self.model = whisper.load_model(model_name)

        # Exemplo: Assinar um tópico de áudio. Ajuste conforme o tipo e formato do áudio.
        # self.audio_sub = self.create_subscription(
        #     AudioData,
        #     '/audio_raw',
        #     self.audio_callback,
        #     10
        # )

        # Exemplo: Publicar o resultado da transcrição
        self.text_pub = self.create_publisher(String, 'whisper_text', 10)

    def audio_callback(self, msg):
        """
        Aqui você processaria msg.data (que pode ser bytes do áudio),
        converteria para o formato exigido pelo Whisper e chamaria o modelo.
        """
        # Exemplo: Converter para array NumPy (depende do formato do áudio recebido)
        audio_data = np.frombuffer(msg.data, dtype=np.int16)  # Ajustar se for float, etc.
        
        # Dependendo do setup, você pode ter que salvar em um buffer ou processar em blocos.
        # No modo simples, Whisper processa arquivos ou arrays de áudio inteiros.
        
        # Transcrever
        result = self.model.transcribe(audio_data, fp16=False)  # Usar fp16=False se a GPU não suportar half-precision
        
        # Publicar o texto transcrito
        text_msg = String()
        text_msg.data = result["text"]
        self.text_pub.publish(text_msg)
        self.get_logger().info(f"Transcrito: {result['text']}")

def main(args=None):
    rclpy.init(args=args)
    node = WhisperNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

