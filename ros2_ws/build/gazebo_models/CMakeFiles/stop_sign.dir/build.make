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

# Utility rule file for stop_sign.

# Include any custom commands dependencies for this target.
include CMakeFiles/stop_sign.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/stop_sign.dir/progress.make

CMakeFiles/stop_sign:
	mkdir -p /home/felipe/ros2_ws/build/gazebo_models/stop_sign
	tar czvf /home/felipe/ros2_ws/build/gazebo_models/stop_sign/model.tar.gz ../stop_sign

stop_sign: CMakeFiles/stop_sign
stop_sign: CMakeFiles/stop_sign.dir/build.make
.PHONY : stop_sign

# Rule to build all files generated by this target.
CMakeFiles/stop_sign.dir/build: stop_sign
.PHONY : CMakeFiles/stop_sign.dir/build

CMakeFiles/stop_sign.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stop_sign.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stop_sign.dir/clean

CMakeFiles/stop_sign.dir/depend:
	cd /home/felipe/ros2_ws/build/gazebo_models && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felipe/ros2_ws/gazebo_models /home/felipe/ros2_ws/gazebo_models /home/felipe/ros2_ws/build/gazebo_models /home/felipe/ros2_ws/build/gazebo_models /home/felipe/ros2_ws/build/gazebo_models/CMakeFiles/stop_sign.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stop_sign.dir/depend

