// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from erc_rover_interfaces:srv/GetGPS.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "erc_rover_interfaces/srv/detail/get_gps__struct.h"
#include "erc_rover_interfaces/srv/detail/get_gps__type_support.h"
#include "erc_rover_interfaces/srv/detail/get_gps__functions.h"
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

typedef struct _GetGPS_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetGPS_Request_type_support_ids_t;

static const _GetGPS_Request_type_support_ids_t _GetGPS_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetGPS_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetGPS_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetGPS_Request_type_support_symbol_names_t _GetGPS_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetGPS_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetGPS_Request)),
  }
};

typedef struct _GetGPS_Request_type_support_data_t
{
  void * data[2];
} _GetGPS_Request_type_support_data_t;

static _GetGPS_Request_type_support_data_t _GetGPS_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetGPS_Request_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetGPS_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetGPS_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetGPS_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetGPS_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetGPS_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetGPS_Request__get_type_hash,
  &erc_rover_interfaces__srv__GetGPS_Request__get_type_description,
  &erc_rover_interfaces__srv__GetGPS_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetGPS_Request)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetGPS_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_gps__struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_gps__type_support.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_gps__functions.h"
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

typedef struct _GetGPS_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetGPS_Response_type_support_ids_t;

static const _GetGPS_Response_type_support_ids_t _GetGPS_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetGPS_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetGPS_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetGPS_Response_type_support_symbol_names_t _GetGPS_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetGPS_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetGPS_Response)),
  }
};

typedef struct _GetGPS_Response_type_support_data_t
{
  void * data[2];
} _GetGPS_Response_type_support_data_t;

static _GetGPS_Response_type_support_data_t _GetGPS_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetGPS_Response_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetGPS_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetGPS_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetGPS_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetGPS_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetGPS_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetGPS_Response__get_type_hash,
  &erc_rover_interfaces__srv__GetGPS_Response__get_type_description,
  &erc_rover_interfaces__srv__GetGPS_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetGPS_Response)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetGPS_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_gps__struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_gps__type_support.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_gps__functions.h"
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

typedef struct _GetGPS_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetGPS_Event_type_support_ids_t;

static const _GetGPS_Event_type_support_ids_t _GetGPS_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetGPS_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetGPS_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetGPS_Event_type_support_symbol_names_t _GetGPS_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetGPS_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetGPS_Event)),
  }
};

typedef struct _GetGPS_Event_type_support_data_t
{
  void * data[2];
} _GetGPS_Event_type_support_data_t;

static _GetGPS_Event_type_support_data_t _GetGPS_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetGPS_Event_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetGPS_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetGPS_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetGPS_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetGPS_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetGPS_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetGPS_Event__get_type_hash,
  &erc_rover_interfaces__srv__GetGPS_Event__get_type_description,
  &erc_rover_interfaces__srv__GetGPS_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetGPS_Event)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetGPS_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_gps__type_support.h"
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
typedef struct _GetGPS_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetGPS_type_support_ids_t;

static const _GetGPS_type_support_ids_t _GetGPS_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetGPS_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetGPS_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetGPS_type_support_symbol_names_t _GetGPS_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetGPS)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetGPS)),
  }
};

typedef struct _GetGPS_type_support_data_t
{
  void * data[2];
} _GetGPS_type_support_data_t;

static _GetGPS_type_support_data_t _GetGPS_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetGPS_service_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetGPS_service_typesupport_ids.typesupport_identifier[0],
  &_GetGPS_service_typesupport_symbol_names.symbol_name[0],
  &_GetGPS_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetGPS_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetGPS_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetGPS_Request_message_type_support_handle,
  &GetGPS_Response_message_type_support_handle,
  &GetGPS_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    erc_rover_interfaces,
    srv,
    GetGPS
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    erc_rover_interfaces,
    srv,
    GetGPS
  ),
  &erc_rover_interfaces__srv__GetGPS__get_type_hash,
  &erc_rover_interfaces__srv__GetGPS__get_type_description,
  &erc_rover_interfaces__srv__GetGPS__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetGPS)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetGPS_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
