// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nodes_interfaces/msg/count_delta.hpp"


#ifndef NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__TRAITS_HPP_
#define NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nodes_interfaces/msg/detail/count_delta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nodes_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CountDelta & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: delta
  {
    out << "delta: ";
    rosidl_generator_traits::value_to_yaml(msg.delta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CountDelta & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta: ";
    rosidl_generator_traits::value_to_yaml(msg.delta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CountDelta & msg, bool use_flow_style = false)
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

}  // namespace nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use nodes_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nodes_interfaces::msg::CountDelta & msg,
  std::ostream & out, size_t indentation = 0)
{
  nodes_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nodes_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nodes_interfaces::msg::CountDelta & msg)
{
  return nodes_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nodes_interfaces::msg::CountDelta>()
{
  return "nodes_interfaces::msg::CountDelta";
}

template<>
inline const char * name<nodes_interfaces::msg::CountDelta>()
{
  return "nodes_interfaces/msg/CountDelta";
}

template<>
struct has_fixed_size<nodes_interfaces::msg::CountDelta>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nodes_interfaces::msg::CountDelta>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nodes_interfaces::msg::CountDelta>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__TRAITS_HPP_
