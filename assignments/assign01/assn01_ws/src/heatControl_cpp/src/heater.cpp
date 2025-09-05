#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

class Heater: public rclcpp::Node
{
public:
   Heater() : Node("heater"), cmd_("")
   {
        heaterSubscriber_ = this->create_subscription<example_interfaces::msg::String>(
            "fanCmd", 
            10, 
            std::bind(&Heater::callback_handleCmd, this, std::placeholders::_1)
        );
   }

   void callback_handleCmd(const example_interfaces::msg::String::SharedPtr msg)
   {
        cmd_ = msg->data;
        RCLCPP_INFO(this->get_logger(), "the received cmd is %s\n", cmd_.c_str());
   }

private:
   std::string cmd_;
   rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr heaterSubscriber_;
};


int main(int argc, char **argv)
{
   rclcpp::init(argc, argv);
   auto node = std::make_shared<Heater>();
   rclcpp::spin(node);
   rclcpp::shutdown();
   return 0;
}