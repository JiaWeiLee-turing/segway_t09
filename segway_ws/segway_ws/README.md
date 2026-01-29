
## 1 底盘上位机运动测试

（1）关闭遥控器；或者打开遥控器，同时，使能拨杆拨往上方上位机模式，并且确保急停拨杆没有拨往下方的急停状态。

（2）进入ros的工作空间，运行如下命令,编译segway_msgs包。
```
cd catkin_ws
catkin_make -DCATKIN_WHITELIST_PACKAGES='segway_msgs'
```

（3）进入ros的工作空间，运行如下命令,编译segwayrmp包。

```
cd catkin_ws
catkin_make -DCATKIN_WHITELIST_PACKAGES='segwayrmp'
```

（4）执行测试，为避免受之前打开的terminal的影响，建议先关掉之前的terminal，打开三个terminal。

```
cd catkin_ws
roscore
```

------

```
cd catkin_ws
source devel/setup.bash
rosrun segwayrmp SmartCar
```

------

```
cd catkin_ws
source devel/setup.bash
rosrun segwayrmp drive_segway_sample
```



------

## 2 主要文件路径说明

（1）segway_msgs：自定义消息package

​					segway_msgs/msg：自定义消息

（2）segwayrmp：SmartCar节点所在package

​					segwayrmp/include：节点所需头文件路径

​					segwayrmp/lib：ROS所需上位机动态库所在路径

​					segwayrmp/src：和底盘数据交互SmartCar节点源文件程序

​					segwayrmp/tools：运动测试drive_segway_sample节点源程序




## 註：

（1）以上是 ros1 build code and launch 的方式，但是太麻煩了，所以我有把一些基本功能升級到 segway_ros2 方便使用 ros2 測試操作，但是裡面並沒有包含全部可使用的功能，只有最低限度功能而已。

（2）升級內容包含 segway_msgs and segwayrmp(部份車控功能升級到 ROS2，package name: segway_ros2)

（3）而此 ws 我已經丟到 MaaS Stark 上那台遠端控制的筆電進行驗證，可以搭配 MaaS 的系統進行遠端控制 Segway 在辦公室內繞圈、前進、後退、左右轉向等動作（如果使用手機熱點應該能到室外去）。

（4）那台筆電路徑： ~/Belle/segway_ws

（5）開啟方式：筆電接 segway's serial port, 然後開起 $ ./run_segway_actuator.sh 仔細注意一下，剛吐出來的前面幾行字，看有沒有寫 serial port open successfully 之類的話，這樣才表示有成功開起來。

（6）搭配 MaaS 原有程式： ~/Belle/rakk..._ws 的遠端控制 service 這樣就能遠端開那台 segway 車了



## 簡易故障排除：

Serial port 連線問題：

（1）在最外層 401ChassisInit.sh 已經設定好了理論上要開的起來，不行的話先可以先將筆電關機並拔除所有 usb 設備，然後先接上 segway's serial port 再開機，再依序接上你的其他設備。

（2）不然就是進到目錄：segway_ws/src/segway_ros2/lib，執行指令 $ ./ctrl_x86_64 s -test central 按 enter 後再輸入 ttyUSB0 然後看看會不會有資料跑出來（如中文用戶手冊的 p.28）會顯示 0x???? 的韌體版號，理論上那台要顯示 0x2028，如果顯示 0xFFFF 表示連線失敗，再執行一次第一步看能不能連線

