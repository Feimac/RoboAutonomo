# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/felipe/ros2_ws/gazebo_models

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/felipe/ros2_ws/build/gazebo_models

# Utility rule file for office_building.

# Include any custom commands dependencies for this target.
include CMakeFiles/office_building.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/office_building.dir/progress.make

CMakeFiles/office_building:
	mkdir -p /home/felipe/ros2_ws/build/gazebo_models/office_building
	tar czvf /home/felipe/ros2_ws/build/gazebo_models/office_building/model.tar.gz ../office_building

office_building: CMakeFiles/office_building
office_building: CMakeFiles/office_building.dir/build.make
.PHONY : office_building

# Rule to build all files generated by this target.
CMakeFiles/office_building.dir/build: office_building
.PHONY : CMakeFiles/office_building.dir/build

CMakeFiles/office_building.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/office_building.dir/cmake_clean.cmake
.PHONY : CMakeFiles/office_building.dir/clean

CMakeFiles/office_building.dir/depend:
	cd /home/felipe/ros2_ws/build/gazebo_models && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felipe/ros2_ws/gazebo_models /home/felipe/ros2_ws/gazebo_models /home/felipe/ros2_ws/build/gazebo_models /home/felipe/ros2_ws/build/gazebo_models /home/felipe/ros2_ws/build/gazebo_models/CMakeFiles/office_building.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/office_building.dir/depend

