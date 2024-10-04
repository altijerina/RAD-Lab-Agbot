// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from agbot_full_msgs:action/AgbotFullArmTask.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AgbotFullArmTask_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agbot_full_msgs::action::AgbotFullArmTask_Goal(_init);
}

void AgbotFullArmTask_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agbot_full_msgs::action::AgbotFullArmTask_Goal *>(message_memory);
  typed_message->~AgbotFullArmTask_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgbotFullArmTask_Goal_message_member_array[1] = {
  {
    "task_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_Goal, task_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgbotFullArmTask_Goal_message_members = {
  "agbot_full_msgs::action",  // message namespace
  "AgbotFullArmTask_Goal",  // message name
  1,  // number of fields
  sizeof(agbot_full_msgs::action::AgbotFullArmTask_Goal),
  AgbotFullArmTask_Goal_message_member_array,  // message members
  AgbotFullArmTask_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  AgbotFullArmTask_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgbotFullArmTask_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_Goal>()
{
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_Goal)() {
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AgbotFullArmTask_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agbot_full_msgs::action::AgbotFullArmTask_Result(_init);
}

void AgbotFullArmTask_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agbot_full_msgs::action::AgbotFullArmTask_Result *>(message_memory);
  typed_message->~AgbotFullArmTask_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgbotFullArmTask_Result_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgbotFullArmTask_Result_message_members = {
  "agbot_full_msgs::action",  // message namespace
  "AgbotFullArmTask_Result",  // message name
  1,  // number of fields
  sizeof(agbot_full_msgs::action::AgbotFullArmTask_Result),
  AgbotFullArmTask_Result_message_member_array,  // message members
  AgbotFullArmTask_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  AgbotFullArmTask_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgbotFullArmTask_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_Result>()
{
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_Result)() {
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AgbotFullArmTask_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agbot_full_msgs::action::AgbotFullArmTask_Feedback(_init);
}

void AgbotFullArmTask_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agbot_full_msgs::action::AgbotFullArmTask_Feedback *>(message_memory);
  typed_message->~AgbotFullArmTask_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgbotFullArmTask_Feedback_message_member_array[1] = {
  {
    "percentage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_Feedback, percentage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgbotFullArmTask_Feedback_message_members = {
  "agbot_full_msgs::action",  // message namespace
  "AgbotFullArmTask_Feedback",  // message name
  1,  // number of fields
  sizeof(agbot_full_msgs::action::AgbotFullArmTask_Feedback),
  AgbotFullArmTask_Feedback_message_member_array,  // message members
  AgbotFullArmTask_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  AgbotFullArmTask_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgbotFullArmTask_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_Feedback>()
{
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_Feedback)() {
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AgbotFullArmTask_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Request(_init);
}

void AgbotFullArmTask_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Request *>(message_memory);
  typed_message->~AgbotFullArmTask_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgbotFullArmTask_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgbotFullArmTask_SendGoal_Request_message_members = {
  "agbot_full_msgs::action",  // message namespace
  "AgbotFullArmTask_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Request),
  AgbotFullArmTask_SendGoal_Request_message_member_array,  // message members
  AgbotFullArmTask_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AgbotFullArmTask_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgbotFullArmTask_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Request>()
{
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_SendGoal_Request)() {
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AgbotFullArmTask_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Response(_init);
}

void AgbotFullArmTask_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Response *>(message_memory);
  typed_message->~AgbotFullArmTask_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgbotFullArmTask_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgbotFullArmTask_SendGoal_Response_message_members = {
  "agbot_full_msgs::action",  // message namespace
  "AgbotFullArmTask_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Response),
  AgbotFullArmTask_SendGoal_Response_message_member_array,  // message members
  AgbotFullArmTask_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AgbotFullArmTask_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgbotFullArmTask_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Response>()
{
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_SendGoal_Response)() {
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AgbotFullArmTask_SendGoal_service_members = {
  "agbot_full_msgs::action",  // service namespace
  "AgbotFullArmTask_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AgbotFullArmTask_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::agbot_full_msgs::action::AgbotFullArmTask_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AgbotFullArmTask_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agbot_full_msgs::action::AgbotFullArmTask_GetResult_Request(_init);
}

void AgbotFullArmTask_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agbot_full_msgs::action::AgbotFullArmTask_GetResult_Request *>(message_memory);
  typed_message->~AgbotFullArmTask_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgbotFullArmTask_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgbotFullArmTask_GetResult_Request_message_members = {
  "agbot_full_msgs::action",  // message namespace
  "AgbotFullArmTask_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(agbot_full_msgs::action::AgbotFullArmTask_GetResult_Request),
  AgbotFullArmTask_GetResult_Request_message_member_array,  // message members
  AgbotFullArmTask_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AgbotFullArmTask_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgbotFullArmTask_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_GetResult_Request>()
{
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_GetResult_Request)() {
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AgbotFullArmTask_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agbot_full_msgs::action::AgbotFullArmTask_GetResult_Response(_init);
}

void AgbotFullArmTask_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agbot_full_msgs::action::AgbotFullArmTask_GetResult_Response *>(message_memory);
  typed_message->~AgbotFullArmTask_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgbotFullArmTask_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgbotFullArmTask_GetResult_Response_message_members = {
  "agbot_full_msgs::action",  // message namespace
  "AgbotFullArmTask_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(agbot_full_msgs::action::AgbotFullArmTask_GetResult_Response),
  AgbotFullArmTask_GetResult_Response_message_member_array,  // message members
  AgbotFullArmTask_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AgbotFullArmTask_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgbotFullArmTask_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_GetResult_Response>()
{
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_GetResult_Response)() {
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AgbotFullArmTask_GetResult_service_members = {
  "agbot_full_msgs::action",  // service namespace
  "AgbotFullArmTask_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AgbotFullArmTask_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::agbot_full_msgs::action::AgbotFullArmTask_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::agbot_full_msgs::action::AgbotFullArmTask_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agbot_full_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AgbotFullArmTask_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agbot_full_msgs::action::AgbotFullArmTask_FeedbackMessage(_init);
}

void AgbotFullArmTask_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agbot_full_msgs::action::AgbotFullArmTask_FeedbackMessage *>(message_memory);
  typed_message->~AgbotFullArmTask_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgbotFullArmTask_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agbot_full_msgs::action::AgbotFullArmTask_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgbotFullArmTask_FeedbackMessage_message_members = {
  "agbot_full_msgs::action",  // message namespace
  "AgbotFullArmTask_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(agbot_full_msgs::action::AgbotFullArmTask_FeedbackMessage),
  AgbotFullArmTask_FeedbackMessage_message_member_array,  // message members
  AgbotFullArmTask_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  AgbotFullArmTask_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgbotFullArmTask_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgbotFullArmTask_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace agbot_full_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_full_msgs::action::AgbotFullArmTask_FeedbackMessage>()
{
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_full_msgs, action, AgbotFullArmTask_FeedbackMessage)() {
  return &::agbot_full_msgs::action::rosidl_typesupport_introspection_cpp::AgbotFullArmTask_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
