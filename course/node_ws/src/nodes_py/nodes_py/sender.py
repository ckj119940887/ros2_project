#!/usr/bin/env python3
import rclpy   # rclpy must be declared as a dependence in package.xml - this should be added automatically when you create the package
from rclpy.node import Node

from example_interfaces.msg import Int32
from rcl_interfaces.msg import ParameterDescriptor

class Sender(Node):
    def __init__(self):
        super().__init__("SenderRT")

        delta_parameter_descriptor = ParameterDescriptor(description='Delta value for count')
        self.declare_parameter('delta', 3, delta_parameter_descriptor)

        myTimerPeriod = 1
        self.myTimer_ = self.create_timer(myTimerPeriod, self.handle_myTimer)

        self.countPublisher_ = self.create_publisher(Int32, "count", 10)

        self.get_logger().info("Sender infrastructure set up")

        self.initialize()


    def initialize(self):
        self.delta = self.get_parameter('delta').value
        self.get_logger().info("Initialize Entry Point invoked")
        self.count = 0


    def handle_myTimer(self):
        self.get_logger().info("Handler for myTimer invoked; count = " + str(self.count))
        msg = Int32()
        msg.data = self.count
        self.countPublisher_.publish(msg)
        self.count += self.delta

def main(args = None):
    rclpy.init(args=args)
    node = Sender()
    rclpy.spin(node)
    rclpy.shutdown()        
        
if __name__ == "__main__":
    main()        