# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:srv/RosGetChassisSnCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosGetChassisSnCmd_Request(type):
    """Metaclass of message 'RosGetChassisSnCmd_Request'."""

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
                'segway_msgs.srv.RosGetChassisSnCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_get_chassis_sn_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_get_chassis_sn_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_get_chassis_sn_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_get_chassis_sn_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_get_chassis_sn_cmd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosGetChassisSnCmd_Request(metaclass=Metaclass_RosGetChassisSnCmd_Request):
    """Message class 'RosGetChassisSnCmd_Request'."""

    __slots__ = [
        '_ros_get_chassis_sn',
    ]

    _fields_and_field_types = {
        'ros_get_chassis_sn': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_get_chassis_sn = kwargs.get('ros_get_chassis_sn', bool())

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
        if self.ros_get_chassis_sn != other.ros_get_chassis_sn:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_get_chassis_sn(self):
        """Message field 'ros_get_chassis_sn'."""
        return self._ros_get_chassis_sn

    @ros_get_chassis_sn.setter
    def ros_get_chassis_sn(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ros_get_chassis_sn' field must be of type 'bool'"
        self._ros_get_chassis_sn = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RosGetChassisSnCmd_Response(type):
    """Metaclass of message 'RosGetChassisSnCmd_Response'."""

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
                'segway_msgs.srv.RosGetChassisSnCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_get_chassis_sn_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_get_chassis_sn_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_get_chassis_sn_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_get_chassis_sn_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_get_chassis_sn_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosGetChassisSnCmd_Response(metaclass=Metaclass_RosGetChassisSnCmd_Response):
    """Message class 'RosGetChassisSnCmd_Response'."""

    __slots__ = [
        '_chassis_sn',
    ]

    _fields_and_field_types = {
        'chassis_sn': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.chassis_sn = kwargs.get('chassis_sn', str())

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
        if self.chassis_sn != other.chassis_sn:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def chassis_sn(self):
        """Message field 'chassis_sn'."""
        return self._chassis_sn

    @chassis_sn.setter
    def chassis_sn(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'chassis_sn' field must be of type 'str'"
        self._chassis_sn = value


class Metaclass_RosGetChassisSnCmd(type):
    """Metaclass of service 'RosGetChassisSnCmd'."""

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
                'segway_msgs.srv.RosGetChassisSnCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ros_get_chassis_sn_cmd

            from segway_msgs.srv import _ros_get_chassis_sn_cmd
            if _ros_get_chassis_sn_cmd.Metaclass_RosGetChassisSnCmd_Request._TYPE_SUPPORT is None:
                _ros_get_chassis_sn_cmd.Metaclass_RosGetChassisSnCmd_Request.__import_type_support__()
            if _ros_get_chassis_sn_cmd.Metaclass_RosGetChassisSnCmd_Response._TYPE_SUPPORT is None:
                _ros_get_chassis_sn_cmd.Metaclass_RosGetChassisSnCmd_Response.__import_type_support__()


class RosGetChassisSnCmd(metaclass=Metaclass_RosGetChassisSnCmd):
    from segway_msgs.srv._ros_get_chassis_sn_cmd import RosGetChassisSnCmd_Request as Request
    from segway_msgs.srv._ros_get_chassis_sn_cmd import RosGetChassisSnCmd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
