# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:srv/RosEnableChassisRotateCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosEnableChassisRotateCmd_Request(type):
    """Metaclass of message 'RosEnableChassisRotateCmd_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('segway_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'segway_msgs.srv.RosEnableChassisRotateCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_enable_chassis_rotate_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_enable_chassis_rotate_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_enable_chassis_rotate_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_enable_chassis_rotate_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_enable_chassis_rotate_cmd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosEnableChassisRotateCmd_Request(metaclass=Metaclass_RosEnableChassisRotateCmd_Request):
    """Message class 'RosEnableChassisRotateCmd_Request'."""

    __slots__ = [
        '_ros_enable_chassis_rotate_cmd',
    ]

    _fields_and_field_types = {
        'ros_enable_chassis_rotate_cmd': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_enable_chassis_rotate_cmd = kwargs.get('ros_enable_chassis_rotate_cmd', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ros_enable_chassis_rotate_cmd != other.ros_enable_chassis_rotate_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_enable_chassis_rotate_cmd(self):
        """Message field 'ros_enable_chassis_rotate_cmd'."""
        return self._ros_enable_chassis_rotate_cmd

    @ros_enable_chassis_rotate_cmd.setter
    def ros_enable_chassis_rotate_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ros_enable_chassis_rotate_cmd' field must be of type 'bool'"
        self._ros_enable_chassis_rotate_cmd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RosEnableChassisRotateCmd_Response(type):
    """Metaclass of message 'RosEnableChassisRotateCmd_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('segway_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'segway_msgs.srv.RosEnableChassisRotateCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_enable_chassis_rotate_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_enable_chassis_rotate_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_enable_chassis_rotate_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_enable_chassis_rotate_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_enable_chassis_rotate_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosEnableChassisRotateCmd_Response(metaclass=Metaclass_RosEnableChassisRotateCmd_Response):
    """Message class 'RosEnableChassisRotateCmd_Response'."""

    __slots__ = [
        '_chassis_enable_rotate_result',
    ]

    _fields_and_field_types = {
        'chassis_enable_rotate_result': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.chassis_enable_rotate_result = kwargs.get('chassis_enable_rotate_result', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.chassis_enable_rotate_result != other.chassis_enable_rotate_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def chassis_enable_rotate_result(self):
        """Message field 'chassis_enable_rotate_result'."""
        return self._chassis_enable_rotate_result

    @chassis_enable_rotate_result.setter
    def chassis_enable_rotate_result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chassis_enable_rotate_result' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'chassis_enable_rotate_result' field must be an integer in [-32768, 32767]"
        self._chassis_enable_rotate_result = value


class Metaclass_RosEnableChassisRotateCmd(type):
    """Metaclass of service 'RosEnableChassisRotateCmd'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('segway_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'segway_msgs.srv.RosEnableChassisRotateCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ros_enable_chassis_rotate_cmd

            from segway_msgs.srv import _ros_enable_chassis_rotate_cmd
            if _ros_enable_chassis_rotate_cmd.Metaclass_RosEnableChassisRotateCmd_Request._TYPE_SUPPORT is None:
                _ros_enable_chassis_rotate_cmd.Metaclass_RosEnableChassisRotateCmd_Request.__import_type_support__()
            if _ros_enable_chassis_rotate_cmd.Metaclass_RosEnableChassisRotateCmd_Response._TYPE_SUPPORT is None:
                _ros_enable_chassis_rotate_cmd.Metaclass_RosEnableChassisRotateCmd_Response.__import_type_support__()


class RosEnableChassisRotateCmd(metaclass=Metaclass_RosEnableChassisRotateCmd):
    from segway_msgs.srv._ros_enable_chassis_rotate_cmd import RosEnableChassisRotateCmd_Request as Request
    from segway_msgs.srv._ros_enable_chassis_rotate_cmd import RosEnableChassisRotateCmd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
