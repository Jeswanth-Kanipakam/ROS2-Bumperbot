import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():

    bumperbot_controller_pkg = get_package_share_directory("bumperbot_controller")

    use_sim_time_arg = DeclareLaunchArgument(
        name="use_sim_time", default_value="True",
        description="Use simulated (Gazebo) clock",
    )
    linear_speed_arg = DeclareLaunchArgument(
        name="linear_speed", default_value="0.3",
        description="Linear speed in m/s per arrow-key press",
    )
    angular_speed_arg = DeclareLaunchArgument(
        name="angular_speed", default_value="1.0",
        description="Angular speed in rad/s per arrow-key press",
    )

    # twist_mux
    twist_mux_launch = IncludeLaunchDescription(
        os.path.join(
            get_package_share_directory("twist_mux"),
            "launch", "twist_mux_launch.py",
        ),
        launch_arguments={
            "cmd_vel_out":   "bumperbot_controller/cmd_vel_unstamped",
            "config_locks":  os.path.join(bumperbot_controller_pkg, "config", "twist_mux_locks.yaml"),
            "config_topics": os.path.join(bumperbot_controller_pkg, "config", "twist_mux_topics.yaml"),
            "config_joy":    os.path.join(bumperbot_controller_pkg, "config", "twist_mux_joy.yaml"),
            "use_sim_time":  LaunchConfiguration("use_sim_time"),
        }.items(),
    )

    # twist_relay
    twist_relay_node = Node(
        package="bumperbot_controller",
        executable="twist_relay.py",
        name="twist_relay",
        parameters=[{"use_sim_time": LaunchConfiguration("use_sim_time")}],
    )

    return LaunchDescription([
        use_sim_time_arg,
        linear_speed_arg,
        angular_speed_arg,
        twist_mux_launch,
        twist_relay_node,
    ])