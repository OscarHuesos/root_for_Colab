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
CMAKE_SOURCE_DIR = /content/root_src/root_build/XROOTD-prefix/src/XROOTD

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build

# Include any dependencies generated for this target.
include src/CMakeFiles/xrdstagetool.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/xrdstagetool.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/xrdstagetool.dir/flags.make

src/CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.o: src/CMakeFiles/xrdstagetool.dir/flags.make
src/CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdClient/XrdStageTool.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdClient/XrdStageTool.cc

src/CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdClient/XrdStageTool.cc > CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.i

src/CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdClient/XrdStageTool.cc -o CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.s

# Object files for target xrdstagetool
xrdstagetool_OBJECTS = \
"CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.o"

# External object files for target xrdstagetool
xrdstagetool_EXTERNAL_OBJECTS =

src/xrdstagetool: src/CMakeFiles/xrdstagetool.dir/XrdClient/XrdStageTool.cc.o
src/xrdstagetool: src/CMakeFiles/xrdstagetool.dir/build.make
src/xrdstagetool: src/libXrdClient.so.2.0.0
src/xrdstagetool: src/libXrdUtils.so.2.0.0
src/xrdstagetool: src/CMakeFiles/xrdstagetool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable xrdstagetool"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xrdstagetool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/xrdstagetool.dir/build: src/xrdstagetool

.PHONY : src/CMakeFiles/xrdstagetool.dir/build

src/CMakeFiles/xrdstagetool.dir/clean:
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -P CMakeFiles/xrdstagetool.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/xrdstagetool.dir/clean

src/CMakeFiles/xrdstagetool.dir/depend:
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src/root_build/XROOTD-prefix/src/XROOTD /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src/CMakeFiles/xrdstagetool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/xrdstagetool.dir/depend

