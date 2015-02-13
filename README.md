ugv
===

An unmanned ground vehicle that using GPS, LiDAR and IMU sensor.

Note: This is an ongoing project. I will update the repo as I make progress. You can ask questions by sending an email to me.

#### Code Folder Descriptions :
+ lib : Hokuyo URG sensor library (C/C++)
+ src/navigation : obstacle-avoidance algorithm runs on R.Pi
+ src/motorDriver : Arduino code for generating PWMs for motors
+ APM:Rover you can find it [here](https://github.com/diydrones/ardupilot/tree/master/APMrover2)

#### Part List :

+ An RC Car carry all these parts
+ APM 2.6 with compatible GPS module
+ Raspberry Pi (I used B+)
+ Arduino (I used UNO)
+ Hokuyo Lidar (I used URG-04LX)
+ Telemetry Kit(I used 3DRobotics Radio Kit)
+ A LiPo for computing (3000 mAh is enough)
+ A LiPo for RC Car motors
+ Other electronics (cables, regulators etc)
