# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sc18jt/CLionProjects/cw2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sc18jt/CLionProjects/cw2

# Utility rule file for cw2_autogen.

# Include the progress variables for this target.
include CMakeFiles/cw2_autogen.dir/progress.make

CMakeFiles/cw2_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sc18jt/CLionProjects/cw2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target cw2"
	/usr/local/bin/cmake -E cmake_autogen /home/sc18jt/CLionProjects/cw2/CMakeFiles/cw2_autogen.dir/AutogenInfo.json ""

cw2_autogen: CMakeFiles/cw2_autogen
cw2_autogen: CMakeFiles/cw2_autogen.dir/build.make

.PHONY : cw2_autogen

# Rule to build all files generated by this target.
CMakeFiles/cw2_autogen.dir/build: cw2_autogen

.PHONY : CMakeFiles/cw2_autogen.dir/build

CMakeFiles/cw2_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cw2_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cw2_autogen.dir/clean

CMakeFiles/cw2_autogen.dir/depend:
	cd /home/sc18jt/CLionProjects/cw2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sc18jt/CLionProjects/cw2 /home/sc18jt/CLionProjects/cw2 /home/sc18jt/CLionProjects/cw2 /home/sc18jt/CLionProjects/cw2 /home/sc18jt/CLionProjects/cw2/CMakeFiles/cw2_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cw2_autogen.dir/depend

