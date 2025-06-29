# RoboAutônomo ROS2

Este repositório contém um exemplo de robô autônomo em ROS2, com funcionalidades de controle de movimento via comandos de voz e integração com Whisper para reconhecimento de fala.

## Estrutura do Projeto

```
RoboAutonomo-main/
├── ros2_ws/                # Workspace ROS2
│   ├── src/                # Pacotes fonte
│   │   ├── meu_pacote_launch/   # Arquivos de launch
│   │   │   └── launch/all_nodes.launch.py
│   │   ├── ros2_whisper/        # Nó de reconhecimento Whisper
│   │   └── voice_control/       # Nó de controle de movimento por voz
│   └── install/            # Build e artefatos instalados (gerado após `colcon build`)
└── README.md               # Este arquivo
```

## Pré‑requisitos

1. **ROS 2**

   * Instale uma distribuição compatível (por exemplo, Humble ou Galactic).
   * Siga as instruções oficiais: [https://docs.ros.org/en/](https://docs.ros.org/en/)

2. **Python 3.8+**

3. **Dependências adicionais**

   * `whisper` e `openai-whisper` (ou outro pacote de ASR)
   * Bibliotecas de Python listadas em `setup.py` de cada pacote.

## Passo a Passo para Execução

1. **Clone este repositório**

   ```bash
   git clone https://github.com/SEU_USUARIO/RoboAutonomo-main.git
   cd RoboAutonomo-main/ros2_ws
   ```

2. **Instale dependências do ROS2**

   ```bash
   rosdep update
   rosdep install --from-paths src --ignore-src -r -y
   ```

3. **Instale dependências Python**

   ```bash
   # Para cada pacote, instale os requisitos
   pip install whisper
   # Caso existam outros requisitos, instale:
   pip install -r src/voice_control/requirements.txt  # se existir
   ```

4. **Compile o workspace**

   ```bash
   colcon build --symlink-install
   ```

5. **Source do ambiente**

   ```bash
   source install/setup.bash
   ```

6. **Execute o robô**

   ```bash
   # Inicia todos os nós definidos no launch
   ros2 launch meu_pacote_launch all_nodes.launch.py
   ```

   Ou execute separadamente:

   ```bash
   ros2 run ros2_whisper whisper_node
   ros2 run voice_control motion_control_node
   ```

## Uso

* Fale comandos de voz para o robô: "frente", "direita", "esquerda", "pare" etc.
* O nó Whisper processará o áudio e enviará ordens para o nó de controle de movimento.

## Contribuições

Pull requests são bem‑vindas! Sinta‑se à vontade para abrir issues e sugerir melhorias.

## Licença

Este projeto está licenciado sob a Licença MIT.
