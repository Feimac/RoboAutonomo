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

# Utility rule file for apartment.

# Include any custom commands dependencies for this target.
include CMakeFiles/apartment.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/apartment.dir/progress.make

CMakeFiles/apartment:
	mkdir -p /home/felipe/ros2_ws/build/gazebo_models/apartment
	tar czvf /home/felipe/ros2_ws/build/gazebo_models/apartment/model.tar.gz ../apartment

apartment: CMakeFiles/apartment
apartment: CMakeFiles/apartment.dir/build.make
.PHONY : apartment

# Rule to build all files generated by this target.
CMakeFiles/apartment.dir/build: apartment
.PHONY : CMakeFiles/apartment.dir/build

CMakeFiles/apartment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/apartment.dir/cmake_clean.cmake
.PHONY : CMakeFiles/apartment.dir/clean

CMakeFiles/apartment.dir/depend:
	cd /home/felipe/ros2_ws/build/gazebo_models && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felipe/ros2_ws/gazebo_models /home/felipe/ros2_ws/gazebo_models /home/felipe/ros2_ws/build/gazebo_models /home/felipe/ros2_ws/build/gazebo_models /home/felipe/ros2_ws/build/gazebo_models/CMakeFiles/apartment.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/apartment.dir/depend

