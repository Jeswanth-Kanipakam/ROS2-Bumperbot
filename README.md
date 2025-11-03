# Robot Odometry, Localization, Mapping and Control

This project involves various topics related to mobile robotics, focusing on localization, mapping, sensor fusion, and control. The work involves creating a robot system capable of understanding its environment, avoiding obstacles, and navigating autonomously using a variety of sensors, including LiDAR.

## Techniques used:

1. **Sensor Fusion:**
Combined data from different sensors (e.g., LiDAR, IMU) to improve the robot's state estimation.

2. **Kalman Filter:**
Implemented to predict and correct the robot's position based on sensor readings.

3. **Probability Theory:**
Applied in probabilistic models for localization and mapping, including handling uncertainties in sensor measurements.

4. **Robot Kinematics:**
Studied the robot's motion model, including the relationship between wheel velocities and position changes.

5. **Odometry:**
Used to estimate the robot's position over time based on wheel encoders.

6. **Robot Localization:**
Focused on determining the robot's position within a map using techniques like particle filters.

7. **Control:**
Developed control algorithms to move the robot in a desired direction while avoiding obstacles.

8. **Map Representations:**
Created a map representation for navigation, such as grid maps or occupancy grids.

9. **Mapping:**
Implemented techniques for constructing a map of the environment using sensors (LiDAR).

10. **SLAM (Simultaneous Localization and Mapping):**
Designed and tested SLAM algorithms to allow the robot to both localize itself and build a map simultaneously.

11. **Obstacle Avoidance:**
Used sensors (LiDAR, cameras) to detect obstacles and plan paths to avoid them.

12. **Speed and Separation Monitoring:**
Monitored the robot's speed and maintained separation from obstacles and other robots.

13. **Using LiDAR Sensors:**
Implemented algorithms to process and interpret data from LiDAR sensors to generate maps and detect obstacles.

## Prerequisites

To prepare your PC you need:

1. **Install Ubuntu 22.04** on PC or in Virtual Machine. Download the ISO [Ubuntu 22.04 for your PC](https://ubuntu.com/download/desktop).
2. **Install ROS 2 Humble or Jazzy** on your Ubuntu 22.04. 
3. **Install ROS 2 missing libraries**. Some libraries that are used in this project are not in the standard ROS package. Install them with:

    ```bash
    sudo apt-get update && sudo apt-get install -y \
    ros-humble-joint-state-publisher-gui \
    ros-humble-xacro \
    ros-humble-ros2-control \
    ros-humble-moveit* \
    ros-humble-ros2-controllers \
    ros-humble-ros-gz-* \
    ros-humble-*-ros2-control
    ```

4. **Install VS Code and Arduino IDE** on your PC in order to build and load the Arduino code on the device.
5. **Install Python and C++ additional libraries**:

    ```bash
    sudo apt-get update && sudo apt-get install -y \
    libserial-dev \
    python3-pip
    pip install pyserial
    ```

## Usage

## To launch the ROS 2 Simulated robot:

```bash
ros2 launch bumperbot_bringup simulated_robot.launch.py
   ```
## Contact
 
Jeswanth Kanipakam: LinkedIn - https://www.linkedin.com/in/jeswanth-kanipakam

Email:  jeswanthkanipakam@gmail.com

