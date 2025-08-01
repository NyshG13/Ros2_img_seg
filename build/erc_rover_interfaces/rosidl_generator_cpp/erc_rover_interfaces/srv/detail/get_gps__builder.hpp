// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from erc_rover_interfaces:srv/GetGPS.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "erc_rover_interfaces/srv/get_gps.hpp"


#ifndef ERC_ROVER_INTERFACES__SRV__DETAIL__GET_GPS__BUILDER_HPP_
#define ERC_ROVER_INTERFACES__SRV__DETAIL__GET_GPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "erc_rover_interfaces/srv/detail/get_gps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace erc_rover_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::erc_rover_interfaces::srv::GetGPS_Request>()
{
  return ::erc_rover_interfaces::srv::GetGPS_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace erc_rover_interfaces


namespace erc_rover_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGPS_Response_longitude
{
public:
  explicit Init_GetGPS_Response_longitude(::erc_rover_interfaces::srv::GetGPS_Response & msg)
  : msg_(msg)
  {}
  ::erc_rover_interfaces::srv::GetGPS_Response longitude(::erc_rover_interfaces::srv::GetGPS_Response::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetGPS_Response msg_;
};

class Init_GetGPS_Response_latitude
{
public:
  Init_GetGPS_Response_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGPS_Response_longitude latitude(::erc_rover_interfaces::srv::GetGPS_Response::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GetGPS_Response_longitude(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetGPS_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::erc_rover_interfaces::srv::GetGPS_Response>()
{
  return erc_rover_interfaces::srv::builder::Init_GetGPS_Response_latitude();
}

}  // namespace erc_rover_interfaces


namespace erc_rover_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGPS_Event_response
{
public:
  explicit Init_GetGPS_Event_response(::erc_rover_interfaces::srv::GetGPS_Event & msg)
  : msg_(msg)
  {}
  ::erc_rover_interfaces::srv::GetGPS_Event response(::erc_rover_interfaces::srv::GetGPS_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetGPS_Event msg_;
};

class Init_GetGPS_Event_request
{
public:
  explicit Init_GetGPS_Event_request(::erc_rover_interfaces::srv::GetGPS_Event & msg)
  : msg_(msg)
  {}
  Init_GetGPS_Event_response request(::erc_rover_interfaces::srv::GetGPS_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetGPS_Event_response(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetGPS_Event msg_;
};

class Init_GetGPS_Event_info
{
public:
  Init_GetGPS_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGPS_Event_request info(::erc_rover_interfaces::srv::GetGPS_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetGPS_Event_request(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetGPS_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::erc_rover_interfaces::srv::GetGPS_Event>()
{
  return erc_rover_interfaces::srv::builder::Init_GetGPS_Event_info();
}

}  // namespace erc_rover_interfaces

#endif  // ERC_ROVER_INTERFACES__SRV__DETAIL__GET_GPS__BUILDER_HPP_
