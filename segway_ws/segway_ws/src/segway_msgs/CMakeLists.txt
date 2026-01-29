cmake_minimum_required(VERSION 3.8)
project(segway_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/BmsFb.msg"
  "msg/ChassisCtrlSrcFb.msg"
  "msg/ChassisMileageMeterFb.msg"
  "msg/ChassisModeFb.msg"
  "msg/ErrorCodeFb.msg"
  "msg/FrontWheelAngleFb.msg"
  "msg/MotorWorkModeFb.msg"
  "msg/SpeedFb.msg"
  "msg/TicksFb.msg"
  "srv/ChassisSendEvent.srv"
  "srv/RosClearChassisErrorCodeCmd.srv"
  "srv/RosEnableChassisRotateCmd.srv"
  "srv/RosGetChassisRotateSwitchCmd.srv"
  "srv/RosGetChassisSnCmd.srv"
  "srv/RosGetHostAndChassisMatchCmd.srv"
  "srv/RosGetLoadParamCmd.srv"
  "srv/RosGetRotateFunctionCfgCmd.srv"
  "srv/RosGetSwVersionCmd.srv"
  "srv/RosGetVelMaxFeedbackCmd.srv"
  "srv/RosResetHostPowerCmd.srv"
  "srv/RosSetCfgRotateFunctionCmd.srv"
  "srv/RosSetChassisBuzzerCmd.srv"
  "srv/RosSetChassisEnableCmd.srv"
  "srv/RosSetChassisPoweroffCmd.srv"
  "srv/RosSetLoadParamCmd.srv"
  "srv/RosSetVelMaxCmd.srv"
  "srv/RosStartChassisLeftRotateCmd.srv"
  "srv/RosStartChassisRightRotateCmd.srv"
  "srv/RosStopChassisRotateCmd.srv"
  "action/RosSetIapCmd.action"
)


ament_export_dependencies(rosidl_default_runtime)
ament_package()
