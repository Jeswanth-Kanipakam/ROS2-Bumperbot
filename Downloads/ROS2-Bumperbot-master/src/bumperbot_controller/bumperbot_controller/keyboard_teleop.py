#!/usr/bin/env python3
"""
keyboard_teleop.py
------------------
ROS 2 Jazzy - Keyboard teleoperation node for bumperbot.

Run directly in a terminal:
    ros2 run bumperbot_controller keyboard_teleop.py

Arrow keys  : move / turn
Space       : emergency stop
Q           : quit
"""

import sys
import tty
import termios

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

BANNER = """
╔══════════════════════════════════════════╗
║     bumperbot  –  Keyboard Teleop        ║
╠══════════════════════════════════════════╣
║   ↑  Arrow Up     : forward              ║
║   ↓  Arrow Down   : backward             ║
║   ←  Arrow Left   : turn left            ║
║   →  Arrow Right  : turn right           ║
║   SPACE           : stop                 ║
║   q               : quit                 ║
╚══════════════════════════════════════════╝
"""


def get_key(settings):
    """Block until a key is pressed and return it as a string."""
    tty.setraw(sys.stdin.fileno())
    ch1 = sys.stdin.read(1)
    if ch1 == '\x1b':
        ch2 = sys.stdin.read(1)   # expect '['
        ch3 = sys.stdin.read(1)   # expect A/B/C/D
        key = ch1 + ch2 + ch3
    else:
        key = ch1
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key


class KeyboardTeleop(Node):
    def __init__(self):
        super().__init__("keyboard_teleop")

        # Note: use_sim_time is built-in, do NOT declare it
        self.declare_parameter("linear_speed",  0.3)
        self.declare_parameter("angular_speed", 1.0)
        self.declare_parameter("cmd_vel_topic", "key_vel")

        self.linear_speed  = self.get_parameter("linear_speed").value
        self.angular_speed = self.get_parameter("angular_speed").value
        topic              = self.get_parameter("cmd_vel_topic").value

        self.pub = self.create_publisher(Twist, topic, 10)
        self.get_logger().info(f"Publishing on: {topic}")
        self.get_logger().info(
            f"linear_speed={self.linear_speed} m/s  "
            f"angular_speed={self.angular_speed} rad/s"
        )

    def publish_twist(self, linear_x: float, angular_z: float) -> None:
        msg = Twist()
        msg.linear.x  = linear_x
        msg.angular.z = angular_z
        self.pub.publish(msg)

    def stop(self):
        self.publish_twist(0.0, 0.0)


def main(args=None):
    rclpy.init(args=args)
    node = KeyboardTeleop()
    settings = termios.tcgetattr(sys.stdin)
    print(BANNER)

    try:
        while rclpy.ok():
            key = get_key(settings)

            if key == '\x1b[A':
                node.publish_twist(node.linear_speed, 0.0)
                print("↑  Forward")

            elif key == '\x1b[B':
                node.publish_twist(-node.linear_speed, 0.0)
                print("↓  Backward")

            elif key == '\x1b[D':
                node.publish_twist(0.0, node.angular_speed)
                print("←  Turn left")

            elif key == '\x1b[C':
                node.publish_twist(0.0, -node.angular_speed)
                print("→  Turn right")

            elif key == ' ':
                node.stop()
                print("⬜  Stop")

            elif key == 'q':
                print("Quitting …")
                node.stop()
                break

            rclpy.spin_once(node, timeout_sec=0.0)

    except Exception as exc:
        print(f"Error: {exc}")
    finally:
        node.stop()
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
