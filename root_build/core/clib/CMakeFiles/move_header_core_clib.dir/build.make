# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /content/root_src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /content/root_src/root_build

# Utility rule file for move_header_core_clib.

# Include the progress variables for this target.
include core/clib/CMakeFiles/move_header_core_clib.dir/progress.make

core/clib/CMakeFiles/move_header_core_clib: include/snprintf.h
core/clib/CMakeFiles/move_header_core_clib: include/strlcpy.h


include/snprintf.h: ../core/clib/inc/snprintf.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /content/root_src/core/clib/inc/snprintf.h to /content/root_src/root_build/include"
	cd /content/root_src/root_build/core/clib && /usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake -E copy /content/root_src/core/clib/inc/snprintf.h /content/root_src/root_build/include/snprintf.h

include/strlcpy.h: ../core/clib/inc/strlcpy.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /content/root_src/core/clib/inc/strlcpy.h to /content/root_src/root_build/include"
	cd /content/root_src/root_build/core/clib && /usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake -E copy /content/root_src/core/clib/inc/strlcpy.h /content/root_src/root_build/include/strlcpy.h

move_header_core_clib: core/clib/CMakeFiles/move_header_core_clib
move_header_core_clib: include/snprintf.h
move_header_core_clib: include/strlcpy.h
move_header_core_clib: core/clib/CMakeFiles/move_header_core_clib.dir/build.make

.PHONY : move_header_core_clib

# Rule to build all files generated by this target.
core/clib/CMakeFiles/move_header_core_clib.dir/build: move_header_core_clib

.PHONY : core/clib/CMakeFiles/move_header_core_clib.dir/build

core/clib/CMakeFiles/move_header_core_clib.dir/clean:
	cd /content/root_src/root_build/core/clib && $(CMAKE_COMMAND) -P CMakeFiles/move_header_core_clib.dir/cmake_clean.cmake
.PHONY : core/clib/CMakeFiles/move_header_core_clib.dir/clean

core/clib/CMakeFiles/move_header_core_clib.dir/depend:
	cd /content/root_src/root_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src /content/root_src/core/clib /content/root_src/root_build /content/root_src/root_build/core/clib /content/root_src/root_build/core/clib/CMakeFiles/move_header_core_clib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/clib/CMakeFiles/move_header_core_clib.dir/depend

