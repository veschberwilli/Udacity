# Home Service Robot

The following code presents the functionality to simulate a home service robot that picks up a box at a certain location and drops it off at another location. Also some testing scripts are provided which are shortly explained in the following.

## Mapping

A test_slam.sh script file is provided in the scripts folder to run all necessary packages to manually test SLAM based on gmapping.

## Localization and Navigation

A test_navigation.sh file is provided allowing to manually navigate to locations using 2D Nav Goal commands.
A pick_objects.sh file is available to simluate a path that the robot follows along. 

## Home Service Functions

An add_markers.sh file is provided that publishes a marker (box geometry) first at the pick-up location and then at the drop-off location.
Further, the final script which is the home_service.sh script combines everthing to simluate the full set of functionalities covergin localization, mapping and navigation.

Et voila! The package will be delivered to you :-)
