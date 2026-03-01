/*  
需求：编写客户端，发送两个整型变量作为请求数据，并处理响应结果。  
步骤：  
1. 包含头文件；  
2. 初始化 ROS2 客户端；  
3. 定义节点类；  
   3-1. 创建客户端；  
   3-2. 等待服务连接；  
   3-3. 组织请求数据并发送；  
4. 创建对象指针调用其功能，并处理响应；  
5. 释放资源。  
*/  

// 1. 包含头文件；  
#include "rclcpp/rclcpp.hpp"  
#include "base_interfaces_demo/srv/add_ints.hpp"  

using base_interfaces_demo::srv::AddInts;  
using namespace std::chrono_literals;  

// 3. 定义节点类；  
class MinimalClient : public rclcpp::Node {  
public:  
    MinimalClient() : Node("minimal_client") {  
        // 3-1. 创建客户端；  
        client_ = this->create_client<AddInts>("add_ints");  
        RCLCPP_INFO(this->get_logger(), "客户端创建，等待连接服务器！");  
    }  

    // 3-2. 等待服务连接；  
    bool connect_server() {  
        while (!client_->wait_for_service(1s)) {  
            if (!rclcpp::ok()) {  
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "强制退出！");  
                return false;  
            }  
            RCLCPP_INFO(this->get_logger(), "服务连接中，请稍候...");  
        }  
        return true;  
    }  

    // 3-3. 组织请求数据并发送；  
    auto send_request(int32_t num1, int32_t num2) {  // 使用 auto 简化返回类型
        auto request = std::make_shared<AddInts::Request>();  
        request->num1 = num1;  
        request->num2 = num2;  
        return client_->async_send_request(request);  
    }  

private:  
    rclcpp::Client<AddInts>::SharedPtr client_;  
};  

int main(int argc, char ** argv) {  
    // 检查命令行参数
    if (argc != 3) {  
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "请指定两个整数数据！用法：%s <num1> <num2>", argv[0]);  
        return 1;  
    }  

    // 2. 初始化 ROS2 客户端；  
    rclcpp::init(argc, argv);  

    // 4. 创建对象指针调用其功能；  
    auto client = std::make_shared<MinimalClient>();  

    // 等待服务连接
    bool flag = client->connect_server();  
    if (!flag) {  
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "服务连接失败！");  
        rclcpp::shutdown();  
        return 1;  
    }  

    // 发送请求
    auto future_result = client->send_request(atoi(argv[1]), atoi(argv[2]));  

    
    if (rclcpp::spin_until_future_complete(client, future_result) == rclcpp::FutureReturnCode::SUCCESS) {  
        auto response = future_result.get();
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "请求成功！结果：%d + %d = %d", 
                    atoi(argv[1]), atoi(argv[2]), response->sum);  
    } else {  
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "请求异常！");  
    }  

    // 5. 释放资源。  
    rclcpp::shutdown();  
    return 0;  
}