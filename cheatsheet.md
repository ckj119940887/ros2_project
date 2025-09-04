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

# custom node 
```
after created node, modify setup.py

Edit the setup.py file to specify to the build system the file name to use for the executable (senderExe), the package and source file name (nodes_py.sender) and the function within the source file to use as the entry point (main):

entry_points={
      'console_scripts': [
         "senderExe = nodes_py.sender:main"
      ],
},
```

# import interface
```
after you import one interface, please add the corresponding name in package.xml

for example:
from example_interfaces.msg import Int32

add the following content in package.xml
<depend>example_interfaces</depend>
```

# luanch file
```
create package called xxx_bringup:
ros2 pkg create nodes_bringup

Enter the created directory:
rm -rf include/ src/

create your own folder:
mkdir launch
touch launch/nodes.launch.py
```

```
using the following template:

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  ld = LaunchDescription()
  sender_node = Node(
      package="nodes_py",
      executable="senderExe", # match executable name in your setup.py (or CMake)
  )
  receiver_node = Node(
      package="nodes_py",
      executable="receiverExe"
  )
  ld.add_action(sender_node)
  ld.add_action(receiver_node)
  return ld
```

```
Since our node executables are in packages that are different from our launch file package, we need to tell our launch file package about the other packages.
Go to the package.xml of your launch file package, and add an “exec_depend” tag for each dependency.

<exec_depend>nodes_py</exec_depend>
```

```
Go into the CMakeLists.txt of your launch package, and after find_package(ament_cmake REQUIRED), add exactly the following (the PROJECT_NAME references an environment variable):

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)
```

# custom interface
```
create a package under src directory: ros2 pkg create nodes_interfaces

Enter the created directory:
rm -rf src include

create your own folder:
mkdir msg srv
```

```
modify package.xml and add the following contents:
<buildtool_depend>rosidl_default_generators</buildtool_depend>
<exec_depend>rosidl_default_runtime</exec_depend>
<member_of_group>rosidl_interface_packages</member_of_group>
```

```
moidfy CMakeList.txt and add the following contents (after):

find_package(rosidl_default_generators REQUIRED)
# Also add packages that your interfaces depend 

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Num.msg"
  "msg/Sphere.msg"
  "srv/AddThreeInts.srv"
  # Add packages that above messages depend on
)
```

```
import your customized interface, and do not forget to add the interface in the package.xml:

from node_interfaces.msg import CountDelta
```