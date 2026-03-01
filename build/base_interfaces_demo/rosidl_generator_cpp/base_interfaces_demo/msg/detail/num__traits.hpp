// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/msg/num.hpp"


#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces_demo/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces_demo
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: num1
  {
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << ", ";
  }

  // member: num2
  {
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << "\n";
  }

  // member: num2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace base_interfaces_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces_demo::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces_demo::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces_demo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces_demo::msg::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces_demo::msg::Num & msg)
{
  return base_interfaces_demo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces_demo::msg::Num>()
{
  return "base_interfaces_demo::msg::Num";
}

template<>
inline const char * name<base_interfaces_demo::msg::Num>()
{
  return "base_interfaces_demo/msg/Num";
}

template<>
struct has_fixed_size<base_interfaces_demo::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__TRAITS_HPP_
