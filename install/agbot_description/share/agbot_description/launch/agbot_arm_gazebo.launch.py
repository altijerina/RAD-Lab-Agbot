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
    
    agbot_arm_description = get_package_share_directory('agbot_description')
    agbot_arm_description_share = get_package_prefix('agbot_description')
    gazebo_ros_dir = get_package_share_directory('gazebo_ros')
    
    model_arg = DeclareLaunchArgument(name='model', default_value=os.path.join(
                                        agbot_arm_description, 'urdf', 'agbot_arm.xacro'
                                        ),
                                      description='Absolute path to robot urdf file'
    )    
    
    model_path = os.path.join(agbot_arm_description, "models")
    model_path += pathsep + os.path.join(agbot_arm_description_share, "share")
    
    env_var = SetEnvironmentVariable("GAZEBO_MODEL_PATH", model_path)    
   
    robot_description = ParameterValue(Command(['xacro ', LaunchConfiguration('model')]),
                                       value_type=str)
    
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description},
                    {"use_sim_time": True}]
    )       
    
    joint_state_publisher_node = Node(
        package = 'joint_state_publisher',
        executable = 'joint_state_publisher',
        name = 'joint_state_publisher',
        parameters =[
            {'source_list':['joint_state_broadcaster/joint_states'],
             'rate' : 20.0
                }]
        )    
    
    world = os.path.join(
        get_package_share_directory('agbot_description'),
        'worlds',
        'test_world.world'
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
    
    spawn_robot = Node(package='gazebo_ros', 
                       executable='spawn_entity.py',
                       arguments=['-entity', 
                                  'agbot_arm', 
                                  '-topic', 
                                  'robot_description'
                                  ],
                       output='screen'
    )

    return LaunchDescription([
        env_var,
        model_arg,       
        start_gazebo_server,
        start_gazebo_client,         
        robot_state_publisher_node, 
        # joint_state_publisher_node,               
        spawn_robot
    ])