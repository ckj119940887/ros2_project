// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nodes_interfaces/msg/detail/count_delta__rosidl_typesupport_introspection_c.h"
#include "nodes_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nodes_interfaces/msg/detail/count_delta__functions.h"
#include "nodes_interfaces/msg/detail/count_delta__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nodes_interfaces__msg__CountDelta__init(message_memory);
}

void nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_fini_function(void * message_memory)
{
  nodes_interfaces__msg__CountDelta__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_message_member_array[2] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nodes_interfaces__msg__CountDelta, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nodes_interfaces__msg__CountDelta, delta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_message_members = {
  "nodes_interfaces__msg",  // message namespace
  "CountDelta",  // message name
  2,  // number of fields
  sizeof(nodes_interfaces__msg__CountDelta),
  false,  // has_any_key_member_
  nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_message_member_array,  // message members
  nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_init_function,  // function to initialize message memory (memory has to be allocated)
  nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_message_type_support_handle = {
  0,
  &nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_message_members,
  get_message_typesupport_handle_function,
  &nodes_interfaces__msg__CountDelta__get_type_hash,
  &nodes_interfaces__msg__CountDelta__get_type_description,
  &nodes_interfaces__msg__CountDelta__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nodes_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, msg, CountDelta)() {
  if (!nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_message_type_support_handle.typesupport_identifier) {
    nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nodes_interfaces__msg__CountDelta__rosidl_typesupport_introspection_c__CountDelta_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
