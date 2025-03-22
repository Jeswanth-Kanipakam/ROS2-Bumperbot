📌 Project Overview

  ROS2 - Bumperbot is an autonomous self-driving robot designed using ROS2 and Python. The primary focus of this project is to implement odometry, control systems, and sensor fusion to enable precise and efficient autonomous navigation.

🔧 Technologies & Tools Used

  - ROS2 (Robot Operating System 2) – Middleware for robotic applications

  - Python – Core programming language for control and sensor integration

  - LiDAR, IMU, Camera Sensors – Real-time environmental sensing

  - Kalman Filters – Sensor fusion for localization and state estimation

  - Gazebo & Rviz2 – Simulation and visualization of the robot

🚀 Key Features

  - Autonomous Navigation – Enables self-driving capabilities in dynamic environments

  - Odometry & Localization – Tracks robot position and movement

  - Sensor Fusion – Combines multiple sensor inputs using Kalman Filtering

  - ROS2 Control System – Manages motor control and path planning

  - Simulation & Testing – Validates navigation in a virtual Gazebo environment

🛠️ Setup & Installation

  1️⃣ Prerequisites

    - Ubuntu 22.04 (Recommended) with ROS2 (Humble/Jazzy) installed

    - Python 3.x

    - Gazebo & Rviz2

  2️⃣ Installation Steps

    - Clone the repository: git clone https://github.com/yourusername/ROS2-Bumperbot.gitcd ROS2-Bumperbot
    - Build the ROS2 workspace: colcon build source install/setup.bash
    - Launch the robot simulation: ros2 launch bumperbot_description bumperbot_gazebo.launch.py
    - Run autonomous navigation: ros2 launch bumperbot_navigation navigation.launch.py

📊 Simulation & Results

  - Odometry Tracking: Ensures real-time monitoring of robot movement

  - Localization: Uses sensor fusion for improved position estimation

  - Obstacle Avoidance: Detects and avoids obstacles dynamically

📈 Future Enhancements

  - Implement SLAM (Simultaneous Localization and Mapping)

  - Add Deep Learning for Object Detection

  - Improve Path Planning Algorithms

🤝 Contributing

    Feel free to contribute by submitting issues and pull requests!

📞 Contact

JeswanthKanipakam

jeswanthkanipakam@gmail.com
