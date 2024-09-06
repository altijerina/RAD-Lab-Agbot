import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_directory
from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessExit


def generate_launch_description():
    robot_description = ParameterValue(
        Command(
            [
                "xacro ",
                ' ',
                os.path.join(
                    get_package_share_directory("agbot_full_description"),
                    "urdf",
                    "agbot_full.xacro",
                ),
            ]
        ),
        value_type=str,
    )  

    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description}],
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "/controller_manager",
        ],
    )  

    prismatic_joint_position_controller = Node(        
        package="controller_manager",
        executable="spawner",
        arguments=["prismatic_joint_position_controller", 
                   "--controller-manager", 
                   "/controller_manager"],
    )           

    arm_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["arm_controller", 
                   "--controller-manager", 
                   "/controller_manager"],
    )

    gripper_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["gripper_controller", 
                   "--controller-manager", 
                   "/controller_manager"],
    )
    
    wheel_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["diff_drive_controller", 
                   "--controller-manager", 
                   "/controller_manager"],
    )    

    return LaunchDescription(
        [   
            robot_state_publisher_node, 
            joint_state_broadcaster_spawner,
            prismatic_joint_position_controller,
            arm_controller_spawner,
            gripper_controller_spawner,
            wheel_controller_spawner,
        ]
    )