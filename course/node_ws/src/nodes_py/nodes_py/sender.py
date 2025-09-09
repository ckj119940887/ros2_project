#!/usr/bin/env python3
import rclpy   # rclpy must be declared as a dependence in package.xml - this should be added automatically when you create the package
from rclpy.node import Node

from example_interfaces.msg import Int32
from rcl_interfaces.msg import ParameterDescriptor
from nodes_interfaces.msg import CountDelta
from nodes_interfaces.srv import ResetCount

class Sender(Node):
    def __init__(self):
        super().__init__("SenderRT")

        delta_parameter_descriptor = ParameterDescriptor(description='Delta value for count')
        self.declare_parameter('delta', 3, delta_parameter_descriptor)

        myTimerPeriod = 1
        self.myTimer_ = self.create_timer(myTimerPeriod, self.handle_myTimer)

        #self.countPublisher_ = self.create_publisher(Int32, "count", 10)
        self.countPublisher_ = self.create_publisher(CountDelta, "count", 10)  

        self.resetService_ = self.create_service(ResetCount, "reset", self.handle_reset)

        self.get_logger().info("Sender infrastructure set up")

        self.initialize()


    def initialize(self):
        self.delta = self.get_parameter('delta').value
        self.get_logger().info("Initialize Entry Point invoked")
        self.count = 0

    def handle_reset(self, request: ResetCount.Request, response: ResetCount.Response):
        self.get_logger().info("Handler for reset service invoked; new count = " + str(request.new_count))
        response.old_count = self.count
        self.count = request.new_count
        return response

    def handle_myTimer(self):
        self.get_logger().info("Handler for myTimer invoked; count = " + str(self.count))
        #msg = Int32()
        #msg.data = self.count
        msg = CountDelta()
        msg.count = self.count
        msg.delta = self.delta
        self.countPublisher_.publish(msg)
        self.count += self.delta

def main(args = None):
    rclpy.init(args=args)
    node = Sender()
    rclpy.spin(node)
    rclpy.shutdown()        
        
if __name__ == "__main__":
    main()        