from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    sender_node = Node(
        package="nodes_py",
        executable="senderExe",
        parameters=[
            {"delta": 3}
        ]
    )
    receiver_node = Node(
        package="nodes_py",
        executable="receiverExe"
    )
    ld.add_action(sender_node)
    ld.add_action(receiver_node)
    return ld