// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/msg/num.hpp"


#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces_demo/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_Num_num2
{
public:
  explicit Init_Num_num2(::base_interfaces_demo::msg::Num & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::Num num2(::base_interfaces_demo::msg::Num::_num2_type arg)
  {
    msg_.num2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::Num msg_;
};

class Init_Num_num1
{
public:
  Init_Num_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_num2 num1(::base_interfaces_demo::msg::Num::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return Init_Num_num2(msg_);
  }

private:
  ::base_interfaces_demo::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::Num>()
{
  return base_interfaces_demo::msg::builder::Init_Num_num1();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__BUILDER_HPP_
