#!/usr/bin/env python3
import rclpy   # rclpy must be declared as a dependence in package.xml - this should be added automatically when you create the package
from rclpy.node import Node

from example_interfaces.msg import Int32
from rcl_interfaces.msg import ParameterDescriptor
import random

class TempSensor(Node):
    def __init__(self):
        super().__init__("tempSensor")

        # declare parameter
        period_parameter_descriptor = ParameterDescriptor(description='timer period value')
        self.declare_parameter('period', 1, period_parameter_descriptor)

        # create publisher
        self.tempSensorPublisher_ = self.create_publisher(Int32, "currentTemp", 10)

        # create timer
        self.timer_ = self.create_timer(
            self.get_parameter('period').value,
            self.callback_handleTimer
        )

        self.initialize()

    def callback_handleTimer(self):
        self.temperature_: int = random.randint(80,120)
        msg = Int32()
        msg.data = self.temperature_
        self.tempSensorPublisher_.publish(msg)
        self.get_logger().info("current temperature is " + str(self.temperature_))

    def initialize(self):
        self.temperature_ = 0

def main(args = None):
    rclpy.init(args=args)
    node = TempSensor()
    rclpy.spin(node)
    rclpy.shutdown()        
        
if __name__ == "__main__":
    main()  