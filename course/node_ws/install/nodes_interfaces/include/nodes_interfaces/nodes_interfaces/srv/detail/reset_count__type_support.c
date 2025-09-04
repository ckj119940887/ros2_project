// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nodes_interfaces:srv/ResetCount.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nodes_interfaces/srv/detail/reset_count__rosidl_typesupport_introspection_c.h"
#include "nodes_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nodes_interfaces/srv/detail/reset_count__functions.h"
#include "nodes_interfaces/srv/detail/reset_count__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nodes_interfaces__srv__ResetCount_Request__init(message_memory);
}

void nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_fini_function(void * message_memory)
{
  nodes_interfaces__srv__ResetCount_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_member_array[1] = {
  {
    "new_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nodes_interfaces__srv__ResetCount_Request, new_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_members = {
  "nodes_interfaces__srv",  // message namespace
  "ResetCount_Request",  // message name
  1,  // number of fields
  sizeof(nodes_interfaces__srv__ResetCount_Request),
  false,  // has_any_key_member_
  nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_member_array,  // message members
  nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_type_support_handle = {
  0,
  &nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_members,
  get_message_typesupport_handle_function,
  &nodes_interfaces__srv__ResetCount_Request__get_type_hash,
  &nodes_interfaces__srv__ResetCount_Request__get_type_description,
  &nodes_interfaces__srv__ResetCount_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nodes_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Request)() {
  if (!nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_type_support_handle.typesupport_identifier) {
    nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nodes_interfaces/srv/detail/reset_count__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nodes_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nodes_interfaces/srv/detail/reset_count__functions.h"
// already included above
// #include "nodes_interfaces/srv/detail/reset_count__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nodes_interfaces__srv__ResetCount_Response__init(message_memory);
}

void nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_fini_function(void * message_memory)
{
  nodes_interfaces__srv__ResetCount_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_member_array[1] = {
  {
    "old_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nodes_interfaces__srv__ResetCount_Response, old_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_members = {
  "nodes_interfaces__srv",  // message namespace
  "ResetCount_Response",  // message name
  1,  // number of fields
  sizeof(nodes_interfaces__srv__ResetCount_Response),
  false,  // has_any_key_member_
  nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_member_array,  // message members
  nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_type_support_handle = {
  0,
  &nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_members,
  get_message_typesupport_handle_function,
  &nodes_interfaces__srv__ResetCount_Response__get_type_hash,
  &nodes_interfaces__srv__ResetCount_Response__get_type_description,
  &nodes_interfaces__srv__ResetCount_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nodes_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Response)() {
  if (!nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_type_support_handle.typesupport_identifier) {
    nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nodes_interfaces/srv/detail/reset_count__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nodes_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nodes_interfaces/srv/detail/reset_count__functions.h"
// already included above
// #include "nodes_interfaces/srv/detail/reset_count__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "nodes_interfaces/srv/reset_count.h"
// Member `request`
// Member `response`
// already included above
// #include "nodes_interfaces/srv/detail/reset_count__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nodes_interfaces__srv__ResetCount_Event__init(message_memory);
}

void nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_fini_function(void * message_memory)
{
  nodes_interfaces__srv__ResetCount_Event__fini(message_memory);
}

size_t nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__size_function__ResetCount_Event__request(
  const void * untyped_member)
{
  const nodes_interfaces__srv__ResetCount_Request__Sequence * member =
    (const nodes_interfaces__srv__ResetCount_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCount_Event__request(
  const void * untyped_member, size_t index)
{
  const nodes_interfaces__srv__ResetCount_Request__Sequence * member =
    (const nodes_interfaces__srv__ResetCount_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_function__ResetCount_Event__request(
  void * untyped_member, size_t index)
{
  nodes_interfaces__srv__ResetCount_Request__Sequence * member =
    (nodes_interfaces__srv__ResetCount_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__fetch_function__ResetCount_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nodes_interfaces__srv__ResetCount_Request * item =
    ((const nodes_interfaces__srv__ResetCount_Request *)
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCount_Event__request(untyped_member, index));
  nodes_interfaces__srv__ResetCount_Request * value =
    (nodes_interfaces__srv__ResetCount_Request *)(untyped_value);
  *value = *item;
}

void nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__assign_function__ResetCount_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nodes_interfaces__srv__ResetCount_Request * item =
    ((nodes_interfaces__srv__ResetCount_Request *)
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_function__ResetCount_Event__request(untyped_member, index));
  const nodes_interfaces__srv__ResetCount_Request * value =
    (const nodes_interfaces__srv__ResetCount_Request *)(untyped_value);
  *item = *value;
}

bool nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__resize_function__ResetCount_Event__request(
  void * untyped_member, size_t size)
{
  nodes_interfaces__srv__ResetCount_Request__Sequence * member =
    (nodes_interfaces__srv__ResetCount_Request__Sequence *)(untyped_member);
  nodes_interfaces__srv__ResetCount_Request__Sequence__fini(member);
  return nodes_interfaces__srv__ResetCount_Request__Sequence__init(member, size);
}

size_t nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__size_function__ResetCount_Event__response(
  const void * untyped_member)
{
  const nodes_interfaces__srv__ResetCount_Response__Sequence * member =
    (const nodes_interfaces__srv__ResetCount_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCount_Event__response(
  const void * untyped_member, size_t index)
{
  const nodes_interfaces__srv__ResetCount_Response__Sequence * member =
    (const nodes_interfaces__srv__ResetCount_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_function__ResetCount_Event__response(
  void * untyped_member, size_t index)
{
  nodes_interfaces__srv__ResetCount_Response__Sequence * member =
    (nodes_interfaces__srv__ResetCount_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__fetch_function__ResetCount_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nodes_interfaces__srv__ResetCount_Response * item =
    ((const nodes_interfaces__srv__ResetCount_Response *)
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCount_Event__response(untyped_member, index));
  nodes_interfaces__srv__ResetCount_Response * value =
    (nodes_interfaces__srv__ResetCount_Response *)(untyped_value);
  *value = *item;
}

void nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__assign_function__ResetCount_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nodes_interfaces__srv__ResetCount_Response * item =
    ((nodes_interfaces__srv__ResetCount_Response *)
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_function__ResetCount_Event__response(untyped_member, index));
  const nodes_interfaces__srv__ResetCount_Response * value =
    (const nodes_interfaces__srv__ResetCount_Response *)(untyped_value);
  *item = *value;
}

bool nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__resize_function__ResetCount_Event__response(
  void * untyped_member, size_t size)
{
  nodes_interfaces__srv__ResetCount_Response__Sequence * member =
    (nodes_interfaces__srv__ResetCount_Response__Sequence *)(untyped_member);
  nodes_interfaces__srv__ResetCount_Response__Sequence__fini(member);
  return nodes_interfaces__srv__ResetCount_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nodes_interfaces__srv__ResetCount_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nodes_interfaces__srv__ResetCount_Event, request),  // bytes offset in struct
    NULL,  // default value
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__size_function__ResetCount_Event__request,  // size() function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCount_Event__request,  // get_const(index) function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_function__ResetCount_Event__request,  // get(index) function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__fetch_function__ResetCount_Event__request,  // fetch(index, &value) function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__assign_function__ResetCount_Event__request,  // assign(index, value) function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__resize_function__ResetCount_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nodes_interfaces__srv__ResetCount_Event, response),  // bytes offset in struct
    NULL,  // default value
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__size_function__ResetCount_Event__response,  // size() function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_const_function__ResetCount_Event__response,  // get_const(index) function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__get_function__ResetCount_Event__response,  // get(index) function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__fetch_function__ResetCount_Event__response,  // fetch(index, &value) function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__assign_function__ResetCount_Event__response,  // assign(index, value) function pointer
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__resize_function__ResetCount_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_members = {
  "nodes_interfaces__srv",  // message namespace
  "ResetCount_Event",  // message name
  3,  // number of fields
  sizeof(nodes_interfaces__srv__ResetCount_Event),
  false,  // has_any_key_member_
  nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_member_array,  // message members
  nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_type_support_handle = {
  0,
  &nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_members,
  get_message_typesupport_handle_function,
  &nodes_interfaces__srv__ResetCount_Event__get_type_hash,
  &nodes_interfaces__srv__ResetCount_Event__get_type_description,
  &nodes_interfaces__srv__ResetCount_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nodes_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Event)() {
  nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Request)();
  nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Response)();
  if (!nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_type_support_handle.typesupport_identifier) {
    nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nodes_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nodes_interfaces/srv/detail/reset_count__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_service_members = {
  "nodes_interfaces__srv",  // service namespace
  "ResetCount",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_Request_message_type_support_handle,
  NULL,  // response message
  // nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_Response_message_type_support_handle
  NULL  // event_message
  // nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_Response_message_type_support_handle
};


static rosidl_service_type_support_t nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_service_type_support_handle = {
  0,
  &nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_service_members,
  get_service_typesupport_handle_function,
  &nodes_interfaces__srv__ResetCount_Request__rosidl_typesupport_introspection_c__ResetCount_Request_message_type_support_handle,
  &nodes_interfaces__srv__ResetCount_Response__rosidl_typesupport_introspection_c__ResetCount_Response_message_type_support_handle,
  &nodes_interfaces__srv__ResetCount_Event__rosidl_typesupport_introspection_c__ResetCount_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nodes_interfaces,
    srv,
    ResetCount
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nodes_interfaces,
    srv,
    ResetCount
  ),
  &nodes_interfaces__srv__ResetCount__get_type_hash,
  &nodes_interfaces__srv__ResetCount__get_type_description,
  &nodes_interfaces__srv__ResetCount__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nodes_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount)(void) {
  if (!nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_service_type_support_handle.typesupport_identifier) {
    nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nodes_interfaces, srv, ResetCount_Event)()->data;
  }

  return &nodes_interfaces__srv__detail__reset_count__rosidl_typesupport_introspection_c__ResetCount_service_type_support_handle;
}
