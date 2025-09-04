#!/usr/bin/env python3
import rclpy   # rclpy must be declared as a dependence in package.xml - this should be added automatically when you create the package
from rclpy.node import Node

from example_interfaces.msg import Int32
from nodes_interfaces.msg import CountDelta

class Receiver(Node):
    def __init__(self):
        super().__init__("ReceiverRT")

        self.countSubscribers = self.create_subscription(
            #Int32, 
            CountDelta,
            "count", 
            self.handle_count,
            10
        )

        self.get_logger().info("My_Py_Node infrastructure set up")

        self.initialize()


    def initialize(self):
        self.get_logger().info("Initialize Entry Point invoked")


    def handle_count(self, msg):
        self.get_logger().info("Handler for count invoked")
        #self.get_logger().info("I heard: " + str(msg.data))
        self.get_logger().info("I heard: " + str(msg.count))

def main(args = None):
    rclpy.init(args=args)
    node = Receiver()
    rclpy.spin(node)
    rclpy.shutdown()        
        
if __name__ == "__main__":
    main()  