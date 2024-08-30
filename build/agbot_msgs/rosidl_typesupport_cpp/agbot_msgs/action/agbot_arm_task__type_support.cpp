// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from agbot_msgs:action/AgbotArmTask.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_Goal_type_support_ids_t;

static const _AgbotArmTask_Goal_type_support_ids_t _AgbotArmTask_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_Goal_type_support_symbol_names_t _AgbotArmTask_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_Goal)),
  }
};

typedef struct _AgbotArmTask_Goal_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_Goal_type_support_data_t;

static _AgbotArmTask_Goal_type_support_data_t _AgbotArmTask_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_Goal_message_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AgbotArmTask_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_Goal>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, agbot_msgs, action, AgbotArmTask_Goal)() {
  return get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_Result_type_support_ids_t;

static const _AgbotArmTask_Result_type_support_ids_t _AgbotArmTask_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_Result_type_support_symbol_names_t _AgbotArmTask_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_Result)),
  }
};

typedef struct _AgbotArmTask_Result_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_Result_type_support_data_t;

static _AgbotArmTask_Result_type_support_data_t _AgbotArmTask_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_Result_message_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_Result_message_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_Result_message_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AgbotArmTask_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_Result>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, agbot_msgs, action, AgbotArmTask_Result)() {
  return get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_Feedback_type_support_ids_t;

static const _AgbotArmTask_Feedback_type_support_ids_t _AgbotArmTask_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_Feedback_type_support_symbol_names_t _AgbotArmTask_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_Feedback)),
  }
};

typedef struct _AgbotArmTask_Feedback_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_Feedback_type_support_data_t;

static _AgbotArmTask_Feedback_type_support_data_t _AgbotArmTask_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_Feedback_message_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AgbotArmTask_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_Feedback>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, agbot_msgs, action, AgbotArmTask_Feedback)() {
  return get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_SendGoal_Request_type_support_ids_t;

static const _AgbotArmTask_SendGoal_Request_type_support_ids_t _AgbotArmTask_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_SendGoal_Request_type_support_symbol_names_t _AgbotArmTask_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_SendGoal_Request)),
  }
};

typedef struct _AgbotArmTask_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_SendGoal_Request_type_support_data_t;

static _AgbotArmTask_SendGoal_Request_type_support_data_t _AgbotArmTask_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_SendGoal_Request_message_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AgbotArmTask_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_SendGoal_Request>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, agbot_msgs, action, AgbotArmTask_SendGoal_Request)() {
  return get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_SendGoal_Response_type_support_ids_t;

static const _AgbotArmTask_SendGoal_Response_type_support_ids_t _AgbotArmTask_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_SendGoal_Response_type_support_symbol_names_t _AgbotArmTask_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_SendGoal_Response)),
  }
};

typedef struct _AgbotArmTask_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_SendGoal_Response_type_support_data_t;

static _AgbotArmTask_SendGoal_Response_type_support_data_t _AgbotArmTask_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_SendGoal_Response_message_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AgbotArmTask_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_SendGoal_Response>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, agbot_msgs, action, AgbotArmTask_SendGoal_Response)() {
  return get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_SendGoal_type_support_ids_t;

static const _AgbotArmTask_SendGoal_type_support_ids_t _AgbotArmTask_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_SendGoal_type_support_symbol_names_t _AgbotArmTask_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_SendGoal)),
  }
};

typedef struct _AgbotArmTask_SendGoal_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_SendGoal_type_support_data_t;

static _AgbotArmTask_SendGoal_type_support_data_t _AgbotArmTask_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_SendGoal_service_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AgbotArmTask_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<agbot_msgs::action::AgbotArmTask_SendGoal>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_GetResult_Request_type_support_ids_t;

static const _AgbotArmTask_GetResult_Request_type_support_ids_t _AgbotArmTask_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_GetResult_Request_type_support_symbol_names_t _AgbotArmTask_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_GetResult_Request)),
  }
};

typedef struct _AgbotArmTask_GetResult_Request_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_GetResult_Request_type_support_data_t;

static _AgbotArmTask_GetResult_Request_type_support_data_t _AgbotArmTask_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_GetResult_Request_message_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AgbotArmTask_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_GetResult_Request>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, agbot_msgs, action, AgbotArmTask_GetResult_Request)() {
  return get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_GetResult_Response_type_support_ids_t;

static const _AgbotArmTask_GetResult_Response_type_support_ids_t _AgbotArmTask_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_GetResult_Response_type_support_symbol_names_t _AgbotArmTask_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_GetResult_Response)),
  }
};

typedef struct _AgbotArmTask_GetResult_Response_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_GetResult_Response_type_support_data_t;

static _AgbotArmTask_GetResult_Response_type_support_data_t _AgbotArmTask_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_GetResult_Response_message_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AgbotArmTask_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_GetResult_Response>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, agbot_msgs, action, AgbotArmTask_GetResult_Response)() {
  return get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_GetResult_type_support_ids_t;

static const _AgbotArmTask_GetResult_type_support_ids_t _AgbotArmTask_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_GetResult_type_support_symbol_names_t _AgbotArmTask_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_GetResult)),
  }
};

typedef struct _AgbotArmTask_GetResult_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_GetResult_type_support_data_t;

static _AgbotArmTask_GetResult_type_support_data_t _AgbotArmTask_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_GetResult_service_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AgbotArmTask_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<agbot_msgs::action::AgbotArmTask_GetResult>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _AgbotArmTask_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AgbotArmTask_FeedbackMessage_type_support_ids_t;

static const _AgbotArmTask_FeedbackMessage_type_support_ids_t _AgbotArmTask_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AgbotArmTask_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AgbotArmTask_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AgbotArmTask_FeedbackMessage_type_support_symbol_names_t _AgbotArmTask_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agbot_msgs, action, AgbotArmTask_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agbot_msgs, action, AgbotArmTask_FeedbackMessage)),
  }
};

typedef struct _AgbotArmTask_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _AgbotArmTask_FeedbackMessage_type_support_data_t;

static _AgbotArmTask_FeedbackMessage_type_support_data_t _AgbotArmTask_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AgbotArmTask_FeedbackMessage_message_typesupport_map = {
  2,
  "agbot_msgs",
  &_AgbotArmTask_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_AgbotArmTask_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_AgbotArmTask_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AgbotArmTask_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AgbotArmTask_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_FeedbackMessage>()
{
  return &::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, agbot_msgs, action, AgbotArmTask_FeedbackMessage)() {
  return get_message_type_support_handle<agbot_msgs::action::AgbotArmTask_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace agbot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t AgbotArmTask_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace agbot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<agbot_msgs::action::AgbotArmTask>()
{
  using ::agbot_msgs::action::rosidl_typesupport_cpp::AgbotArmTask_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  AgbotArmTask_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::agbot_msgs::action::AgbotArmTask::Impl::SendGoalService>();
  AgbotArmTask_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::agbot_msgs::action::AgbotArmTask::Impl::GetResultService>();
  AgbotArmTask_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::agbot_msgs::action::AgbotArmTask::Impl::CancelGoalService>();
  AgbotArmTask_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::agbot_msgs::action::AgbotArmTask::Impl::FeedbackMessage>();
  AgbotArmTask_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::agbot_msgs::action::AgbotArmTask::Impl::GoalStatusMessage>();
  return &AgbotArmTask_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
