// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from erc_rover_interfaces:srv/GetDepth.idl
// generated code does not contain a copyright notice

#include "erc_rover_interfaces/srv/detail/get_depth__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_type_hash_t *
erc_rover_interfaces__srv__GetDepth__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x79, 0x36, 0x1e, 0x3b, 0x0e, 0xf3, 0x39,
      0x30, 0xce, 0xb4, 0x36, 0xc9, 0xdd, 0xdf, 0xdd,
      0x6e, 0xe0, 0x39, 0x1a, 0x30, 0x85, 0x57, 0x75,
      0xa9, 0x58, 0xe8, 0xe8, 0x10, 0xd8, 0x5c, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_type_hash_t *
erc_rover_interfaces__srv__GetDepth_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0xbe, 0xe7, 0x9e, 0x24, 0x9b, 0x0a, 0xf4,
      0x7d, 0x53, 0xa4, 0x68, 0x22, 0x3d, 0xee, 0x2a,
      0x34, 0x78, 0xb9, 0x5d, 0x84, 0xee, 0x09, 0x87,
      0xb8, 0xf4, 0xab, 0x70, 0xe3, 0xb9, 0xcc, 0x06,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_type_hash_t *
erc_rover_interfaces__srv__GetDepth_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0xc0, 0x3c, 0x4e, 0xee, 0x55, 0xf2, 0x6f,
      0x39, 0xa7, 0x22, 0xdd, 0x40, 0x39, 0x57, 0xc0,
      0x05, 0x1f, 0x25, 0x3c, 0xd3, 0x9f, 0x1f, 0x5f,
      0xc1, 0x2d, 0xe9, 0xff, 0x57, 0x07, 0xe6, 0x2b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_type_hash_t *
erc_rover_interfaces__srv__GetDepth_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0xfb, 0x1c, 0x3a, 0xe6, 0x79, 0x03, 0x7d,
      0xc5, 0xfb, 0x13, 0xf8, 0xc4, 0x41, 0xa1, 0x30,
      0xf2, 0x2d, 0xf0, 0x27, 0x68, 0x01, 0x05, 0x7c,
      0x82, 0x9c, 0x2f, 0x1b, 0xe0, 0xea, 0xf7, 0x4c,
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

static char erc_rover_interfaces__srv__GetDepth__TYPE_NAME[] = "erc_rover_interfaces/srv/GetDepth";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char erc_rover_interfaces__srv__GetDepth_Event__TYPE_NAME[] = "erc_rover_interfaces/srv/GetDepth_Event";
static char erc_rover_interfaces__srv__GetDepth_Request__TYPE_NAME[] = "erc_rover_interfaces/srv/GetDepth_Request";
static char erc_rover_interfaces__srv__GetDepth_Response__TYPE_NAME[] = "erc_rover_interfaces/srv/GetDepth_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char erc_rover_interfaces__srv__GetDepth__FIELD_NAME__request_message[] = "request_message";
static char erc_rover_interfaces__srv__GetDepth__FIELD_NAME__response_message[] = "response_message";
static char erc_rover_interfaces__srv__GetDepth__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field erc_rover_interfaces__srv__GetDepth__FIELDS[] = {
  {
    {erc_rover_interfaces__srv__GetDepth__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {erc_rover_interfaces__srv__GetDepth_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {erc_rover_interfaces__srv__GetDepth_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {erc_rover_interfaces__srv__GetDepth_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription erc_rover_interfaces__srv__GetDepth__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
erc_rover_interfaces__srv__GetDepth__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {erc_rover_interfaces__srv__GetDepth__TYPE_NAME, 33, 33},
      {erc_rover_interfaces__srv__GetDepth__FIELDS, 3, 3},
    },
    {erc_rover_interfaces__srv__GetDepth__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = erc_rover_interfaces__srv__GetDepth_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = erc_rover_interfaces__srv__GetDepth_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = erc_rover_interfaces__srv__GetDepth_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char erc_rover_interfaces__srv__GetDepth_Request__FIELD_NAME__pixel_x[] = "pixel_x";
static char erc_rover_interfaces__srv__GetDepth_Request__FIELD_NAME__pixel_y[] = "pixel_y";

static rosidl_runtime_c__type_description__Field erc_rover_interfaces__srv__GetDepth_Request__FIELDS[] = {
  {
    {erc_rover_interfaces__srv__GetDepth_Request__FIELD_NAME__pixel_x, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth_Request__FIELD_NAME__pixel_y, 7, 7},
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
erc_rover_interfaces__srv__GetDepth_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {erc_rover_interfaces__srv__GetDepth_Request__TYPE_NAME, 41, 41},
      {erc_rover_interfaces__srv__GetDepth_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char erc_rover_interfaces__srv__GetDepth_Response__FIELD_NAME__depth[] = "depth";

static rosidl_runtime_c__type_description__Field erc_rover_interfaces__srv__GetDepth_Response__FIELDS[] = {
  {
    {erc_rover_interfaces__srv__GetDepth_Response__FIELD_NAME__depth, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
erc_rover_interfaces__srv__GetDepth_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {erc_rover_interfaces__srv__GetDepth_Response__TYPE_NAME, 42, 42},
      {erc_rover_interfaces__srv__GetDepth_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char erc_rover_interfaces__srv__GetDepth_Event__FIELD_NAME__info[] = "info";
static char erc_rover_interfaces__srv__GetDepth_Event__FIELD_NAME__request[] = "request";
static char erc_rover_interfaces__srv__GetDepth_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field erc_rover_interfaces__srv__GetDepth_Event__FIELDS[] = {
  {
    {erc_rover_interfaces__srv__GetDepth_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {erc_rover_interfaces__srv__GetDepth_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {erc_rover_interfaces__srv__GetDepth_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription erc_rover_interfaces__srv__GetDepth_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetDepth_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
erc_rover_interfaces__srv__GetDepth_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {erc_rover_interfaces__srv__GetDepth_Event__TYPE_NAME, 39, 39},
      {erc_rover_interfaces__srv__GetDepth_Event__FIELDS, 3, 3},
    },
    {erc_rover_interfaces__srv__GetDepth_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = erc_rover_interfaces__srv__GetDepth_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = erc_rover_interfaces__srv__GetDepth_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 pixel_x\n"
  "int32 pixel_y\n"
  "---\n"
  "float32 depth\n"
  "\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
erc_rover_interfaces__srv__GetDepth__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {erc_rover_interfaces__srv__GetDepth__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
erc_rover_interfaces__srv__GetDepth_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {erc_rover_interfaces__srv__GetDepth_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
erc_rover_interfaces__srv__GetDepth_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {erc_rover_interfaces__srv__GetDepth_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
erc_rover_interfaces__srv__GetDepth_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {erc_rover_interfaces__srv__GetDepth_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
erc_rover_interfaces__srv__GetDepth__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *erc_rover_interfaces__srv__GetDepth__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *erc_rover_interfaces__srv__GetDepth_Event__get_individual_type_description_source(NULL);
    sources[3] = *erc_rover_interfaces__srv__GetDepth_Request__get_individual_type_description_source(NULL);
    sources[4] = *erc_rover_interfaces__srv__GetDepth_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
erc_rover_interfaces__srv__GetDepth_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *erc_rover_interfaces__srv__GetDepth_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
erc_rover_interfaces__srv__GetDepth_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *erc_rover_interfaces__srv__GetDepth_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
erc_rover_interfaces__srv__GetDepth_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *erc_rover_interfaces__srv__GetDepth_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *erc_rover_interfaces__srv__GetDepth_Request__get_individual_type_description_source(NULL);
    sources[3] = *erc_rover_interfaces__srv__GetDepth_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
