// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from erc_rover_interfaces:srv/GetGPS.idl
// generated code does not contain a copyright notice

#include "erc_rover_interfaces/srv/detail/get_gps__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_type_hash_t *
erc_rover_interfaces__srv__GetGPS__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x95, 0xab, 0x59, 0xc8, 0x09, 0x31, 0x07,
      0x1f, 0x64, 0x35, 0x3a, 0x94, 0x2e, 0xd0, 0x60,
      0xa1, 0xf6, 0xd0, 0xde, 0x5f, 0x70, 0x04, 0xb8,
      0x83, 0x76, 0x3e, 0x94, 0x7d, 0xde, 0x50, 0xdd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_type_hash_t *
erc_rover_interfaces__srv__GetGPS_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0xd5, 0xb9, 0x17, 0x0a, 0x60, 0x07, 0xf1,
      0x2e, 0x32, 0x72, 0xe0, 0x97, 0xed, 0xdd, 0x7f,
      0x6c, 0xda, 0x9b, 0x47, 0x2c, 0x48, 0xd6, 0x05,
      0x1a, 0x53, 0x32, 0x0b, 0xc5, 0xbf, 0x7f, 0xd2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_type_hash_t *
erc_rover_interfaces__srv__GetGPS_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0xf8, 0x54, 0x0d, 0x61, 0xaf, 0x06, 0x60,
      0x90, 0x55, 0x28, 0xe1, 0x7e, 0x17, 0xe8, 0xef,
      0x08, 0xac, 0xf7, 0x5a, 0x93, 0x71, 0x56, 0x62,
      0x37, 0x38, 0x42, 0x98, 0xdb, 0x88, 0x5a, 0x4e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_erc_rover_interfaces
const rosidl_type_hash_t *
erc_rover_interfaces__srv__GetGPS_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0x87, 0x37, 0x05, 0x22, 0x9b, 0x5b, 0x72,
      0x9d, 0x0e, 0xfd, 0x68, 0x5a, 0x58, 0x17, 0xd5,
      0xd2, 0x15, 0x9d, 0xf7, 0x4d, 0xf1, 0xd2, 0x72,
      0xd8, 0xd3, 0xc2, 0x03, 0xaf, 0xf0, 0xe7, 0xf7,
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

static char erc_rover_interfaces__srv__GetGPS__TYPE_NAME[] = "erc_rover_interfaces/srv/GetGPS";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char erc_rover_interfaces__srv__GetGPS_Event__TYPE_NAME[] = "erc_rover_interfaces/srv/GetGPS_Event";
static char erc_rover_interfaces__srv__GetGPS_Request__TYPE_NAME[] = "erc_rover_interfaces/srv/GetGPS_Request";
static char erc_rover_interfaces__srv__GetGPS_Response__TYPE_NAME[] = "erc_rover_interfaces/srv/GetGPS_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char erc_rover_interfaces__srv__GetGPS__FIELD_NAME__request_message[] = "request_message";
static char erc_rover_interfaces__srv__GetGPS__FIELD_NAME__response_message[] = "response_message";
static char erc_rover_interfaces__srv__GetGPS__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field erc_rover_interfaces__srv__GetGPS__FIELDS[] = {
  {
    {erc_rover_interfaces__srv__GetGPS__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {erc_rover_interfaces__srv__GetGPS_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {erc_rover_interfaces__srv__GetGPS_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {erc_rover_interfaces__srv__GetGPS_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription erc_rover_interfaces__srv__GetGPS__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
erc_rover_interfaces__srv__GetGPS__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {erc_rover_interfaces__srv__GetGPS__TYPE_NAME, 31, 31},
      {erc_rover_interfaces__srv__GetGPS__FIELDS, 3, 3},
    },
    {erc_rover_interfaces__srv__GetGPS__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = erc_rover_interfaces__srv__GetGPS_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = erc_rover_interfaces__srv__GetGPS_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = erc_rover_interfaces__srv__GetGPS_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char erc_rover_interfaces__srv__GetGPS_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field erc_rover_interfaces__srv__GetGPS_Request__FIELDS[] = {
  {
    {erc_rover_interfaces__srv__GetGPS_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
erc_rover_interfaces__srv__GetGPS_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {erc_rover_interfaces__srv__GetGPS_Request__TYPE_NAME, 39, 39},
      {erc_rover_interfaces__srv__GetGPS_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char erc_rover_interfaces__srv__GetGPS_Response__FIELD_NAME__latitude[] = "latitude";
static char erc_rover_interfaces__srv__GetGPS_Response__FIELD_NAME__longitude[] = "longitude";

static rosidl_runtime_c__type_description__Field erc_rover_interfaces__srv__GetGPS_Response__FIELDS[] = {
  {
    {erc_rover_interfaces__srv__GetGPS_Response__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS_Response__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
erc_rover_interfaces__srv__GetGPS_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {erc_rover_interfaces__srv__GetGPS_Response__TYPE_NAME, 40, 40},
      {erc_rover_interfaces__srv__GetGPS_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char erc_rover_interfaces__srv__GetGPS_Event__FIELD_NAME__info[] = "info";
static char erc_rover_interfaces__srv__GetGPS_Event__FIELD_NAME__request[] = "request";
static char erc_rover_interfaces__srv__GetGPS_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field erc_rover_interfaces__srv__GetGPS_Event__FIELDS[] = {
  {
    {erc_rover_interfaces__srv__GetGPS_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {erc_rover_interfaces__srv__GetGPS_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {erc_rover_interfaces__srv__GetGPS_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription erc_rover_interfaces__srv__GetGPS_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {erc_rover_interfaces__srv__GetGPS_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
erc_rover_interfaces__srv__GetGPS_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {erc_rover_interfaces__srv__GetGPS_Event__TYPE_NAME, 37, 37},
      {erc_rover_interfaces__srv__GetGPS_Event__FIELDS, 3, 3},
    },
    {erc_rover_interfaces__srv__GetGPS_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = erc_rover_interfaces__srv__GetGPS_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = erc_rover_interfaces__srv__GetGPS_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "float64 latitude\n"
  "float64 longitude";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
erc_rover_interfaces__srv__GetGPS__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {erc_rover_interfaces__srv__GetGPS__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
erc_rover_interfaces__srv__GetGPS_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {erc_rover_interfaces__srv__GetGPS_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
erc_rover_interfaces__srv__GetGPS_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {erc_rover_interfaces__srv__GetGPS_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
erc_rover_interfaces__srv__GetGPS_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {erc_rover_interfaces__srv__GetGPS_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
erc_rover_interfaces__srv__GetGPS__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *erc_rover_interfaces__srv__GetGPS__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *erc_rover_interfaces__srv__GetGPS_Event__get_individual_type_description_source(NULL);
    sources[3] = *erc_rover_interfaces__srv__GetGPS_Request__get_individual_type_description_source(NULL);
    sources[4] = *erc_rover_interfaces__srv__GetGPS_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
erc_rover_interfaces__srv__GetGPS_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *erc_rover_interfaces__srv__GetGPS_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
erc_rover_interfaces__srv__GetGPS_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *erc_rover_interfaces__srv__GetGPS_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
erc_rover_interfaces__srv__GetGPS_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *erc_rover_interfaces__srv__GetGPS_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *erc_rover_interfaces__srv__GetGPS_Request__get_individual_type_description_source(NULL);
    sources[3] = *erc_rover_interfaces__srv__GetGPS_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
