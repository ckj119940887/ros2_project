#!/usr/bin/env python3
import rclpy   # rclpy must be declared as a dependence in package.xml - this should be added automatically when you create the package
from rclpy.node import Node

from example_interfaces.msg import String

class Heater(Node):
    def __init__(self):
        super().__init__("heater")

        # create subscriber
        self.heaterSubscriber_ = self.create_subscription(
            String,
            "fanCmd",
            self.callback_handleCmd,
            10
        )

        self.initialize()

    def callback_handleCmd(self, msg):
        self.cmd_ = msg.data
        self.get_logger().info("the received cmd is " + self.cmd_)

    def initialize(self):
        self.cmd_ = ""

def main(args = None):
    rclpy.init(args=args)
    node = Heater()
    rclpy.spin(node)
    rclpy.shutdown()        
        
if __name__ == "__main__":
    main()  