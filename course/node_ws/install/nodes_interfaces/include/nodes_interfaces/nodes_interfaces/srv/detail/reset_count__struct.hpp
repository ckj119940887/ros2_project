// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nodes_interfaces:srv/ResetCount.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nodes_interfaces/srv/reset_count.hpp"


#ifndef NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__STRUCT_HPP_
#define NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nodes_interfaces__srv__ResetCount_Request __attribute__((deprecated))
#else
# define DEPRECATED__nodes_interfaces__srv__ResetCount_Request __declspec(deprecated)
#endif

namespace nodes_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetCount_Request_
{
  using Type = ResetCount_Request_<ContainerAllocator>;

  explicit ResetCount_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_count = 0l;
    }
  }

  explicit ResetCount_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_count = 0l;
    }
  }

  // field types and members
  using _new_count_type =
    int32_t;
  _new_count_type new_count;

  // setters for named parameter idiom
  Type & set__new_count(
    const int32_t & _arg)
  {
    this->new_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nodes_interfaces__srv__ResetCount_Request
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nodes_interfaces__srv__ResetCount_Request
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetCount_Request_ & other) const
  {
    if (this->new_count != other.new_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetCount_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetCount_Request_

// alias to use template instance with default allocator
using ResetCount_Request =
  nodes_interfaces::srv::ResetCount_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nodes_interfaces


#ifndef _WIN32
# define DEPRECATED__nodes_interfaces__srv__ResetCount_Response __attribute__((deprecated))
#else
# define DEPRECATED__nodes_interfaces__srv__ResetCount_Response __declspec(deprecated)
#endif

namespace nodes_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetCount_Response_
{
  using Type = ResetCount_Response_<ContainerAllocator>;

  explicit ResetCount_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->old_count = 0l;
    }
  }

  explicit ResetCount_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->old_count = 0l;
    }
  }

  // field types and members
  using _old_count_type =
    int32_t;
  _old_count_type old_count;

  // setters for named parameter idiom
  Type & set__old_count(
    const int32_t & _arg)
  {
    this->old_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nodes_interfaces__srv__ResetCount_Response
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nodes_interfaces__srv__ResetCount_Response
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetCount_Response_ & other) const
  {
    if (this->old_count != other.old_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetCount_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetCount_Response_

// alias to use template instance with default allocator
using ResetCount_Response =
  nodes_interfaces::srv::ResetCount_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nodes_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nodes_interfaces__srv__ResetCount_Event __attribute__((deprecated))
#else
# define DEPRECATED__nodes_interfaces__srv__ResetCount_Event __declspec(deprecated)
#endif

namespace nodes_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetCount_Event_
{
  using Type = ResetCount_Event_<ContainerAllocator>;

  explicit ResetCount_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ResetCount_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nodes_interfaces::srv::ResetCount_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nodes_interfaces::srv::ResetCount_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nodes_interfaces__srv__ResetCount_Event
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nodes_interfaces__srv__ResetCount_Event
    std::shared_ptr<nodes_interfaces::srv::ResetCount_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetCount_Event_ & other) const
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
  bool operator!=(const ResetCount_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetCount_Event_

// alias to use template instance with default allocator
using ResetCount_Event =
  nodes_interfaces::srv::ResetCount_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nodes_interfaces

namespace nodes_interfaces
{

namespace srv
{

struct ResetCount
{
  using Request = nodes_interfaces::srv::ResetCount_Request;
  using Response = nodes_interfaces::srv::ResetCount_Response;
  using Event = nodes_interfaces::srv::ResetCount_Event;
};

}  // namespace srv

}  // namespace nodes_interfaces

#endif  // NODES_INTERFACES__SRV__DETAIL__RESET_COUNT__STRUCT_HPP_
