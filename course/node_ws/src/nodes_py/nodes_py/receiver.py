#!/usr/bin/env python3
import rclpy   # rclpy must be declared as a dependence in package.xml - this should be added automatically when you create the package
from rclpy.node import Node

from example_interfaces.msg import Int32
from nodes_interfaces.msg import CountDelta
from nodes_interfaces.srv import ResetCount

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
        if(msg.count > 50):
            self.get_logger().info("Need to reset count")
            self.call_reset_service(0)

    def call_reset_service(self, n_count):
        client = self.create_client(ResetCount, "reset")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for reset service...")
        request = ResetCount.Request()
        request.new_count = n_count
        future = client.call_async(request)
        future.add_done_callback(self.handle_reset_service_response)

    def handle_reset_service_response(self, future):
        try:
            response = future.result()
            self.get_logger().info("Count reset. Old count was " + str(response.old_count))
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

def main(args = None):
    rclpy.init(args=args)
    node = Receiver()
    rclpy.spin(node)
    rclpy.shutdown()        
        
if __name__ == "__main__":
    main()  