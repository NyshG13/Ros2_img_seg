// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from erc_rover_interfaces:srv/GetDepth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "erc_rover_interfaces/srv/get_depth.hpp"


#ifndef ERC_ROVER_INTERFACES__SRV__DETAIL__GET_DEPTH__STRUCT_HPP_
#define ERC_ROVER_INTERFACES__SRV__DETAIL__GET_DEPTH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__erc_rover_interfaces__srv__GetDepth_Request __attribute__((deprecated))
#else
# define DEPRECATED__erc_rover_interfaces__srv__GetDepth_Request __declspec(deprecated)
#endif

namespace erc_rover_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDepth_Request_
{
  using Type = GetDepth_Request_<ContainerAllocator>;

  explicit GetDepth_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pixel_x = 0l;
      this->pixel_y = 0l;
    }
  }

  explicit GetDepth_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pixel_x = 0l;
      this->pixel_y = 0l;
    }
  }

  // field types and members
  using _pixel_x_type =
    int32_t;
  _pixel_x_type pixel_x;
  using _pixel_y_type =
    int32_t;
  _pixel_y_type pixel_y;

  // setters for named parameter idiom
  Type & set__pixel_x(
    const int32_t & _arg)
  {
    this->pixel_x = _arg;
    return *this;
  }
  Type & set__pixel_y(
    const int32_t & _arg)
  {
    this->pixel_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__erc_rover_interfaces__srv__GetDepth_Request
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__erc_rover_interfaces__srv__GetDepth_Request
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDepth_Request_ & other) const
  {
    if (this->pixel_x != other.pixel_x) {
      return false;
    }
    if (this->pixel_y != other.pixel_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDepth_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDepth_Request_

// alias to use template instance with default allocator
using GetDepth_Request =
  erc_rover_interfaces::srv::GetDepth_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace erc_rover_interfaces


#ifndef _WIN32
# define DEPRECATED__erc_rover_interfaces__srv__GetDepth_Response __attribute__((deprecated))
#else
# define DEPRECATED__erc_rover_interfaces__srv__GetDepth_Response __declspec(deprecated)
#endif

namespace erc_rover_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDepth_Response_
{
  using Type = GetDepth_Response_<ContainerAllocator>;

  explicit GetDepth_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth = 0.0f;
    }
  }

  explicit GetDepth_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth = 0.0f;
    }
  }

  // field types and members
  using _depth_type =
    float;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__depth(
    const float & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__erc_rover_interfaces__srv__GetDepth_Response
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__erc_rover_interfaces__srv__GetDepth_Response
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDepth_Response_ & other) const
  {
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDepth_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDepth_Response_

// alias to use template instance with default allocator
using GetDepth_Response =
  erc_rover_interfaces::srv::GetDepth_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace erc_rover_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__erc_rover_interfaces__srv__GetDepth_Event __attribute__((deprecated))
#else
# define DEPRECATED__erc_rover_interfaces__srv__GetDepth_Event __declspec(deprecated)
#endif

namespace erc_rover_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDepth_Event_
{
  using Type = GetDepth_Event_<ContainerAllocator>;

  explicit GetDepth_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetDepth_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<erc_rover_interfaces::srv::GetDepth_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<erc_rover_interfaces::srv::GetDepth_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__erc_rover_interfaces__srv__GetDepth_Event
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__erc_rover_interfaces__srv__GetDepth_Event
    std::shared_ptr<erc_rover_interfaces::srv::GetDepth_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDepth_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDepth_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDepth_Event_

// alias to use template instance with default allocator
using GetDepth_Event =
  erc_rover_interfaces::srv::GetDepth_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace erc_rover_interfaces

namespace erc_rover_interfaces
{

namespace srv
{

struct GetDepth
{
  using Request = erc_rover_interfaces::srv::GetDepth_Request;
  using Response = erc_rover_interfaces::srv::GetDepth_Response;
  using Event = erc_rover_interfaces::srv::GetDepth_Event;
};

}  // namespace srv

}  // namespace erc_rover_interfaces

#endif  // ERC_ROVER_INTERFACES__SRV__DETAIL__GET_DEPTH__STRUCT_HPP_
