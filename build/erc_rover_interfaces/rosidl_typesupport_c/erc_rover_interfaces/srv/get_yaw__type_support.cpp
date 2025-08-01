// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from erc_rover_interfaces:srv/GetYaw.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "erc_rover_interfaces/srv/detail/get_yaw__struct.h"
#include "erc_rover_interfaces/srv/detail/get_yaw__type_support.h"
#include "erc_rover_interfaces/srv/detail/get_yaw__functions.h"
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

typedef struct _GetYaw_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetYaw_Request_type_support_ids_t;

static const _GetYaw_Request_type_support_ids_t _GetYaw_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetYaw_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetYaw_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetYaw_Request_type_support_symbol_names_t _GetYaw_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetYaw_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetYaw_Request)),
  }
};

typedef struct _GetYaw_Request_type_support_data_t
{
  void * data[2];
} _GetYaw_Request_type_support_data_t;

static _GetYaw_Request_type_support_data_t _GetYaw_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetYaw_Request_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetYaw_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetYaw_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetYaw_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetYaw_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetYaw_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetYaw_Request__get_type_hash,
  &erc_rover_interfaces__srv__GetYaw_Request__get_type_description,
  &erc_rover_interfaces__srv__GetYaw_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetYaw_Request)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetYaw_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_yaw__struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_yaw__type_support.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_yaw__functions.h"
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

typedef struct _GetYaw_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetYaw_Response_type_support_ids_t;

static const _GetYaw_Response_type_support_ids_t _GetYaw_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetYaw_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetYaw_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetYaw_Response_type_support_symbol_names_t _GetYaw_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetYaw_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetYaw_Response)),
  }
};

typedef struct _GetYaw_Response_type_support_data_t
{
  void * data[2];
} _GetYaw_Response_type_support_data_t;

static _GetYaw_Response_type_support_data_t _GetYaw_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetYaw_Response_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetYaw_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetYaw_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetYaw_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetYaw_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetYaw_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetYaw_Response__get_type_hash,
  &erc_rover_interfaces__srv__GetYaw_Response__get_type_description,
  &erc_rover_interfaces__srv__GetYaw_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetYaw_Response)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetYaw_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_yaw__struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_yaw__type_support.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_yaw__functions.h"
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

typedef struct _GetYaw_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetYaw_Event_type_support_ids_t;

static const _GetYaw_Event_type_support_ids_t _GetYaw_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetYaw_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetYaw_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetYaw_Event_type_support_symbol_names_t _GetYaw_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetYaw_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetYaw_Event)),
  }
};

typedef struct _GetYaw_Event_type_support_data_t
{
  void * data[2];
} _GetYaw_Event_type_support_data_t;

static _GetYaw_Event_type_support_data_t _GetYaw_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetYaw_Event_message_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetYaw_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetYaw_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetYaw_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetYaw_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetYaw_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &erc_rover_interfaces__srv__GetYaw_Event__get_type_hash,
  &erc_rover_interfaces__srv__GetYaw_Event__get_type_description,
  &erc_rover_interfaces__srv__GetYaw_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetYaw_Event)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetYaw_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "erc_rover_interfaces/srv/detail/get_yaw__type_support.h"
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
typedef struct _GetYaw_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetYaw_type_support_ids_t;

static const _GetYaw_type_support_ids_t _GetYaw_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetYaw_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetYaw_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetYaw_type_support_symbol_names_t _GetYaw_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, erc_rover_interfaces, srv, GetYaw)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, erc_rover_interfaces, srv, GetYaw)),
  }
};

typedef struct _GetYaw_type_support_data_t
{
  void * data[2];
} _GetYaw_type_support_data_t;

static _GetYaw_type_support_data_t _GetYaw_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetYaw_service_typesupport_map = {
  2,
  "erc_rover_interfaces",
  &_GetYaw_service_typesupport_ids.typesupport_identifier[0],
  &_GetYaw_service_typesupport_symbol_names.symbol_name[0],
  &_GetYaw_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetYaw_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetYaw_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetYaw_Request_message_type_support_handle,
  &GetYaw_Response_message_type_support_handle,
  &GetYaw_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    erc_rover_interfaces,
    srv,
    GetYaw
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    erc_rover_interfaces,
    srv,
    GetYaw
  ),
  &erc_rover_interfaces__srv__GetYaw__get_type_hash,
  &erc_rover_interfaces__srv__GetYaw__get_type_description,
  &erc_rover_interfaces__srv__GetYaw__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace erc_rover_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, erc_rover_interfaces, srv, GetYaw)() {
  return &::erc_rover_interfaces::srv::rosidl_typesupport_c::GetYaw_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
