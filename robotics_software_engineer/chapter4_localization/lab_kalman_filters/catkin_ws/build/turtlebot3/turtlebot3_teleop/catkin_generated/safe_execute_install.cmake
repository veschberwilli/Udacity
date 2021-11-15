execute_process(COMMAND "/lhome/micmink/fad/repos/github/udacity_robotics/localization/lab_kalman_filters/catkin_ws/build/turtlebot3/turtlebot3_teleop/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/lhome/micmink/fad/repos/github/udacity_robotics/localization/lab_kalman_filters/catkin_ws/build/turtlebot3/turtlebot3_teleop/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
