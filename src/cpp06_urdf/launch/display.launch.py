from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command, LaunchConfiguration
from launch.actions import DeclareLaunchArgument

def generate_launch_description():

    cpp06_urdf_dir = get_package_share_directory("cpp06_urdf")

    # URDF 文件路径
    default_model_path = os.path.join(
        cpp06_urdf_dir,
        "urdf/urdf",
        "demo02_link.urdf"
    )

    # RViz 配置路径
    default_rviz_path = os.path.join(
        cpp06_urdf_dir,
        "rviz",
        "display.rviz"
    )

    # 声明启动参数
    model = DeclareLaunchArgument(
        name="model",
        default_value=default_model_path,
        description="URDF file path"
    )

    # ⭐ 关键修改：直接读取 URDF 文件（不要用 xacro）
    robot_description = ParameterValue(
        Command(["cat ", LaunchConfiguration("model")]),
        value_type=str
    )

    # robot_state_publisher
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description}]
    )

    # joint_state_publisher（用于发布关节状态）
    joint_state_publisher = Node(
        package="joint_state_publisher",
        executable="joint_state_publisher"
    )

    # RViz 节点
    rviz2 = Node(
        package="rviz2",
        executable="rviz2",
        arguments=["-d", default_rviz_path]
    )

    return LaunchDescription([
        model,
        robot_state_publisher,
        joint_state_publisher,
        rviz2
    ])
