SHELL := /bin/bash

.PHONY: sim voice motion all

# Alvo para compilar e iniciar a simulação
sim:
	@colcon build && sleep 10 && \
	source /opt/ros/humble/setup.bash && sleep 10 && \
	export TURTLEBOT3_MODEL=waffle && sleep 10 && \
	export GAZEBO_MODEL_PATH=$$GAZEBO_MODEL_PATH:/opt/ros/humble/share/turtlebot3_gazebo/models && sleep 10 && \
	ros2 launch nav2_bringup tb3_simulation_launch.py headless:=False

# Alvo para o nó de controle por voz
voice:
	@source install/setup.bash && sleep 10 && \
	ros2 run voice_control voice_command_node

# Alvo para o nó de controle de movimento
motion:
	@source install/setup.bash && sleep 10 && \
	ros2 run voice_control motion_control_node

# Alvo para abrir os 3 terminais com intervalos de 10 segundos entre cada
all:
	@gnome-terminal -- bash -c "make sim; exec bash" &
	@sleep 10
	@gnome-terminal -- bash -c "make voice; exec bash" &
	@sleep 10
	@gnome-terminal -- bash -c "make motion; exec bash"

