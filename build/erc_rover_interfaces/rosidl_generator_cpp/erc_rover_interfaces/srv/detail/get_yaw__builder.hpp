// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from erc_rover_interfaces:srv/GetYaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "erc_rover_interfaces/srv/get_yaw.hpp"


#ifndef ERC_ROVER_INTERFACES__SRV__DETAIL__GET_YAW__BUILDER_HPP_
#define ERC_ROVER_INTERFACES__SRV__DETAIL__GET_YAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "erc_rover_interfaces/srv/detail/get_yaw__struct.hpp"
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
auto build<::erc_rover_interfaces::srv::GetYaw_Request>()
{
  return ::erc_rover_interfaces::srv::GetYaw_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace erc_rover_interfaces


namespace erc_rover_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetYaw_Response_yaw_deg
{
public:
  Init_GetYaw_Response_yaw_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::erc_rover_interfaces::srv::GetYaw_Response yaw_deg(::erc_rover_interfaces::srv::GetYaw_Response::_yaw_deg_type arg)
  {
    msg_.yaw_deg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetYaw_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::erc_rover_interfaces::srv::GetYaw_Response>()
{
  return erc_rover_interfaces::srv::builder::Init_GetYaw_Response_yaw_deg();
}

}  // namespace erc_rover_interfaces


namespace erc_rover_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetYaw_Event_response
{
public:
  explicit Init_GetYaw_Event_response(::erc_rover_interfaces::srv::GetYaw_Event & msg)
  : msg_(msg)
  {}
  ::erc_rover_interfaces::srv::GetYaw_Event response(::erc_rover_interfaces::srv::GetYaw_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetYaw_Event msg_;
};

class Init_GetYaw_Event_request
{
public:
  explicit Init_GetYaw_Event_request(::erc_rover_interfaces::srv::GetYaw_Event & msg)
  : msg_(msg)
  {}
  Init_GetYaw_Event_response request(::erc_rover_interfaces::srv::GetYaw_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetYaw_Event_response(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetYaw_Event msg_;
};

class Init_GetYaw_Event_info
{
public:
  Init_GetYaw_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetYaw_Event_request info(::erc_rover_interfaces::srv::GetYaw_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetYaw_Event_request(msg_);
  }

private:
  ::erc_rover_interfaces::srv::GetYaw_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::erc_rover_interfaces::srv::GetYaw_Event>()
{
  return erc_rover_interfaces::srv::builder::Init_GetYaw_Event_info();
}

}  // namespace erc_rover_interfaces

#endif  // ERC_ROVER_INTERFACES__SRV__DETAIL__GET_YAW__BUILDER_HPP_
