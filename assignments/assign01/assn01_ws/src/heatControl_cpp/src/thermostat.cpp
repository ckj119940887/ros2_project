#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int32.hpp"
#include "example_interfaces/msg/string.hpp"

class Thermostat : public rclcpp::Node
{
public:
   Thermostat() : Node("thermostat"), temperature_(0), lowSetPoint_(90), highSetPoint_(110), lastCmd_("")
   {
        thermostatPublisher_ = this->create_publisher<example_interfaces::msg::String>("fanCmd", 10);
        thermostatSubscriber_ = this->create_subscription<example_interfaces::msg::Int32>(
            "currentTemp", 
            10, 
            std::bind(&Thermostat::callback_handleTemp, this, std::placeholders::_1)
        );
   }

   void callback_handleTemp(const example_interfaces::msg::Int32::SharedPtr msg)
   {
        temperature_ = msg->data;
        auto cmdMsg = example_interfaces::msg::String();
        if(temperature_ < this->lowSetPoint_) {
            cmdMsg.data = "on";
        } else if(temperature_ > this->highSetPoint_) {
            cmdMsg.data = "off";
        }
        thermostatPublisher_->publish(cmdMsg);
   }

private:
   int temperature_;
   int lowSetPoint_;
   int highSetPoint_;
   std::string lastCmd_;
   rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr thermostatPublisher_;
   rclcpp::Subscription<example_interfaces::msg::Int32>::SharedPtr thermostatSubscriber_;
};


int main(int argc, char **argv)
{
   rclcpp::init(argc, argv);
   auto node = std::make_shared<Thermostat>();
   rclcpp::spin(node);
   rclcpp::shutdown();
   return 0;
}