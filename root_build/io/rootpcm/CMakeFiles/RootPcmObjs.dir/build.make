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
include io/rootpcm/CMakeFiles/RootPcmObjs.dir/depend.make

# Include the progress variables for this target.
include io/rootpcm/CMakeFiles/RootPcmObjs.dir/progress.make

# Include the compile flags for this target's objects.
include io/rootpcm/CMakeFiles/RootPcmObjs.dir/flags.make

io/rootpcm/CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.o: io/rootpcm/CMakeFiles/RootPcmObjs.dir/flags.make
io/rootpcm/CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.o: ../io/rootpcm/src/rootclingIO.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object io/rootpcm/CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.o"
	cd /content/root_src/root_build/io/rootpcm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.o -c /content/root_src/io/rootpcm/src/rootclingIO.cxx

io/rootpcm/CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.i"
	cd /content/root_src/root_build/io/rootpcm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/io/rootpcm/src/rootclingIO.cxx > CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.i

io/rootpcm/CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.s"
	cd /content/root_src/root_build/io/rootpcm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/io/rootpcm/src/rootclingIO.cxx -o CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.s

RootPcmObjs: io/rootpcm/CMakeFiles/RootPcmObjs.dir/src/rootclingIO.cxx.o
RootPcmObjs: io/rootpcm/CMakeFiles/RootPcmObjs.dir/build.make

.PHONY : RootPcmObjs

# Rule to build all files generated by this target.
io/rootpcm/CMakeFiles/RootPcmObjs.dir/build: RootPcmObjs

.PHONY : io/rootpcm/CMakeFiles/RootPcmObjs.dir/build

io/rootpcm/CMakeFiles/RootPcmObjs.dir/clean:
	cd /content/root_src/root_build/io/rootpcm && $(CMAKE_COMMAND) -P CMakeFiles/RootPcmObjs.dir/cmake_clean.cmake
.PHONY : io/rootpcm/CMakeFiles/RootPcmObjs.dir/clean

io/rootpcm/CMakeFiles/RootPcmObjs.dir/depend:
	cd /content/root_src/root_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src /content/root_src/io/rootpcm /content/root_src/root_build /content/root_src/root_build/io/rootpcm /content/root_src/root_build/io/rootpcm/CMakeFiles/RootPcmObjs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : io/rootpcm/CMakeFiles/RootPcmObjs.dir/depend

