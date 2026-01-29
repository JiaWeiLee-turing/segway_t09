# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:srv/RosGetLoadParamCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosGetLoadParamCmd_Request(type):
    """Metaclass of message 'RosGetLoadParamCmd_Request'."""

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
                'segway_msgs.srv.RosGetLoadParamCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_get_load_param_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_get_load_param_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_get_load_param_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_get_load_param_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_get_load_param_cmd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosGetLoadParamCmd_Request(metaclass=Metaclass_RosGetLoadParamCmd_Request):
    """Message class 'RosGetLoadParamCmd_Request'."""

    __slots__ = [
        '_ros_get_load_param',
    ]

    _fields_and_field_types = {
        'ros_get_load_param': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_get_load_param = kwargs.get('ros_get_load_param', bool())

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
        if self.ros_get_load_param != other.ros_get_load_param:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_get_load_param(self):
        """Message field 'ros_get_load_param'."""
        return self._ros_get_load_param

    @ros_get_load_param.setter
    def ros_get_load_param(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ros_get_load_param' field must be of type 'bool'"
        self._ros_get_load_param = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RosGetLoadParamCmd_Response(type):
    """Metaclass of message 'RosGetLoadParamCmd_Response'."""

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
                'segway_msgs.srv.RosGetLoadParamCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_get_load_param_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_get_load_param_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_get_load_param_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_get_load_param_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_get_load_param_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosGetLoadParamCmd_Response(metaclass=Metaclass_RosGetLoadParamCmd_Response):
    """Message class 'RosGetLoadParamCmd_Response'."""

    __slots__ = [
        '_get_load_param',
    ]

    _fields_and_field_types = {
        'get_load_param': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.get_load_param = kwargs.get('get_load_param', int())

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
        if self.get_load_param != other.get_load_param:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def get_load_param(self):
        """Message field 'get_load_param'."""
        return self._get_load_param

    @get_load_param.setter
    def get_load_param(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'get_load_param' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'get_load_param' field must be an integer in [-32768, 32767]"
        self._get_load_param = value


class Metaclass_RosGetLoadParamCmd(type):
    """Metaclass of service 'RosGetLoadParamCmd'."""

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
                'segway_msgs.srv.RosGetLoadParamCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ros_get_load_param_cmd

            from segway_msgs.srv import _ros_get_load_param_cmd
            if _ros_get_load_param_cmd.Metaclass_RosGetLoadParamCmd_Request._TYPE_SUPPORT is None:
                _ros_get_load_param_cmd.Metaclass_RosGetLoadParamCmd_Request.__import_type_support__()
            if _ros_get_load_param_cmd.Metaclass_RosGetLoadParamCmd_Response._TYPE_SUPPORT is None:
                _ros_get_load_param_cmd.Metaclass_RosGetLoadParamCmd_Response.__import_type_support__()


class RosGetLoadParamCmd(metaclass=Metaclass_RosGetLoadParamCmd):
    from segway_msgs.srv._ros_get_load_param_cmd import RosGetLoadParamCmd_Request as Request
    from segway_msgs.srv._ros_get_load_param_cmd import RosGetLoadParamCmd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
