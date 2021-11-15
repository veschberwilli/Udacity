#!/bin/sh

# launch world.launch to deploy environment
xterm -e "cd $(pwd)/../..;
source devel/setup.bash; 
roslaunch my_robot world.launch" &

sleep 5

# amcl_demo.launch to localize the robot
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
roslaunch my_robot amcl_demo.launch" &

sleep 5

# launch view_navigation for rviz
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
roslaunch my_robot view_home_service_robot.launch" &

sleep 5

launch add_markers node
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
rosrun add_markers add_markers;" &

sleep 5

launch pick_objects node
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
rosparam load src/config/pick_objects_config.yaml;
rosrun pick_objects pick_objects;"
