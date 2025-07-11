// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:action/NavigateToPose.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__BUILDER_HPP_
#define NAV2_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/action/detail/navigate_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateToPose_Goal_behavior_tree
{
public:
  explicit Init_NavigateToPose_Goal_behavior_tree(::nav2_msgs::action::NavigateToPose_Goal & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::NavigateToPose_Goal behavior_tree(::nav2_msgs::action::NavigateToPose_Goal::_behavior_tree_type arg)
  {
    msg_.behavior_tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Goal msg_;
};

class Init_NavigateToPose_Goal_pose
{
public:
  Init_NavigateToPose_Goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPose_Goal_behavior_tree pose(::nav2_msgs::action::NavigateToPose_Goal::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_NavigateToPose_Goal_behavior_tree(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::NavigateToPose_Goal>()
{
  return nav2_msgs::action::builder::Init_NavigateToPose_Goal_pose();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateToPose_Result_error_msg
{
public:
  explicit Init_NavigateToPose_Result_error_msg(::nav2_msgs::action::NavigateToPose_Result & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::NavigateToPose_Result error_msg(::nav2_msgs::action::NavigateToPose_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Result msg_;
};

class Init_NavigateToPose_Result_error_code
{
public:
  Init_NavigateToPose_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPose_Result_error_msg error_code(::nav2_msgs::action::NavigateToPose_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_NavigateToPose_Result_error_msg(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::NavigateToPose_Result>()
{
  return nav2_msgs::action::builder::Init_NavigateToPose_Result_error_code();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateToPose_Feedback_distance_remaining
{
public:
  explicit Init_NavigateToPose_Feedback_distance_remaining(::nav2_msgs::action::NavigateToPose_Feedback & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::NavigateToPose_Feedback distance_remaining(::nav2_msgs::action::NavigateToPose_Feedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Feedback msg_;
};

class Init_NavigateToPose_Feedback_number_of_recoveries
{
public:
  explicit Init_NavigateToPose_Feedback_number_of_recoveries(::nav2_msgs::action::NavigateToPose_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigateToPose_Feedback_distance_remaining number_of_recoveries(::nav2_msgs::action::NavigateToPose_Feedback::_number_of_recoveries_type arg)
  {
    msg_.number_of_recoveries = std::move(arg);
    return Init_NavigateToPose_Feedback_distance_remaining(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Feedback msg_;
};

class Init_NavigateToPose_Feedback_estimated_time_remaining
{
public:
  explicit Init_NavigateToPose_Feedback_estimated_time_remaining(::nav2_msgs::action::NavigateToPose_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigateToPose_Feedback_number_of_recoveries estimated_time_remaining(::nav2_msgs::action::NavigateToPose_Feedback::_estimated_time_remaining_type arg)
  {
    msg_.estimated_time_remaining = std::move(arg);
    return Init_NavigateToPose_Feedback_number_of_recoveries(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Feedback msg_;
};

class Init_NavigateToPose_Feedback_navigation_time
{
public:
  explicit Init_NavigateToPose_Feedback_navigation_time(::nav2_msgs::action::NavigateToPose_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigateToPose_Feedback_estimated_time_remaining navigation_time(::nav2_msgs::action::NavigateToPose_Feedback::_navigation_time_type arg)
  {
    msg_.navigation_time = std::move(arg);
    return Init_NavigateToPose_Feedback_estimated_time_remaining(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Feedback msg_;
};

class Init_NavigateToPose_Feedback_current_pose
{
public:
  Init_NavigateToPose_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPose_Feedback_navigation_time current_pose(::nav2_msgs::action::NavigateToPose_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_NavigateToPose_Feedback_navigation_time(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::NavigateToPose_Feedback>()
{
  return nav2_msgs::action::builder::Init_NavigateToPose_Feedback_current_pose();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateToPose_SendGoal_Request_goal
{
public:
  explicit Init_NavigateToPose_SendGoal_Request_goal(::nav2_msgs::action::NavigateToPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::NavigateToPose_SendGoal_Request goal(::nav2_msgs::action::NavigateToPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_SendGoal_Request msg_;
};

class Init_NavigateToPose_SendGoal_Request_goal_id
{
public:
  Init_NavigateToPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPose_SendGoal_Request_goal goal_id(::nav2_msgs::action::NavigateToPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToPose_SendGoal_Request_goal(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::NavigateToPose_SendGoal_Request>()
{
  return nav2_msgs::action::builder::Init_NavigateToPose_SendGoal_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateToPose_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateToPose_SendGoal_Response_stamp(::nav2_msgs::action::NavigateToPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::NavigateToPose_SendGoal_Response stamp(::nav2_msgs::action::NavigateToPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_SendGoal_Response msg_;
};

class Init_NavigateToPose_SendGoal_Response_accepted
{
public:
  Init_NavigateToPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPose_SendGoal_Response_stamp accepted(::nav2_msgs::action::NavigateToPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateToPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::NavigateToPose_SendGoal_Response>()
{
  return nav2_msgs::action::builder::Init_NavigateToPose_SendGoal_Response_accepted();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateToPose_GetResult_Request_goal_id
{
public:
  Init_NavigateToPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::action::NavigateToPose_GetResult_Request goal_id(::nav2_msgs::action::NavigateToPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::NavigateToPose_GetResult_Request>()
{
  return nav2_msgs::action::builder::Init_NavigateToPose_GetResult_Request_goal_id();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateToPose_GetResult_Response_result
{
public:
  explicit Init_NavigateToPose_GetResult_Response_result(::nav2_msgs::action::NavigateToPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::NavigateToPose_GetResult_Response result(::nav2_msgs::action::NavigateToPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_GetResult_Response msg_;
};

class Init_NavigateToPose_GetResult_Response_status
{
public:
  Init_NavigateToPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPose_GetResult_Response_result status(::nav2_msgs::action::NavigateToPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToPose_GetResult_Response_result(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::NavigateToPose_GetResult_Response>()
{
  return nav2_msgs::action::builder::Init_NavigateToPose_GetResult_Response_status();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateToPose_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateToPose_FeedbackMessage_feedback(::nav2_msgs::action::NavigateToPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::action::NavigateToPose_FeedbackMessage feedback(::nav2_msgs::action::NavigateToPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_FeedbackMessage msg_;
};

class Init_NavigateToPose_FeedbackMessage_goal_id
{
public:
  Init_NavigateToPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPose_FeedbackMessage_feedback goal_id(::nav2_msgs::action::NavigateToPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::nav2_msgs::action::NavigateToPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::action::NavigateToPose_FeedbackMessage>()
{
  return nav2_msgs::action::builder::Init_NavigateToPose_FeedbackMessage_goal_id();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSE__BUILDER_HPP_
