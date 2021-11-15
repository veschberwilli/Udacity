execute_process(COMMAND "/lhome/micmink/fad/repos/github/udacity_robotics/localization/project/catkin_ws/build/navigation/base_local_planner/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/lhome/micmink/fad/repos/github/udacity_robotics/localization/project/catkin_ws/build/navigation/base_local_planner/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
