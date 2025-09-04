// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nodes_interfaces:srv/ResetCount.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nodes_interfaces/srv/reset_count.hpp"


#ifndef NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__BUILDER_HPP_
#define NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nodes_interfaces/srv/detail/reset_count__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nodes_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetCount_Request_new_count
{
public:
  Init_ResetCount_Request_new_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nodes_interfaces::srv::ResetCount_Request new_count(::nodes_interfaces::srv::ResetCount_Request::_new_count_type arg)
  {
    msg_.new_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nodes_interfaces::srv::ResetCount_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nodes_interfaces::srv::ResetCount_Request>()
{
  return nodes_interfaces::srv::builder::Init_ResetCount_Request_new_count();
}

}  // namespace nodes_interfaces


namespace nodes_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetCount_Response_old_count
{
public:
  Init_ResetCount_Response_old_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nodes_interfaces::srv::ResetCount_Response old_count(::nodes_interfaces::srv::ResetCount_Response::_old_count_type arg)
  {
    msg_.old_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nodes_interfaces::srv::ResetCount_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nodes_interfaces::srv::ResetCount_Response>()
{
  return nodes_interfaces::srv::builder::Init_ResetCount_Response_old_count();
}

}  // namespace nodes_interfaces


namespace nodes_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetCount_Event_response
{
public:
  explicit Init_ResetCount_Event_response(::nodes_interfaces::srv::ResetCount_Event & msg)
  : msg_(msg)
  {}
  ::nodes_interfaces::srv::ResetCount_Event response(::nodes_interfaces::srv::ResetCount_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nodes_interfaces::srv::ResetCount_Event msg_;
};

class Init_ResetCount_Event_request
{
public:
  explicit Init_ResetCount_Event_request(::nodes_interfaces::srv::ResetCount_Event & msg)
  : msg_(msg)
  {}
  Init_ResetCount_Event_response request(::nodes_interfaces::srv::ResetCount_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ResetCount_Event_response(msg_);
  }

private:
  ::nodes_interfaces::srv::ResetCount_Event msg_;
};

class Init_ResetCount_Event_info
{
public:
  Init_ResetCount_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetCount_Event_request info(::nodes_interfaces::srv::ResetCount_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ResetCount_Event_request(msg_);
  }

private:
  ::nodes_interfaces::srv::ResetCount_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nodes_interfaces::srv::ResetCount_Event>()
{
  return nodes_interfaces::srv::builder::Init_ResetCount_Event_info();
}

}  // namespace nodes_interfaces

#endif  // NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__BUILDER_HPP_
