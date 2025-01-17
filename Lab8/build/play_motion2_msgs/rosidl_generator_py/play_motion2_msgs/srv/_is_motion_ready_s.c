// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from play_motion2_msgs:srv/IsMotionReady.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "play_motion2_msgs/srv/detail/is_motion_ready__struct.h"
#include "play_motion2_msgs/srv/detail/is_motion_ready__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool play_motion2_msgs__srv__is_motion_ready__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("play_motion2_msgs.srv._is_motion_ready.IsMotionReady_Request", full_classname_dest, 60) == 0);
  }
  play_motion2_msgs__srv__IsMotionReady_Request * ros_message = _ros_message;
  {  // motion_key
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_key");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->motion_key, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * play_motion2_msgs__srv__is_motion_ready__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IsMotionReady_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("play_motion2_msgs.srv._is_motion_ready");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IsMotionReady_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  play_motion2_msgs__srv__IsMotionReady_Request * ros_message = (play_motion2_msgs__srv__IsMotionReady_Request *)raw_ros_message;
  {  // motion_key
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->motion_key.data,
      strlen(ros_message->motion_key.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_key", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "play_motion2_msgs/srv/detail/is_motion_ready__struct.h"
// already included above
// #include "play_motion2_msgs/srv/detail/is_motion_ready__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool play_motion2_msgs__srv__is_motion_ready__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("play_motion2_msgs.srv._is_motion_ready.IsMotionReady_Response", full_classname_dest, 61) == 0);
  }
  play_motion2_msgs__srv__IsMotionReady_Response * ros_message = _ros_message;
  {  // is_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_ready = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * play_motion2_msgs__srv__is_motion_ready__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IsMotionReady_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("play_motion2_msgs.srv._is_motion_ready");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IsMotionReady_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  play_motion2_msgs__srv__IsMotionReady_Response * ros_message = (play_motion2_msgs__srv__IsMotionReady_Response *)raw_ros_message;
  {  // is_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
