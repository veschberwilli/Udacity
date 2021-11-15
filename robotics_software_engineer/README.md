



# Project Submission
A dedicated folder is created to provide the project submission respectively:
´´´
./project_submissions/project_x
´´´

# Chapter 2. Gazebo World

Link to Gazebo Tutorials:
http://gazebosim.org/tutorials

## add plugin:
´´´
export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/robond/repos/udacity_robotics/project_1/build
´´´
Copy this code
´´´
<plugin name="hello" filename="libhello.so"/> and paste it under <world name="default">
´´´

# Chapter 3. ROS Essentials
## Lesson 1: Introduction to ROS
needed to add new public to update ros packages:
curl http://repo.ros2.org/repos.key | sudo apt-key add -

install turtlesim: sudo apt-get install ros-$(rosversion -d)-turtlesim

useful cmds:
- show all nodes: rosnode list
- show all topics: rostopic list
- info about topic: rostopic info <topic>
- info about msg type: rosmsg info <msg_type>
- check actual message definition file: rosed geometry_msgs Twist.msg
- look at msg itself: rostopic echo /turtle1/cmd_vel

## Lesson 2: Packages & Catkin Workspaces

http://wiki.ros.org/catkin/conceptual_overview

catkin workspace conventional directory structure as described in the ROS Enhancement Proposal (REP) 128
https://www.ros.org/reps/rep-0128.html

catkin_make: build the workspace
source devel/setup.bash: source catkin env
rosdep check <package_name>
rosdep install -i <package_name>
catkin_create_pkg <your_package_name> [dependency1 dependency2 …]

https://index.ros.org/packages/
http://wiki.ros.org/


## Lesson 3: Write ROS Nodes

info about cmakelists: http://wiki.ros.org/catkin/CMakeLists.txt

request ros service via cmd: rosservice call service_name “request”

Definition of own msgs: http://wiki.ros.org/msg 

# Chapter 4. Localization

## Kalman Filter

Common Types:
- KF - linear
- EKF - nonlinear
- UKF - highly nonlinear (https://en.wikipedia.org/wiki/Kalman_filter#Unscented_Kalman_filter, http://ais.informatik.uni-freiburg.de/teaching/ws12/mapping/pdf/slam05-ukf.pdf)

Naming Conventions:
- State Variables: x,y for position and yaw for orientation, x_t
- z_t: measurement
- u: control actions

Library eigen for matrices stuff: https://eigen.tuxfamily.org/dox/group__QuickRefPage.html

## Lab: Kalman Filters

for me, the -r falg was required to install dependencies:
rosdep -i install turtlebot_gazebo -r

rosclean check/purge: remove log files


Turtlebot not working, because the TB2 is not for melodic.

Turtlebot 3:
https://github.com/ROBOTIS-GIT/turtlebot3_simulations
Spec 
https://emanual.robotis.com/docs/en/platform/turtlebot3/features/#specifications

I use "Waffle Pi" since this one has a camera on-board


## Monte Carlo Localization (MCL)

Paper from Thrun regarding MCL: http://robots.stanford.edu/papers/thrun.robust-mcl.pdf

http://www.probabilistic-robotics.org/

http://robots.stanford.edu/videos.html

http://probabilistic-robotics.informatik.uni-freiburg.de/ppt/

## Where am I Project

pgm, pnm files: https://en.wikipedia.org/wiki/Netpbm#File_formats
AMCL: http://wiki.ros.org/amcl
map server: http://wiki.ros.org/map_server
info to remap in launch file: http://wiki.ros.org/roslaunch/XML/remap


# Chapter 5. Mapping and SLAM

## Lesson 2: Occupancy Grid Mapping

De Morgan's Law to Fuse Different Sensors into Occupancy Grid

3D Data representation
- point clouds
- voxels
- octrees
- elevation maps
- multi-level surface maps

Octomaps:
https://octomap.github.io/
http://wiki.ros.org/octomap

## Lesson 3: Grid-Based Fast SLAM

http://wiki.ros.org/gmapping

## Lesson 4: GraphSLAM

http://robot.cc/papers/thrun.graphslam.pdf
http://www2.informatik.uni-freiburg.de/~stachnis/pdf/grisetti10titsmag.pdf

Real-Time Appearnace-Based (RTAB) SLAM
Speeded Up Robust Features (SURF)

Graph Optimization
- Tree Based network optimizer (TORO)
- General Graph Optimization (G2O)
- Smoothing and Mapping (GTSAM)

## Lesson 5: Map My World Project

http://wiki.ros.org/rtabmap_ros


# Chapter 6. Path Planning and Navigation

Path Planning for Non-Circular Micro Aerial Vehicles in Constrained Environments
https://www.cs.cmu.edu/~maxim/files/pathplanforMAV_icra13.pdf

https://en.wikipedia.org/wiki/Reinforcement_learning
https://towardsdatascience.com/reinforcement-learning-rl-101-with-python-e1aa0d37d43b


## Home Service Robot Project

http://wiki.ros.org/navigation/Tutorials/SendingSimpleGoals

http://wiki.ros.org/rviz/Tutorials/Markers%3A%20Basic%20Shapes


# Warning

warning: adding embedded git repository: robotics_software_engineer/chapter4_localization/lab_kalman_filters/catkin_ws/src/odom_to_trajectory
warning: adding embedded git repository: robotics_software_engineer/chapter4_localization/lab_kalman_filters/catkin_ws/src/robot_pose_ekf
warning: adding embedded git repository: robotics_software_engineer/chapter4_localization/lab_kalman_filters/catkin_ws/src/turtlebot3
warning: adding embedded git repository: robotics_software_engineer/chapter4_localization/lab_kalman_filters/catkin_ws/src/turtlebot3_simulations
warning: adding embedded git repository: robotics_software_engineer/chapter4_localization/project/catkin_ws/src/navigation
warning: adding embedded git repository: robotics_software_engineer/chapter4_localization/project/catkin_ws/src/pgm_map_creator
warning: adding embedded git repository: robotics_software_engineer/chapter4_localization/project/catkin_ws/src/teleop_twist_keyboard
warning: adding embedded git repository: robotics_software_engineer/chapter5_mapping_and_slam/RoboND-OccupancyGridMappingAlgorithm
warning: adding embedded git repository: robotics_software_engineer/chapter5_mapping_and_slam/grid_based_fast_slam/catkin_ws/src/slam_gmapping
warning: adding embedded git repository: robotics_software_engineer/chapter5_mapping_and_slam/grid_based_fast_slam/catkin_ws/src/turtlebot3
warning: adding embedded git repository: robotics_software_engineer/chapter5_mapping_and_slam/grid_based_fast_slam/catkin_ws/src/turtlebot3_simulations
warning: adding embedded git repository: robotics_software_engineer/chapter5_mapping_and_slam/map_my_world/catkin_ws/src/navigation
warning: adding embedded git repository: robotics_software_engineer/chapter5_mapping_and_slam/map_my_world/catkin_ws/src/pgm_map_creator
warning: adding embedded git repository: robotics_software_engineer/chapter5_mapping_and_slam/map_my_world/catkin_ws/src/rtabmap_ros
warning: adding embedded git repository: robotics_software_engineer/chapter5_mapping_and_slam/map_my_world/catkin_ws/src/teleop_twist_keyboard
warning: adding embedded git repository: robotics_software_engineer/chapter6_path_planning/lab_path_planning/RoboND-A-Visualization
warning: adding embedded git repository: robotics_software_engineer/project_submissions/project_4/rtabmap_ros

