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
include math/splot/CMakeFiles/SPlot.dir/depend.make

# Include the progress variables for this target.
include math/splot/CMakeFiles/SPlot.dir/progress.make

# Include the compile flags for this target's objects.
include math/splot/CMakeFiles/SPlot.dir/flags.make

math/splot/CMakeFiles/SPlot.dir/src/TSPlot.cxx.o: math/splot/CMakeFiles/SPlot.dir/flags.make
math/splot/CMakeFiles/SPlot.dir/src/TSPlot.cxx.o: ../math/splot/src/TSPlot.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object math/splot/CMakeFiles/SPlot.dir/src/TSPlot.cxx.o"
	cd /content/root_src/root_build/math/splot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SPlot.dir/src/TSPlot.cxx.o -c /content/root_src/math/splot/src/TSPlot.cxx

math/splot/CMakeFiles/SPlot.dir/src/TSPlot.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SPlot.dir/src/TSPlot.cxx.i"
	cd /content/root_src/root_build/math/splot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/math/splot/src/TSPlot.cxx > CMakeFiles/SPlot.dir/src/TSPlot.cxx.i

math/splot/CMakeFiles/SPlot.dir/src/TSPlot.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SPlot.dir/src/TSPlot.cxx.s"
	cd /content/root_src/root_build/math/splot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/math/splot/src/TSPlot.cxx -o CMakeFiles/SPlot.dir/src/TSPlot.cxx.s

# Object files for target SPlot
SPlot_OBJECTS = \
"CMakeFiles/SPlot.dir/src/TSPlot.cxx.o"

# External object files for target SPlot
SPlot_EXTERNAL_OBJECTS = \
"/content/root_src/root_build/math/splot/CMakeFiles/G__SPlot.dir/G__SPlot.cxx.o"

lib/libSPlot.so: math/splot/CMakeFiles/SPlot.dir/src/TSPlot.cxx.o
lib/libSPlot.so: math/splot/CMakeFiles/G__SPlot.dir/G__SPlot.cxx.o
lib/libSPlot.so: math/splot/CMakeFiles/SPlot.dir/build.make
lib/libSPlot.so: lib/libTreePlayer.so
lib/libSPlot.so: lib/libGraf3d.so
lib/libSPlot.so: lib/libTree.so
lib/libSPlot.so: lib/libGpad.so
lib/libSPlot.so: lib/libGraf.so
lib/libSPlot.so: lib/libHist.so
lib/libSPlot.so: lib/libMatrix.so
lib/libSPlot.so: lib/libMathCore.so
lib/libSPlot.so: lib/libImt.so
lib/libSPlot.so: lib/libMultiProc.so
lib/libSPlot.so: lib/libNet.so
lib/libSPlot.so: lib/libRIO.so
lib/libSPlot.so: lib/libThread.so
lib/libSPlot.so: lib/libCore.so
lib/libSPlot.so: math/splot/CMakeFiles/SPlot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../lib/libSPlot.so"
	cd /content/root_src/root_build/math/splot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SPlot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
math/splot/CMakeFiles/SPlot.dir/build: lib/libSPlot.so

.PHONY : math/splot/CMakeFiles/SPlot.dir/build

math/splot/CMakeFiles/SPlot.dir/clean:
	cd /content/root_src/root_build/math/splot && $(CMAKE_COMMAND) -P CMakeFiles/SPlot.dir/cmake_clean.cmake
.PHONY : math/splot/CMakeFiles/SPlot.dir/clean

math/splot/CMakeFiles/SPlot.dir/depend:
	cd /content/root_src/root_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src /content/root_src/math/splot /content/root_src/root_build /content/root_src/root_build/math/splot /content/root_src/root_build/math/splot/CMakeFiles/SPlot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/splot/CMakeFiles/SPlot.dir/depend

