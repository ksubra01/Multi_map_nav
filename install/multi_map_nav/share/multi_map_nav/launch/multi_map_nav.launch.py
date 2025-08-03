from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    multi_map_nav_dir = get_package_share_directory('multi_map_nav')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')

    map_yaml_path = os.path.join(multi_map_nav_dir,'maps','map1.yaml')
    db_path = os.path.join(multi_map_nav_dir, 'database', 'wormholes.db')
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_bringup_dir,'launch', 'bringup_launch.py')
        ),
        launch_arguments=(
            'map': map_yaml_path,
            'use_sim_time': 'true',
            'autostart': 'true'
        ).items()
    )
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', os.path.join(nav2_bringup_dir, 'rviz2', 'nav2_default_view.rviz')],
        output='screen'
    )

    navigation_server_node = Node(
        package='multi_map_nav',
        executable='navigation_server_node',
        name='navigation_server_node',
        parameters=[{'wormhole_db_path': db_path}],
        output='screen'
    )

    return LaunchDescription([
        nav2_launch,
        rviz_node,
        navigation_server_node
    ])