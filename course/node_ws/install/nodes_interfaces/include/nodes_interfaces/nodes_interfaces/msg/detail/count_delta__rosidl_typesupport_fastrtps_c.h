// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice
#ifndef NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "nodes_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nodes_interfaces/msg/detail/count_delta__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nodes_interfaces
bool cdr_serialize_nodes_interfaces__msg__CountDelta(
  const nodes_interfaces__msg__CountDelta * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nodes_interfaces
bool cdr_deserialize_nodes_interfaces__msg__CountDelta(
  eprosima::fastcdr::Cdr &,
  nodes_interfaces__msg__CountDelta * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nodes_interfaces
size_t get_serialized_size_nodes_interfaces__msg__CountDelta(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nodes_interfaces
size_t max_serialized_size_nodes_interfaces__msg__CountDelta(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nodes_interfaces
bool cdr_serialize_key_nodes_interfaces__msg__CountDelta(
  const nodes_interfaces__msg__CountDelta * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nodes_interfaces
size_t get_serialized_size_key_nodes_interfaces__msg__CountDelta(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nodes_interfaces
size_t max_serialized_size_key_nodes_interfaces__msg__CountDelta(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nodes_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nodes_interfaces, msg, CountDelta)();

#ifdef __cplusplus
}
#endif

#endif  // NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
