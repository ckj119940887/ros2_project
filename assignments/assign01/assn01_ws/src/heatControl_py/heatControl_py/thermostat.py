#!/usr/bin/env python3
import rclpy   # rclpy must be declared as a dependence in package.xml - this should be added automatically when you create the package
from rclpy.node import Node

from example_interfaces.msg import Int32
from example_interfaces.msg import String

class Thermostat(Node):
    def __init__(self):
        super().__init__("thermostat")

        # create publisher
        self.thermostatPublisher_ = self.create_publisher(
            String, 
            "fanCmd", 
            10
        )

        # create subscriber
        self.thermostatSubscriber_ = self.create_subscription(
            Int32,
            "currentTemp",
            self.callback_handleTemp,
            10
        )

        self.initialize()

    def callback_handleTemp(self, msg):
        self.temperature_ = msg.data

        if(self.temperature_ < self.lowSetPoint_):
            self.lastCmd_ = "on"
        elif(self.temperature_ > self.highSetPoint_):
            self.lastCmd_ = "off"

        # publish the cmd
        cmdMsg = String()
        cmdMsg.data = self.lastCmd_
        self.thermostatPublisher_.publish(cmdMsg)
        self.get_logger().info("the cmd is " + self.lastCmd_)


    def initialize(self):
        self.lastCmd_ = ""
        self.temperature_ = 0
        self.lowSetPoint_ = 90
        self.highSetPoint_ = 110

def main(args = None):
    rclpy.init(args=args)
    node = Thermostat()
    rclpy.spin(node)
    rclpy.shutdown()        
        
if __name__ == "__main__":
    main()  