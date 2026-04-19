# Robot Odometry, Localization, Mapping and Control

This project involves various topics related to mobile robotics, focusing on localization, mapping, sensor fusion and control. The work involves creating a robot system capable of understanding its environment, avoiding obstacles and navigating autonomously using a variety of sensors, including LiDAR.

<img width="740" height="890" alt="BumperBot" src="https://github.com/user-attachments/assets/4f57112c-82f2-4b11-bb2e-5649bc04208e" />

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
2. **Install ROS 2 Jazzy** on your Ubuntu 22.04. 
3. **Install ROS 2 missing libraries**. Some libraries that are used in this project are not in the standard ROS package. Install them with:

    ```bash
    sudo apt-get update && sudo apt-get install -y \
    ros-jazzy-joint-state-publisher-gui \
    ros-jazzy-xacro \
    ros-jazzy-ros2-control \
    ros-jazzy-moveit* \
    ros-jazzy-ros2-controllers \
    ros-jazzy-ros-gz-* \
    ros-jazzy-*-ros2-control
    ```

4. **Install VS Code and Arduino IDE** on your PC in order to build and load the Arduino code on the device.
5. **Install Python and C++ additional libraries**:

    ```bash
    sudo apt-get update && sudo apt-get install -y \
    libserial-dev \
    python3-pip
    pip install pyserial
    ```
## Package Structure

```
src/
├── bumperbot_bringup/
|   ├──launch/
|       ├── real_robot.launch.py
|       ├── simulated_robot.launch.py
|
├── bumperbot_description/     # Robot model and visualization
│   ├── urdf/                  # Robot URDF/XACRO files
│   ├── meshes/                # 3D mesh files
│   ├── launch/                # Launch files for visualization
│   ├── rviz/                  # RViz configurations
|   ├── photos/
|   ├── models/
|   ├── worlds/
│
├── bumperbot_controller/          # Robot control configuration
|   ├── bumperbot_controller/
|       ├── noisy_controller.py    # Computes and publishes noisy odometry and TF from joint states.
|       ├── simple_controller.py   # Converts cmd_vel to wheel commands and publishes odometry from joints.
|       ├── twist_relay.py         # Stamps controller twist messages; unstamps joystick twist messages.
│   ├── config/                    # Controller parameters
│   └── launch/                    # Control launch files
│
├── bumperbot_firmware/ 
|   ├── bumperbot_firmware/
|       ├── mpu6050_driver.py                # ROS 2 node publishing MPU6050 IMU data read from I2C.
|       ├── simple_serial_receiver.py        # Reads serial port data and publishes it to a ROS 2 topic.
|       ├── simple_serial_transmitter.py     # Subscribes to ROS 2 topic, writes received strings to serial.
│   ├── config/                
│   └── launch/                
│
├── bumperbot_localization/ 
|   ├── bumperbot_localization/
|       ├── imu_republisher.py          # Subscribes to IMU, changes frame_id and republishes it.
|       ├── kalman_filter.py            # Fuses noisy odometry and IMU angular velocity using Kalman filter.
|       ├── odometry_motion_model.py    # Probabilistic odometry motion model updating a set of particles.
│   ├── config/                
│   └── launch/  
│   └── rviz/ 
|
├── bumperbot_mapping/ 
|   ├── bumperbot_mapping
|       ├── mapping_with_known_poses.py        # Builds an occupancy grid map using laser scans and TF poses.
│   ├── config/                
│   └── launch/  
│   └── rviz/ 
│   └── maps/ 
|
├── bumperbot_msgs/            # Custom ROS 2 interfaces
│   ├── msg/                   # Custom messages
│   ├── srv/                   # Custom services
│   └── action/                # Custom actions
│
├── bumperbot_py_examples/     # Python examples and tutorials
│   └── bumperbot_py_examples/
│       ├── simple_publisher.py
│       ├── simple_subscriber.py
│       ├── simple_service_server.py
│       ├── simple_action_server.py
│       ├── simple_parameter.py
│       └── simple_moveit_interface.py
│       ├── simple_action_client.py
│       ├── simple_lifecycle_node.py
│       ├── simple_qos_publisher.py
│       ├── simple_qos_subscriber.py
│
├── bumperbot_cpp_examples/    # C++ examples and tutorials
│   └── src/                   # C++ source files
│
├── bumperbot_utils/           # Utility functions and tools
│   └── bumperbotbot_utils/
│       └── safety_stop.py
```

## Usage

### 1. Basic Visualization:
Displays the robot model in RViz to enable visual inspection and manual joint manipulation.

```bash
1. ros2 launch urdf_tutorial display.launch.py model:=/home/eeiww/ud90uhak/bumperbot_ws/src/bumperbot_description/urdf/bumperbot.urdf.xacro
                           or
2. ros2 launch bumperbot_description display.launch.py
```
<img width="2560" height="1440" alt="Screenshot from 2025-11-09 17-12-17" src="https://github.com/user-attachments/assets/0e945d44-7471-49ed-97da-76cc2cc71de6" />

<img width="2560" height="1440" alt="Screenshot from 2025-11-09 17-13-16" src="https://github.com/user-attachments/assets/a0dbe87a-bbd5-42bd-a7e6-45fbfbf47dc1" />

What does this show: This command launches your robot's model in the RViz visualizer, simultaneously opening a GUI to manually control its joints and see the movements update in real-time.

### 2. Gazebo Simulation
Launch the Gazebo simulation environment:

```bash
# Terminal 1: Start Gazebo simulation
ros2 launch arduinobot_description gazebo.launch.py

# Terminal 2: Load and start controllers
ros2 launch arduinobot_controller controller.launch.py
```
<img width="2560" height="1440" alt="Screenshot from 2025-11-09 17-24-49" src="https://github.com/user-attachments/assets/36382fc9-2852-4c2a-8043-411e8fa22661" />

You can use this platform for realistic physics simulation, interactive robot control, sensor integration and environmental interactions.

### 3. Laser scan of objects

```bash
terminal 1: cd bumperbot_ws/src
            . install/setup.bash
            ros2 launch bumperbot_description gazebo.launch.py

terminal 2: . install/setup.bash
            rviz2
```
<img width="2560" height="1440" alt="Screenshot from 2025-11-09 17-45-06" src="https://github.com/user-attachments/assets/32035180-6447-424d-b365-20b4dfc425b8" />

This setup simulates a laser scan of objects in Gazebo and visualizes the resulting data as series of points in RViz.

### 4. To launch virtual environments in Gazebo

```bash
1. ros2 launch bumperbot_description gazebo.launch.py world_name:=small_house
2. ros2 launch bumperbot_description gazebo.launch.py world_name:=small_warehouse
```
<img width="2560" height="1440" alt="Screenshot from 2025-11-09 18-02-21" src="https://github.com/user-attachments/assets/b42ca96d-f7f2-431b-827c-3023facf3100" />

<img width="2560" height="1440" alt="Screenshot from 2025-11-09 18-04-31" src="https://github.com/user-attachments/assets/798c5864-963d-4e2d-9562-b75f0c9774d2" />

Using this launch file, we can load various artificial environments that simulate the real world, such as a 'small_house' or 'small_warehouse', simply by changing the world_name argument.

### 5. Safety stop

```bash
terminal 1: ros2 launch bumperbot_bringup simulated_robot.launch.py

terminal 2: ros2 run bumperbot_utils safety_stop.py

terminal 3:  rviz2
```

![Screenshot from 2025-11-09 19-53-16](https://github.com/user-attachments/assets/357eac24-2d7d-405a-aaf7-ff51f58a5241)

![Screenshot from 2025-11-09 19-52-16](https://github.com/user-attachments/assets/ca760d5a-4f3b-4b94-9697-ab40d81d3641)

![Screenshot from 2025-11-09 19-54-32](https://github.com/user-attachments/assets/7034ce4c-6364-48b4-b5e8-61e2a7bbd144)

Zones: 
    1. Danger Zone (Red): 20cm from the robot.
    2. warning distance(Yellow): 60cm from the robot.

### 5. Running SLAM for Mapping (Graph based SLAM Algorithm)

```bash
ros2 launch bumperbot_bringup simulated_robot.py world_name:=small_house
```

<img width="1153" height="813" alt="Screenshot from 2025-11-09 18-19-21" src="https://github.com/user-attachments/assets/0c26d2cc-cfb6-4ef9-b4f3-a3c385b192cd" />

## To launch the ROS 2 Simulated robot:

```bash
ros2 launch bumperbot_bringup simulated_robot.launch.py
   ```
## Contact
 
Jeswanth Kanipakam: LinkedIn - https://www.linkedin.com/in/jeswanth-kanipakam

Email:  jeswanthkanipakam@gmail.com

