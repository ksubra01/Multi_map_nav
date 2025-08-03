// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_map_nav:action/NavigateToGoal.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAV__ACTION__DETAIL__NAVIGATE_TO_GOAL__TRAITS_HPP_
#define MULTI_MAP_NAV__ACTION__DETAIL__NAVIGATE_TO_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multi_map_nav/action/detail/navigate_to_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multi_map_nav
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: target_map
  {
    out << "target_map: ";
    rosidl_generator_traits::value_to_yaml(msg.target_map, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: target_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_map: ";
    rosidl_generator_traits::value_to_yaml(msg.target_map, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace multi_map_nav

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_nav::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_nav::action::NavigateToGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_nav::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_nav::action::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_nav::action::NavigateToGoal_Goal & msg)
{
  return multi_map_nav::action::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_Goal>()
{
  return "multi_map_nav::action::NavigateToGoal_Goal";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_Goal>()
{
  return "multi_map_nav/action/NavigateToGoal_Goal";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_map_nav::action::NavigateToGoal_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace multi_map_nav
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_Result & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace multi_map_nav

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_nav::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_nav::action::NavigateToGoal_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_nav::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_nav::action::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_nav::action::NavigateToGoal_Result & msg)
{
  return multi_map_nav::action::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_Result>()
{
  return "multi_map_nav::action::NavigateToGoal_Result";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_Result>()
{
  return "multi_map_nav/action/NavigateToGoal_Result";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_map_nav::action::NavigateToGoal_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace multi_map_nav
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback_msg
  {
    out << "feedback_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace multi_map_nav

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_nav::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_nav::action::NavigateToGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_nav::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_nav::action::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_nav::action::NavigateToGoal_Feedback & msg)
{
  return multi_map_nav::action::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_Feedback>()
{
  return "multi_map_nav::action::NavigateToGoal_Feedback";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_Feedback>()
{
  return "multi_map_nav/action/NavigateToGoal_Feedback";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_map_nav::action::NavigateToGoal_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "multi_map_nav/action/detail/navigate_to_goal__traits.hpp"

namespace multi_map_nav
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace multi_map_nav

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_nav::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_nav::action::NavigateToGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_nav::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_nav::action::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_nav::action::NavigateToGoal_SendGoal_Request & msg)
{
  return multi_map_nav::action::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_SendGoal_Request>()
{
  return "multi_map_nav::action::NavigateToGoal_SendGoal_Request";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_SendGoal_Request>()
{
  return "multi_map_nav/action/NavigateToGoal_SendGoal_Request";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<multi_map_nav::action::NavigateToGoal_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<multi_map_nav::action::NavigateToGoal_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<multi_map_nav::action::NavigateToGoal_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace multi_map_nav
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace multi_map_nav

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_nav::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_nav::action::NavigateToGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_nav::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_nav::action::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_nav::action::NavigateToGoal_SendGoal_Response & msg)
{
  return multi_map_nav::action::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_SendGoal_Response>()
{
  return "multi_map_nav::action::NavigateToGoal_SendGoal_Response";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_SendGoal_Response>()
{
  return "multi_map_nav/action/NavigateToGoal_SendGoal_Response";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<multi_map_nav::action::NavigateToGoal_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_SendGoal>()
{
  return "multi_map_nav::action::NavigateToGoal_SendGoal";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_SendGoal>()
{
  return "multi_map_nav/action/NavigateToGoal_SendGoal";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<multi_map_nav::action::NavigateToGoal_SendGoal_Request>::value &&
    has_fixed_size<multi_map_nav::action::NavigateToGoal_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<multi_map_nav::action::NavigateToGoal_SendGoal_Request>::value &&
    has_bounded_size<multi_map_nav::action::NavigateToGoal_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<multi_map_nav::action::NavigateToGoal_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<multi_map_nav::action::NavigateToGoal_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<multi_map_nav::action::NavigateToGoal_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace multi_map_nav
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace multi_map_nav

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_nav::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_nav::action::NavigateToGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_nav::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_nav::action::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_nav::action::NavigateToGoal_GetResult_Request & msg)
{
  return multi_map_nav::action::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_GetResult_Request>()
{
  return "multi_map_nav::action::NavigateToGoal_GetResult_Request";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_GetResult_Request>()
{
  return "multi_map_nav/action/NavigateToGoal_GetResult_Request";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<multi_map_nav::action::NavigateToGoal_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "multi_map_nav/action/detail/navigate_to_goal__traits.hpp"

namespace multi_map_nav
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace multi_map_nav

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_nav::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_nav::action::NavigateToGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_nav::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_nav::action::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_nav::action::NavigateToGoal_GetResult_Response & msg)
{
  return multi_map_nav::action::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_GetResult_Response>()
{
  return "multi_map_nav::action::NavigateToGoal_GetResult_Response";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_GetResult_Response>()
{
  return "multi_map_nav/action/NavigateToGoal_GetResult_Response";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<multi_map_nav::action::NavigateToGoal_Result>::value> {};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<multi_map_nav::action::NavigateToGoal_Result>::value> {};

template<>
struct is_message<multi_map_nav::action::NavigateToGoal_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_GetResult>()
{
  return "multi_map_nav::action::NavigateToGoal_GetResult";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_GetResult>()
{
  return "multi_map_nav/action/NavigateToGoal_GetResult";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<multi_map_nav::action::NavigateToGoal_GetResult_Request>::value &&
    has_fixed_size<multi_map_nav::action::NavigateToGoal_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<multi_map_nav::action::NavigateToGoal_GetResult_Request>::value &&
    has_bounded_size<multi_map_nav::action::NavigateToGoal_GetResult_Response>::value
  >
{
};

template<>
struct is_service<multi_map_nav::action::NavigateToGoal_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<multi_map_nav::action::NavigateToGoal_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<multi_map_nav::action::NavigateToGoal_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "multi_map_nav/action/detail/navigate_to_goal__traits.hpp"

namespace multi_map_nav
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToGoal_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToGoal_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace multi_map_nav

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_nav::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_nav::action::NavigateToGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_nav::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_nav::action::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_nav::action::NavigateToGoal_FeedbackMessage & msg)
{
  return multi_map_nav::action::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_nav::action::NavigateToGoal_FeedbackMessage>()
{
  return "multi_map_nav::action::NavigateToGoal_FeedbackMessage";
}

template<>
inline const char * name<multi_map_nav::action::NavigateToGoal_FeedbackMessage>()
{
  return "multi_map_nav/action/NavigateToGoal_FeedbackMessage";
}

template<>
struct has_fixed_size<multi_map_nav::action::NavigateToGoal_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<multi_map_nav::action::NavigateToGoal_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<multi_map_nav::action::NavigateToGoal_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<multi_map_nav::action::NavigateToGoal_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<multi_map_nav::action::NavigateToGoal_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<multi_map_nav::action::NavigateToGoal>
  : std::true_type
{
};

template<>
struct is_action_goal<multi_map_nav::action::NavigateToGoal_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<multi_map_nav::action::NavigateToGoal_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<multi_map_nav::action::NavigateToGoal_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MULTI_MAP_NAV__ACTION__DETAIL__NAVIGATE_TO_GOAL__TRAITS_HPP_
