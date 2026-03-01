/*
   需求：订阅发布方的消息，并在终端中输出
   1.包含头文件 2.初始化ros2客户端 3.自定义节点类，创建订阅方，解析并输出数据
   4.调用spin函数，并传入节点对象指针 5.资源释放
*/

// 1. 包含头文件；
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using std::placeholders::_1;

// 3. 定义节点类；
class MinimalSubscriber : public rclcpp::Node
{
public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
        // 3-1. 创建订阅方；
        subscription_ = this->create_subscription<std_msgs::msg::String>("topic", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    }

private:
    // 3-2. 处理订阅到的消息；
    void topic_callback(const std_msgs::msg::String & msg) const
    {
        RCLCPP_INFO(this->get_logger(), "订阅的消息: '%s'", msg.data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    // 2. 初始化 ROS2 客户端；
    rclcpp::init(argc, argv);

    // 4. 调用 spin 函数，并传入节点对象指针。
    rclcpp::spin(std::make_shared<MinimalSubscriber>());

    // 5. 释放资源；
    rclcpp::shutdown();
    return 0;
}