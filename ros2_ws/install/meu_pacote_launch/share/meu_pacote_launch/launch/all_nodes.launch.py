# 1. Nó do map_server (nav2_map_server)
map_server_node = Node(
    package='nav2_map_server',
    executable='map_server',
    name='map_server',
    output='screen',
    parameters=[{'yaml_filename': map_yaml}]
)

# 2. Transições de ciclo de vida para o map_server:
configure_map_server = ExecuteProcess(
    cmd=['ros2', 'lifecycle', 'set', '/map_server', 'configure'],
    output='screen'
)
activate_map_server = ExecuteProcess(
    cmd=['ros2', 'lifecycle', 'set', '/map_server', 'activate'],
    output='screen'
)

# 3. Nó do static_transform_publisher (publica a transformação entre map e odom)
static_tf_node = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    name='static_transform_publisher',
    output='screen',
    arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom']
)

# 4. Inclusão do lançamento da Navigation2
turtlebot3_navigation2_share = get_package_share_directory('turtlebot3_navigation2')
navigation2_launch = IncludeLaunchDescription(
    PythonLaunchDescriptionSource(os.path.join(turtlebot3_navigation2_share, 'launch', 'navigation2.launch.py')),
    launch_arguments={'use_sim_time': 'true', 'map': map_yaml}.items()
)

# 5. Inclusão do lançamento do Gazebo (mundo do TurtleBot3)
turtlebot3_gazebo_share = get_package_share_directory('turtlebot3_gazebo')
gazebo_launch = IncludeLaunchDescription(
    PythonLaunchDescriptionSource(os.path.join(turtlebot3_gazebo_share, 'launch', 'turtlebot3_world.launch.py'))
)

ld = LaunchDescription()
ld.add_action(map_server_node)
ld.add_action(TimerAction(period=3.0, actions=[configure_map_server]))
ld.add_action(TimerAction(period=6.0, actions=[activate_map_server]))
ld.add_action(static_tf_node)
ld.add_action(navigation2_launch)
ld.add_action(gazebo_launch)
return ld

