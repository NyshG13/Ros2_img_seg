// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from erc_rover_interfaces:srv/GetDepth.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "erc_rover_interfaces/srv/detail/get_depth__struct.h"
#include "erc_rover_interfaces/srv/detail/get_depth__type_support.h"
#include "erc_rover_interfaces/srv/detail/get_depth__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace erc_rover_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetDepth_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDepth_Request_type_support_ids_t;

static const _GetDepth_Request_type_support_ids_t _GetDepth_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetDepth_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDepth_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDepth_Request_type_support_symbol_names_t _GetDepth_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetDepth_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetDepth_Request)),
  }
};

typedef struct _GetDepth_Request_type_support_data_t
{
  void * data[2];
} _GetDepth_Request_type_support_data_t;

static _GetDepth_Request_type_support_data_t _GetDepth_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDepth_Request_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetDepth_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetDepth_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetDepth_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDepth_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDepth_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetDepth_Request__get_type_hash,
  &erc_rover_interfaces__srv__GetDepth_Request__get_type_description,
  &erc_rover_interfaces__srv__GetDepth_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetDepth_Request)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetDepth_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_depth__struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_depth__type_support.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_depth__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace erc_rover_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetDepth_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDepth_Response_type_support_ids_t;

static const _GetDepth_Response_type_support_ids_t _GetDepth_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetDepth_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDepth_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDepth_Response_type_support_symbol_names_t _GetDepth_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetDepth_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetDepth_Response)),
  }
};

typedef struct _GetDepth_Response_type_support_data_t
{
  void * data[2];
} _GetDepth_Response_type_support_data_t;

static _GetDepth_Response_type_support_data_t _GetDepth_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDepth_Response_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetDepth_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetDepth_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetDepth_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDepth_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDepth_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetDepth_Response__get_type_hash,
  &erc_rover_interfaces__srv__GetDepth_Response__get_type_description,
  &erc_rover_interfaces__srv__GetDepth_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetDepth_Response)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetDepth_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_depth__struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_depth__type_support.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_depth__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace erc_rover_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetDepth_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDepth_Event_type_support_ids_t;

static const _GetDepth_Event_type_support_ids_t _GetDepth_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetDepth_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDepth_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDepth_Event_type_support_symbol_names_t _GetDepth_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetDepth_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetDepth_Event)),
  }
};

typedef struct _GetDepth_Event_type_support_data_t
{
  void * data[2];
} _GetDepth_Event_type_support_data_t;

static _GetDepth_Event_type_support_data_t _GetDepth_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDepth_Event_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetDepth_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetDepth_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetDepth_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDepth_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDepth_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetDepth_Event__get_type_hash,
  &erc_rover_interfaces__srv__GetDepth_Event__get_type_description,
  &erc_rover_interfaces__srv__GetDepth_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetDepth_Event)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetDepth_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_depth__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace erc_rover_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetDepth_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDepth_type_support_ids_t;

static const _GetDepth_type_support_ids_t _GetDepth_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetDepth_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDepth_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDepth_type_support_symbol_names_t _GetDepth_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetDepth)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetDepth)),
  }
};

typedef struct _GetDepth_type_support_data_t
{
  void * data[2];
} _GetDepth_type_support_data_t;

static _GetDepth_type_support_data_t _GetDepth_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDepth_service_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetDepth_service_typesupport_ids.typesupport_identifier[0],
  &_GetDepth_service_typesupport_symbol_names.symbol_name[0],
  &_GetDepth_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetDepth_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDepth_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetDepth_Request_message_type_support_handle,
  &GetDepth_Response_message_type_support_handle,
  &GetDepth_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    erc_rover_interfaces,
    srv,
    GetDepth
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    erc_rover_interfaces,
    srv,
    GetDepth
  ),
  &erc_rover_interfaces__srv__GetDepth__get_type_hash,
  &erc_rover_interfaces__srv__GetDepth__get_type_description,
  &erc_rover_interfaces__srv__GetDepth__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetDepth)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetDepth_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
