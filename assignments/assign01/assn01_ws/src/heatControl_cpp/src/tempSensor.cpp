#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int32.hpp"
#include <random>

class TempSensor: public rclcpp::Node
{
public:
   TempSensor() : Node("tempSensor"), temperature_(3)
   {
         tempSensorPublisher_ = this->create_publisher<example_interfaces::msg::Int32>("currentTemp", 10);
         this->declare_parameter("period", 1);
         timer_ = this->create_wall_timer(
           std::chrono::seconds(this->get_parameter("period").as_int()), 
           std::bind(&TempSensor::callback_handleTimer, this)
         );
   }

   void callback_handleTimer()
   {
         std::random_device rd;
         std::mt19937 gen(rd()); // Mersenne Twister engine
         std::uniform_int_distribution<> dist(80, 120); // range: 1 to 100

         temperature_ = dist(gen);
         auto msg = example_interfaces::msg::Int32();
         msg.data = temperature_;
         tempSensorPublisher_->publish(msg);

         RCLCPP_INFO(this->get_logger(), "the current temperature is %d\n", temperature_);
   }
private:
   int temperature_;
   rclcpp::Publisher<example_interfaces::msg::Int32>::SharedPtr tempSensorPublisher_;
   rclcpp::TimerBase::SharedPtr timer_;
};


int main(int argc, char **argv)
{
   rclcpp::init(argc, argv);
   auto node = std::make_shared<TempSensor>();
   rclcpp::spin(node);
   rclcpp::shutdown();
   return 0;
}