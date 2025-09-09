// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nodes_interfaces:srv/ResetCount.idl
// generated code does not contain a copyright notice

#include "nodes_interfaces/srv/detail/reset_count__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_type_hash_t *
nodes_interfaces__srv__ResetCount__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0x28, 0x4c, 0xd5, 0x57, 0x60, 0xb8, 0x95,
      0x77, 0xb3, 0xef, 0xcf, 0x54, 0x8f, 0x85, 0x83,
      0x46, 0x89, 0xbf, 0x80, 0x9a, 0xc0, 0x2f, 0x5d,
      0x36, 0x66, 0xaa, 0x07, 0x0d, 0xfa, 0xbd, 0xc4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_type_hash_t *
nodes_interfaces__srv__ResetCount_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x23, 0xdc, 0x97, 0x7e, 0x50, 0x9c, 0x5b,
      0x0a, 0x10, 0x94, 0x4d, 0x34, 0xa5, 0xa7, 0x90,
      0x36, 0x49, 0xb7, 0xc9, 0xf2, 0xc0, 0xfe, 0xf8,
      0xea, 0xe3, 0xe1, 0xab, 0x2c, 0x7a, 0x08, 0x44,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_type_hash_t *
nodes_interfaces__srv__ResetCount_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0x84, 0x96, 0x9f, 0xe8, 0xaa, 0xf7, 0x6f,
      0x08, 0x09, 0xc5, 0x52, 0xe3, 0xd9, 0x35, 0x3b,
      0xfa, 0x7b, 0x2b, 0x5f, 0x93, 0x86, 0x25, 0x73,
      0xf9, 0x0a, 0x3f, 0x56, 0xc9, 0x6f, 0x2e, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_type_hash_t *
nodes_interfaces__srv__ResetCount_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0x00, 0xc9, 0x2c, 0x84, 0xa5, 0xe0, 0xdb,
      0x2e, 0x03, 0x70, 0x7b, 0x01, 0xab, 0x7a, 0xbd,
      0x71, 0xa9, 0xc8, 0xf8, 0xde, 0x45, 0x5c, 0x25,
      0xaf, 0xbc, 0x89, 0x54, 0xd2, 0x60, 0xc1, 0xa9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char nodes_interfaces__srv__ResetCount__TYPE_NAME[] = "nodes_interfaces/srv/ResetCount";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char nodes_interfaces__srv__ResetCount_Event__TYPE_NAME[] = "nodes_interfaces/srv/ResetCount_Event";
static char nodes_interfaces__srv__ResetCount_Request__TYPE_NAME[] = "nodes_interfaces/srv/ResetCount_Request";
static char nodes_interfaces__srv__ResetCount_Response__TYPE_NAME[] = "nodes_interfaces/srv/ResetCount_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char nodes_interfaces__srv__ResetCount__FIELD_NAME__request_message[] = "request_message";
static char nodes_interfaces__srv__ResetCount__FIELD_NAME__response_message[] = "response_message";
static char nodes_interfaces__srv__ResetCount__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field nodes_interfaces__srv__ResetCount__FIELDS[] = {
  {
    {nodes_interfaces__srv__ResetCount__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nodes_interfaces__srv__ResetCount_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nodes_interfaces__srv__ResetCount_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nodes_interfaces__srv__ResetCount_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nodes_interfaces__srv__ResetCount__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nodes_interfaces__srv__ResetCount__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nodes_interfaces__srv__ResetCount__TYPE_NAME, 31, 31},
      {nodes_interfaces__srv__ResetCount__FIELDS, 3, 3},
    },
    {nodes_interfaces__srv__ResetCount__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = nodes_interfaces__srv__ResetCount_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = nodes_interfaces__srv__ResetCount_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = nodes_interfaces__srv__ResetCount_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nodes_interfaces__srv__ResetCount_Request__FIELD_NAME__new_count[] = "new_count";

static rosidl_runtime_c__type_description__Field nodes_interfaces__srv__ResetCount_Request__FIELDS[] = {
  {
    {nodes_interfaces__srv__ResetCount_Request__FIELD_NAME__new_count, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nodes_interfaces__srv__ResetCount_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nodes_interfaces__srv__ResetCount_Request__TYPE_NAME, 39, 39},
      {nodes_interfaces__srv__ResetCount_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nodes_interfaces__srv__ResetCount_Response__FIELD_NAME__old_count[] = "old_count";

static rosidl_runtime_c__type_description__Field nodes_interfaces__srv__ResetCount_Response__FIELDS[] = {
  {
    {nodes_interfaces__srv__ResetCount_Response__FIELD_NAME__old_count, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nodes_interfaces__srv__ResetCount_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nodes_interfaces__srv__ResetCount_Response__TYPE_NAME, 40, 40},
      {nodes_interfaces__srv__ResetCount_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nodes_interfaces__srv__ResetCount_Event__FIELD_NAME__info[] = "info";
static char nodes_interfaces__srv__ResetCount_Event__FIELD_NAME__request[] = "request";
static char nodes_interfaces__srv__ResetCount_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field nodes_interfaces__srv__ResetCount_Event__FIELDS[] = {
  {
    {nodes_interfaces__srv__ResetCount_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nodes_interfaces__srv__ResetCount_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nodes_interfaces__srv__ResetCount_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nodes_interfaces__srv__ResetCount_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__srv__ResetCount_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nodes_interfaces__srv__ResetCount_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nodes_interfaces__srv__ResetCount_Event__TYPE_NAME, 37, 37},
      {nodes_interfaces__srv__ResetCount_Event__FIELDS, 3, 3},
    },
    {nodes_interfaces__srv__ResetCount_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = nodes_interfaces__srv__ResetCount_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = nodes_interfaces__srv__ResetCount_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Server call to reset count to Message to hold current count and increment value\n"
  "\n"
  "int32 new_count  # input: new value for count \n"
  "---\n"
  "int32 old_count  # output: old value for count";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nodes_interfaces__srv__ResetCount__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nodes_interfaces__srv__ResetCount__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 180, 180},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nodes_interfaces__srv__ResetCount_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nodes_interfaces__srv__ResetCount_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nodes_interfaces__srv__ResetCount_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nodes_interfaces__srv__ResetCount_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nodes_interfaces__srv__ResetCount_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nodes_interfaces__srv__ResetCount_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nodes_interfaces__srv__ResetCount__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nodes_interfaces__srv__ResetCount__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nodes_interfaces__srv__ResetCount_Event__get_individual_type_description_source(NULL);
    sources[3] = *nodes_interfaces__srv__ResetCount_Request__get_individual_type_description_source(NULL);
    sources[4] = *nodes_interfaces__srv__ResetCount_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nodes_interfaces__srv__ResetCount_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nodes_interfaces__srv__ResetCount_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nodes_interfaces__srv__ResetCount_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nodes_interfaces__srv__ResetCount_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nodes_interfaces__srv__ResetCount_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nodes_interfaces__srv__ResetCount_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nodes_interfaces__srv__ResetCount_Request__get_individual_type_description_source(NULL);
    sources[3] = *nodes_interfaces__srv__ResetCount_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
