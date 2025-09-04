// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nodes_interfaces/msg/count_delta.hpp"


#ifndef NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__BUILDER_HPP_
#define NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nodes_interfaces/msg/detail/count_delta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nodes_interfaces
{

namespace msg
{

namespace builder
{

class Init_CountDelta_delta
{
public:
  explicit Init_CountDelta_delta(::nodes_interfaces::msg::CountDelta & msg)
  : msg_(msg)
  {}
  ::nodes_interfaces::msg::CountDelta delta(::nodes_interfaces::msg::CountDelta::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nodes_interfaces::msg::CountDelta msg_;
};

class Init_CountDelta_count
{
public:
  Init_CountDelta_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountDelta_delta count(::nodes_interfaces::msg::CountDelta::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_CountDelta_delta(msg_);
  }

private:
  ::nodes_interfaces::msg::CountDelta msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nodes_interfaces::msg::CountDelta>()
{
  return nodes_interfaces::msg::builder::Init_CountDelta_count();
}

}  // namespace nodes_interfaces

#endif  // NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__BUILDER_HPP_
