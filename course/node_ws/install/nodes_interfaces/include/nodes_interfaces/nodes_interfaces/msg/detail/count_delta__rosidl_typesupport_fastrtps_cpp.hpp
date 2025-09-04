// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice

#ifndef NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "nodes_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "nodes_interfaces/msg/detail/count_delta__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace nodes_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nodes_interfaces
cdr_serialize(
  const nodes_interfaces::msg::CountDelta & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nodes_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nodes_interfaces::msg::CountDelta & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nodes_interfaces
get_serialized_size(
  const nodes_interfaces::msg::CountDelta & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nodes_interfaces
max_serialized_size_CountDelta(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nodes_interfaces
cdr_serialize_key(
  const nodes_interfaces::msg::CountDelta & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nodes_interfaces
get_serialized_size_key(
  const nodes_interfaces::msg::CountDelta & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nodes_interfaces
max_serialized_size_key_CountDelta(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nodes_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nodes_interfaces, msg, CountDelta)();

#ifdef __cplusplus
}
#endif

#endif  // NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
