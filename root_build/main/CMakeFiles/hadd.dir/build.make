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
include main/CMakeFiles/hadd.dir/depend.make

# Include the progress variables for this target.
include main/CMakeFiles/hadd.dir/progress.make

# Include the compile flags for this target's objects.
include main/CMakeFiles/hadd.dir/flags.make

ginclude/haddCommandLineOptionsHelp.h: ../build/misc/argparse2help.py
ginclude/haddCommandLineOptionsHelp.h: ../main/src/hadd-argparse.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../ginclude/haddCommandLineOptionsHelp.h"
	cd /content/root_src/root_build/main && /usr/bin/python3.6 -B /content/root_src/build/misc/argparse2help.py /content/root_src/main/src/hadd-argparse.py /content/root_src/root_build/ginclude/haddCommandLineOptionsHelp.h

main/CMakeFiles/hadd.dir/src/hadd.cxx.o: main/CMakeFiles/hadd.dir/flags.make
main/CMakeFiles/hadd.dir/src/hadd.cxx.o: ../main/src/hadd.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object main/CMakeFiles/hadd.dir/src/hadd.cxx.o"
	cd /content/root_src/root_build/main && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hadd.dir/src/hadd.cxx.o -c /content/root_src/main/src/hadd.cxx

main/CMakeFiles/hadd.dir/src/hadd.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hadd.dir/src/hadd.cxx.i"
	cd /content/root_src/root_build/main && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/main/src/hadd.cxx > CMakeFiles/hadd.dir/src/hadd.cxx.i

main/CMakeFiles/hadd.dir/src/hadd.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hadd.dir/src/hadd.cxx.s"
	cd /content/root_src/root_build/main && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/main/src/hadd.cxx -o CMakeFiles/hadd.dir/src/hadd.cxx.s

# Object files for target hadd
hadd_OBJECTS = \
"CMakeFiles/hadd.dir/src/hadd.cxx.o"

# External object files for target hadd
hadd_EXTERNAL_OBJECTS =

bin/hadd: main/CMakeFiles/hadd.dir/src/hadd.cxx.o
bin/hadd: main/CMakeFiles/hadd.dir/build.make
bin/hadd: lib/libGraf3d.so
bin/hadd: lib/libGpad.so
bin/hadd: lib/libTree.so
bin/hadd: lib/libMultiProc.so
bin/hadd: lib/libGraf.so
bin/hadd: lib/libHist.so
bin/hadd: lib/libMatrix.so
bin/hadd: lib/libMathCore.so
bin/hadd: lib/libImt.so
bin/hadd: lib/libNet.so
bin/hadd: lib/libRIO.so
bin/hadd: lib/libThread.so
bin/hadd: lib/libCore.so
bin/hadd: main/CMakeFiles/hadd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/hadd"
	cd /content/root_src/root_build/main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hadd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
main/CMakeFiles/hadd.dir/build: bin/hadd

.PHONY : main/CMakeFiles/hadd.dir/build

main/CMakeFiles/hadd.dir/clean:
	cd /content/root_src/root_build/main && $(CMAKE_COMMAND) -P CMakeFiles/hadd.dir/cmake_clean.cmake
.PHONY : main/CMakeFiles/hadd.dir/clean

main/CMakeFiles/hadd.dir/depend: ginclude/haddCommandLineOptionsHelp.h
	cd /content/root_src/root_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src /content/root_src/main /content/root_src/root_build /content/root_src/root_build/main /content/root_src/root_build/main/CMakeFiles/hadd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : main/CMakeFiles/hadd.dir/depend

