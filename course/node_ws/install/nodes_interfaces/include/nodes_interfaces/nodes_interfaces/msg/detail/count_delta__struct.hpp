// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nodes_interfaces/msg/count_delta.hpp"


#ifndef NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__STRUCT_HPP_
#define NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nodes_interfaces__msg__CountDelta __attribute__((deprecated))
#else
# define DEPRECATED__nodes_interfaces__msg__CountDelta __declspec(deprecated)
#endif

namespace nodes_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CountDelta_
{
  using Type = CountDelta_<ContainerAllocator>;

  explicit CountDelta_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->delta = 0l;
    }
  }

  explicit CountDelta_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->delta = 0l;
    }
  }

  // field types and members
  using _count_type =
    int32_t;
  _count_type count;
  using _delta_type =
    int32_t;
  _delta_type delta;

  // setters for named parameter idiom
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__delta(
    const int32_t & _arg)
  {
    this->delta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nodes_interfaces::msg::CountDelta_<ContainerAllocator> *;
  using ConstRawPtr =
    const nodes_interfaces::msg::CountDelta_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nodes_interfaces::msg::CountDelta_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nodes_interfaces::msg::CountDelta_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nodes_interfaces::msg::CountDelta_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nodes_interfaces::msg::CountDelta_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nodes_interfaces::msg::CountDelta_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nodes_interfaces::msg::CountDelta_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nodes_interfaces::msg::CountDelta_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nodes_interfaces::msg::CountDelta_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nodes_interfaces__msg__CountDelta
    std::shared_ptr<nodes_interfaces::msg::CountDelta_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nodes_interfaces__msg__CountDelta
    std::shared_ptr<nodes_interfaces::msg::CountDelta_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CountDelta_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->delta != other.delta) {
      return false;
    }
    return true;
  }
  bool operator!=(const CountDelta_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CountDelta_

// alias to use template instance with default allocator
using CountDelta =
  nodes_interfaces::msg::CountDelta_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nodes_interfaces

#endif  // NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__STRUCT_HPP_
