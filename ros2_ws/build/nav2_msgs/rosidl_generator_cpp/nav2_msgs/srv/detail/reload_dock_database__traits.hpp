// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/ReloadDockDatabase.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__RELOAD_DOCK_DATABASE__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__RELOAD_DOCK_DATABASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/srv/detail/reload_dock_database__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReloadDockDatabase_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filepath
  {
    out << "filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.filepath, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReloadDockDatabase_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filepath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.filepath, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReloadDockDatabase_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::srv::ReloadDockDatabase_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::ReloadDockDatabase_Request & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::ReloadDockDatabase_Request>()
{
  return "nav2_msgs::srv::ReloadDockDatabase_Request";
}

template<>
inline const char * name<nav2_msgs::srv::ReloadDockDatabase_Request>()
{
  return "nav2_msgs/srv/ReloadDockDatabase_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ReloadDockDatabase_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ReloadDockDatabase_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::srv::ReloadDockDatabase_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReloadDockDatabase_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReloadDockDatabase_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReloadDockDatabase_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::srv::ReloadDockDatabase_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::ReloadDockDatabase_Response & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::ReloadDockDatabase_Response>()
{
  return "nav2_msgs::srv::ReloadDockDatabase_Response";
}

template<>
inline const char * name<nav2_msgs::srv::ReloadDockDatabase_Response>()
{
  return "nav2_msgs/srv/ReloadDockDatabase_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ReloadDockDatabase_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ReloadDockDatabase_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::srv::ReloadDockDatabase_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ReloadDockDatabase>()
{
  return "nav2_msgs::srv::ReloadDockDatabase";
}

template<>
inline const char * name<nav2_msgs::srv::ReloadDockDatabase>()
{
  return "nav2_msgs/srv/ReloadDockDatabase";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ReloadDockDatabase>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::ReloadDockDatabase_Request>::value &&
    has_fixed_size<nav2_msgs::srv::ReloadDockDatabase_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::ReloadDockDatabase>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::ReloadDockDatabase_Request>::value &&
    has_bounded_size<nav2_msgs::srv::ReloadDockDatabase_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::ReloadDockDatabase>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::ReloadDockDatabase_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::ReloadDockDatabase_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__RELOAD_DOCK_DATABASE__TRAITS_HPP_
