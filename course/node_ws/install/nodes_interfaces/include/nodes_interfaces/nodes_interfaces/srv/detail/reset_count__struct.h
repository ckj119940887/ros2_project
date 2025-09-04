// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nodes_interfaces:srv/ResetCount.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nodes_interfaces/srv/reset_count.h"


#ifndef NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__STRUCT_H_
#define NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetCount in the package nodes_interfaces.
typedef struct nodes_interfaces__srv__ResetCount_Request
{
  /// input: new value for count
  int32_t new_count;
} nodes_interfaces__srv__ResetCount_Request;

// Struct for a sequence of nodes_interfaces__srv__ResetCount_Request.
typedef struct nodes_interfaces__srv__ResetCount_Request__Sequence
{
  nodes_interfaces__srv__ResetCount_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nodes_interfaces__srv__ResetCount_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ResetCount in the package nodes_interfaces.
typedef struct nodes_interfaces__srv__ResetCount_Response
{
  /// output: old value for count
  int32_t old_count;
} nodes_interfaces__srv__ResetCount_Response;

// Struct for a sequence of nodes_interfaces__srv__ResetCount_Response.
typedef struct nodes_interfaces__srv__ResetCount_Response__Sequence
{
  nodes_interfaces__srv__ResetCount_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nodes_interfaces__srv__ResetCount_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nodes_interfaces__srv__ResetCount_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nodes_interfaces__srv__ResetCount_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ResetCount in the package nodes_interfaces.
typedef struct nodes_interfaces__srv__ResetCount_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nodes_interfaces__srv__ResetCount_Request__Sequence request;
  nodes_interfaces__srv__ResetCount_Response__Sequence response;
} nodes_interfaces__srv__ResetCount_Event;

// Struct for a sequence of nodes_interfaces__srv__ResetCount_Event.
typedef struct nodes_interfaces__srv__ResetCount_Event__Sequence
{
  nodes_interfaces__srv__ResetCount_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nodes_interfaces__srv__ResetCount_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__STRUCT_H_
