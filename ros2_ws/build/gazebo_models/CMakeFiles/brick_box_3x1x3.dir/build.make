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

# Utility rule file for brick_box_3x1x3.

# Include any custom commands dependencies for this target.
include CMakeFiles/brick_box_3x1x3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/brick_box_3x1x3.dir/progress.make

CMakeFiles/brick_box_3x1x3:
	mkdir -p /home/felipe/ros2_ws/build/gazebo_models/brick_box_3x1x3
	tar czvf /home/felipe/ros2_ws/build/gazebo_models/brick_box_3x1x3/model.tar.gz ../brick_box_3x1x3

brick_box_3x1x3: CMakeFiles/brick_box_3x1x3
brick_box_3x1x3: CMakeFiles/brick_box_3x1x3.dir/build.make
.PHONY : brick_box_3x1x3

# Rule to build all files generated by this target.
CMakeFiles/brick_box_3x1x3.dir/build: brick_box_3x1x3
.PHONY : CMakeFiles/brick_box_3x1x3.dir/build

CMakeFiles/brick_box_3x1x3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/brick_box_3x1x3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/brick_box_3x1x3.dir/clean

CMakeFiles/brick_box_3x1x3.dir/depend:
	cd /home/felipe/ros2_ws/build/gazebo_models && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felipe/ros2_ws/gazebo_models /home/felipe/ros2_ws/gazebo_models /home/felipe/ros2_ws/build/gazebo_models /home/felipe/ros2_ws/build/gazebo_models /home/felipe/ros2_ws/build/gazebo_models/CMakeFiles/brick_box_3x1x3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/brick_box_3x1x3.dir/depend

