# CMake Error: different directory
```
rm -rf build install log
colcon build
```

# package create
```
ros2 pkg create nodes_py --build-type ament_python --dependencies rclpy
ros2 pkg create nodes_cpp --build-type ament_cmake --dependencies rclcpp
```
