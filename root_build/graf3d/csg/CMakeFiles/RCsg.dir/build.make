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

# Include any dependencies generated for this target.
include graf3d/csg/CMakeFiles/RCsg.dir/depend.make

# Include the progress variables for this target.
include graf3d/csg/CMakeFiles/RCsg.dir/progress.make

# Include the compile flags for this target's objects.
include graf3d/csg/CMakeFiles/RCsg.dir/flags.make

graf3d/csg/CMakeFiles/RCsg.dir/src/CsgOps.cxx.o: graf3d/csg/CMakeFiles/RCsg.dir/flags.make
graf3d/csg/CMakeFiles/RCsg.dir/src/CsgOps.cxx.o: ../graf3d/csg/src/CsgOps.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object graf3d/csg/CMakeFiles/RCsg.dir/src/CsgOps.cxx.o"
	cd /content/root_src/root_build/graf3d/csg && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RCsg.dir/src/CsgOps.cxx.o -c /content/root_src/graf3d/csg/src/CsgOps.cxx

graf3d/csg/CMakeFiles/RCsg.dir/src/CsgOps.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RCsg.dir/src/CsgOps.cxx.i"
	cd /content/root_src/root_build/graf3d/csg && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/graf3d/csg/src/CsgOps.cxx > CMakeFiles/RCsg.dir/src/CsgOps.cxx.i

graf3d/csg/CMakeFiles/RCsg.dir/src/CsgOps.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RCsg.dir/src/CsgOps.cxx.s"
	cd /content/root_src/root_build/graf3d/csg && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/graf3d/csg/src/CsgOps.cxx -o CMakeFiles/RCsg.dir/src/CsgOps.cxx.s

# Object files for target RCsg
RCsg_OBJECTS = \
"CMakeFiles/RCsg.dir/src/CsgOps.cxx.o"

# External object files for target RCsg
RCsg_EXTERNAL_OBJECTS = \
"/content/root_src/root_build/graf3d/csg/CMakeFiles/G__RCsg.dir/G__RCsg.cxx.o"

lib/libRCsg.so: graf3d/csg/CMakeFiles/RCsg.dir/src/CsgOps.cxx.o
lib/libRCsg.so: graf3d/csg/CMakeFiles/G__RCsg.dir/G__RCsg.cxx.o
lib/libRCsg.so: graf3d/csg/CMakeFiles/RCsg.dir/build.make
lib/libRCsg.so: lib/libMathCore.so
lib/libRCsg.so: lib/libImt.so
lib/libRCsg.so: lib/libCore.so
lib/libRCsg.so: graf3d/csg/CMakeFiles/RCsg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../lib/libRCsg.so"
	cd /content/root_src/root_build/graf3d/csg && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RCsg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
graf3d/csg/CMakeFiles/RCsg.dir/build: lib/libRCsg.so

.PHONY : graf3d/csg/CMakeFiles/RCsg.dir/build

graf3d/csg/CMakeFiles/RCsg.dir/clean:
	cd /content/root_src/root_build/graf3d/csg && $(CMAKE_COMMAND) -P CMakeFiles/RCsg.dir/cmake_clean.cmake
.PHONY : graf3d/csg/CMakeFiles/RCsg.dir/clean

graf3d/csg/CMakeFiles/RCsg.dir/depend:
	cd /content/root_src/root_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src /content/root_src/graf3d/csg /content/root_src/root_build /content/root_src/root_build/graf3d/csg /content/root_src/root_build/graf3d/csg/CMakeFiles/RCsg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graf3d/csg/CMakeFiles/RCsg.dir/depend

