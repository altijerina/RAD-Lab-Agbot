import os
from os import pathsep
from ament_index_python.packages import get_package_share_directory, get_package_prefix

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, SetEnvironmentVariable
from launch.substitutions import Command, LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    ag_robot_description = get_package_share_directory('agbot_full_description')
    ag_robot_description_share = get_package_prefix('agbot_full_description')
    gazebo_ros_dir = get_package_share_directory('gazebo_ros')  
    
    # Get the Gazebo world file path
    # world = LaunchConfiguration('world')
    # world_file_name = 'house.world'
    # world_file_path = os.path.join(ag_robot_description, 'worlds', world_file_name)
  
    # declare_world_arg = DeclareLaunchArgument('world', default_value=world_file_path, description='Gazebo world file')      
    
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')  
    x_pose = LaunchConfiguration('x_pose', default='4.0')
    y_pose = LaunchConfiguration('y_pose', default='1.0')    

    model_arg = DeclareLaunchArgument(name='model', default_value=os.path.join(
                                        ag_robot_description, 'urdf', 'agbot_full.xacro'
                                        ),
                                      description='Absolute path to robot urdf file'
    )

    model_path = os.path.join(ag_robot_description, "models")
    model_path += pathsep + os.path.join(ag_robot_description_share, "share")

    env_var = SetEnvironmentVariable('GAZEBO_MODEL_PATH', model_path)

    robot_description = ParameterValue(Command(['xacro ', LaunchConfiguration('model')]),
                                       value_type=str)    

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description},
                    {'use_sim_time': use_sim_time}],
    )  
    
    world = os.path.join(
        get_package_share_directory('agbot_full_description'),
        'worlds',
        'empty_world.world'
    )    
   
    start_gazebo_server = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(gazebo_ros_dir, 'launch', 'gzserver.launch.py')),
            launch_arguments={'world': world}.items()
    )   

    start_gazebo_client = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(gazebo_ros_dir, 'launch', 'gzclient.launch.py')
        )
    )

    spawn_robot = Node(package='gazebo_ros', executable='spawn_entity.py',
                        arguments=['-entity', 'agbot',
                                   '-topic', 'robot_description',
                                   '-x', x_pose,
                                   '-y', y_pose,
                                   '-z', '0.01'
                                  ],
                        output='screen'
    )
   

    return LaunchDescription([
        env_var,
        model_arg,
        start_gazebo_server,
        start_gazebo_client,
        robot_state_publisher_node,
        spawn_robot,
    ])