# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:srv/RosGetSwVersionCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosGetSwVersionCmd_Request(type):
    """Metaclass of message 'RosGetSwVersionCmd_Request'."""

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
                'segway_msgs.srv.RosGetSwVersionCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_get_sw_version_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_get_sw_version_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_get_sw_version_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_get_sw_version_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_get_sw_version_cmd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosGetSwVersionCmd_Request(metaclass=Metaclass_RosGetSwVersionCmd_Request):
    """Message class 'RosGetSwVersionCmd_Request'."""

    __slots__ = [
        '_ros_get_sw_version_cmd',
    ]

    _fields_and_field_types = {
        'ros_get_sw_version_cmd': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_get_sw_version_cmd = kwargs.get('ros_get_sw_version_cmd', bool())

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
        if self.ros_get_sw_version_cmd != other.ros_get_sw_version_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_get_sw_version_cmd(self):
        """Message field 'ros_get_sw_version_cmd'."""
        return self._ros_get_sw_version_cmd

    @ros_get_sw_version_cmd.setter
    def ros_get_sw_version_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ros_get_sw_version_cmd' field must be of type 'bool'"
        self._ros_get_sw_version_cmd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RosGetSwVersionCmd_Response(type):
    """Metaclass of message 'RosGetSwVersionCmd_Response'."""

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
                'segway_msgs.srv.RosGetSwVersionCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_get_sw_version_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_get_sw_version_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_get_sw_version_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_get_sw_version_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_get_sw_version_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosGetSwVersionCmd_Response(metaclass=Metaclass_RosGetSwVersionCmd_Response):
    """Message class 'RosGetSwVersionCmd_Response'."""

    __slots__ = [
        '_host_version',
        '_host_pantch_version',
        '_central_version',
        '_motor_version',
    ]

    _fields_and_field_types = {
        'host_version': 'uint16',
        'host_pantch_version': 'uint16',
        'central_version': 'uint16',
        'motor_version': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.host_version = kwargs.get('host_version', int())
        self.host_pantch_version = kwargs.get('host_pantch_version', int())
        self.central_version = kwargs.get('central_version', int())
        self.motor_version = kwargs.get('motor_version', int())

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
        if self.host_version != other.host_version:
            return False
        if self.host_pantch_version != other.host_pantch_version:
            return False
        if self.central_version != other.central_version:
            return False
        if self.motor_version != other.motor_version:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def host_version(self):
        """Message field 'host_version'."""
        return self._host_version

    @host_version.setter
    def host_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'host_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'host_version' field must be an unsigned integer in [0, 65535]"
        self._host_version = value

    @builtins.property
    def host_pantch_version(self):
        """Message field 'host_pantch_version'."""
        return self._host_pantch_version

    @host_pantch_version.setter
    def host_pantch_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'host_pantch_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'host_pantch_version' field must be an unsigned integer in [0, 65535]"
        self._host_pantch_version = value

    @builtins.property
    def central_version(self):
        """Message field 'central_version'."""
        return self._central_version

    @central_version.setter
    def central_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'central_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'central_version' field must be an unsigned integer in [0, 65535]"
        self._central_version = value

    @builtins.property
    def motor_version(self):
        """Message field 'motor_version'."""
        return self._motor_version

    @motor_version.setter
    def motor_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'motor_version' field must be an unsigned integer in [0, 65535]"
        self._motor_version = value


class Metaclass_RosGetSwVersionCmd(type):
    """Metaclass of service 'RosGetSwVersionCmd'."""

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
                'segway_msgs.srv.RosGetSwVersionCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ros_get_sw_version_cmd

            from segway_msgs.srv import _ros_get_sw_version_cmd
            if _ros_get_sw_version_cmd.Metaclass_RosGetSwVersionCmd_Request._TYPE_SUPPORT is None:
                _ros_get_sw_version_cmd.Metaclass_RosGetSwVersionCmd_Request.__import_type_support__()
            if _ros_get_sw_version_cmd.Metaclass_RosGetSwVersionCmd_Response._TYPE_SUPPORT is None:
                _ros_get_sw_version_cmd.Metaclass_RosGetSwVersionCmd_Response.__import_type_support__()


class RosGetSwVersionCmd(metaclass=Metaclass_RosGetSwVersionCmd):
    from segway_msgs.srv._ros_get_sw_version_cmd import RosGetSwVersionCmd_Request as Request
    from segway_msgs.srv._ros_get_sw_version_cmd import RosGetSwVersionCmd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
