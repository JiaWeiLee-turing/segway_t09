# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:srv/ChassisSendEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChassisSendEvent_Request(type):
    """Metaclass of message 'ChassisSendEvent_Request'."""

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
                'segway_msgs.srv.ChassisSendEvent_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__chassis_send_event__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__chassis_send_event__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__chassis_send_event__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__chassis_send_event__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__chassis_send_event__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChassisSendEvent_Request(metaclass=Metaclass_ChassisSendEvent_Request):
    """Message class 'ChassisSendEvent_Request'."""

    __slots__ = [
        '_chassis_send_event_id',
    ]

    _fields_and_field_types = {
        'chassis_send_event_id': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.chassis_send_event_id = kwargs.get('chassis_send_event_id', int())

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
        if self.chassis_send_event_id != other.chassis_send_event_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def chassis_send_event_id(self):
        """Message field 'chassis_send_event_id'."""
        return self._chassis_send_event_id

    @chassis_send_event_id.setter
    def chassis_send_event_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chassis_send_event_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'chassis_send_event_id' field must be an integer in [-32768, 32767]"
        self._chassis_send_event_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChassisSendEvent_Response(type):
    """Metaclass of message 'ChassisSendEvent_Response'."""

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
                'segway_msgs.srv.ChassisSendEvent_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__chassis_send_event__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__chassis_send_event__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__chassis_send_event__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__chassis_send_event__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__chassis_send_event__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChassisSendEvent_Response(metaclass=Metaclass_ChassisSendEvent_Response):
    """Message class 'ChassisSendEvent_Response'."""

    __slots__ = [
        '_ros_is_received',
    ]

    _fields_and_field_types = {
        'ros_is_received': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_is_received = kwargs.get('ros_is_received', bool())

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
        if self.ros_is_received != other.ros_is_received:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_is_received(self):
        """Message field 'ros_is_received'."""
        return self._ros_is_received

    @ros_is_received.setter
    def ros_is_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ros_is_received' field must be of type 'bool'"
        self._ros_is_received = value


class Metaclass_ChassisSendEvent(type):
    """Metaclass of service 'ChassisSendEvent'."""

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
                'segway_msgs.srv.ChassisSendEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__chassis_send_event

            from segway_msgs.srv import _chassis_send_event
            if _chassis_send_event.Metaclass_ChassisSendEvent_Request._TYPE_SUPPORT is None:
                _chassis_send_event.Metaclass_ChassisSendEvent_Request.__import_type_support__()
            if _chassis_send_event.Metaclass_ChassisSendEvent_Response._TYPE_SUPPORT is None:
                _chassis_send_event.Metaclass_ChassisSendEvent_Response.__import_type_support__()


class ChassisSendEvent(metaclass=Metaclass_ChassisSendEvent):
    from segway_msgs.srv._chassis_send_event import ChassisSendEvent_Request as Request
    from segway_msgs.srv._chassis_send_event import ChassisSendEvent_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
