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
include bindings/tpython/CMakeFiles/G__ROOTTPython.dir/depend.make

# Include the progress variables for this target.
include bindings/tpython/CMakeFiles/G__ROOTTPython.dir/progress.make

# Include the compile flags for this target's objects.
include bindings/tpython/CMakeFiles/G__ROOTTPython.dir/flags.make

bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/LinkDef.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPyArg.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPyReturn.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPython.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPyArg.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPyReturn.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPython.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/LinkDef.h
bindings/tpython/G__ROOTTPython.cxx: bin/rootcling
bindings/tpython/G__ROOTTPython.cxx: lib/libCore.so
bindings/tpython/G__ROOTTPython.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__ROOTTPython.cxx, ../../lib/ROOTTPython.pcm"
	cd /content/root_src/root_build/bindings/tpython && /usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake -E env LD_LIBRARY_PATH=/content/root_src/root_build/lib:/usr/local/nvidia/lib:/usr/local/nvidia/lib64 ROOTIGNOREPREFIX=1 /content/root_src/root_build/bin/rootcling -rootbuild -v2 -f G__ROOTTPython.cxx -cxxmodule -s /content/root_src/root_build/lib/libROOTTPython.so -m Core.pcm -excludePath /content/root_src -excludePath /content/root_src/root_build/ginclude -excludePath /content/root_src/root_build/externals -excludePath /content/root_src/root_build/builtins -I/content/root_src/root_build/include -I/content/root_src/bindings/tpython/inc -I/content/root_src/core/unix/inc -I/content/root_src/core/clingutils/inc -I/content/root_src/core/textinput/inc -I/content/root_src/core/thread/inc -I/content/root_src/core/zip/inc -I/content/root_src/core/rint/inc -I/content/root_src/core/clib/inc -I/content/root_src/core/meta/inc -I/content/root_src/core/gui/inc -I/content/root_src/core/cont/inc -I/content/root_src/core/foundation/inc -I/content/root_src/core/base/inc -I/content/root_src/root_build/ginclude -I/content/root_src/bindings/tpython/inc -I/usr/include/python3.6m -I/content/root_src/bindings/pyroot/cppyy/CPyCppyy/inc -I/content/root_src/bindings/pyroot/cppyy/CPyCppyy/src -I/content/root_src/root_build/ginclude -I/content/root_src/core/base/inc -I/content/root_src/core/foundation/inc -I/content/root_src/core/cont/inc -I/content/root_src/core/gui/inc -I/content/root_src/core/meta/inc -I/content/root_src/core/clib/inc -I/content/root_src/core/rint/inc -I/content/root_src/core/zip/inc -I/content/root_src/core/thread/inc -I/content/root_src/core/textinput/inc -I/content/root_src/core/unix/inc -writeEmptyRootPCM TPyArg.h TPyReturn.h TPython.h /content/root_src/bindings/tpython/inc/LinkDef.h

lib/ROOTTPython.pcm: bindings/tpython/G__ROOTTPython.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/ROOTTPython.pcm

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o: bindings/tpython/CMakeFiles/G__ROOTTPython.dir/flags.make
bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o: bindings/tpython/G__ROOTTPython.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o"
	cd /content/root_src/root_build/bindings/tpython && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o -c /content/root_src/root_build/bindings/tpython/G__ROOTTPython.cxx

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.i"
	cd /content/root_src/root_build/bindings/tpython && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/bindings/tpython/G__ROOTTPython.cxx > CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.i

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.s"
	cd /content/root_src/root_build/bindings/tpython && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/bindings/tpython/G__ROOTTPython.cxx -o CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.s

G__ROOTTPython: bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o
G__ROOTTPython: bindings/tpython/CMakeFiles/G__ROOTTPython.dir/build.make

.PHONY : G__ROOTTPython

# Rule to build all files generated by this target.
bindings/tpython/CMakeFiles/G__ROOTTPython.dir/build: G__ROOTTPython

.PHONY : bindings/tpython/CMakeFiles/G__ROOTTPython.dir/build

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/clean:
	cd /content/root_src/root_build/bindings/tpython && $(CMAKE_COMMAND) -P CMakeFiles/G__ROOTTPython.dir/cmake_clean.cmake
.PHONY : bindings/tpython/CMakeFiles/G__ROOTTPython.dir/clean

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/depend: bindings/tpython/G__ROOTTPython.cxx
bindings/tpython/CMakeFiles/G__ROOTTPython.dir/depend: lib/ROOTTPython.pcm
	cd /content/root_src/root_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src /content/root_src/bindings/tpython /content/root_src/root_build /content/root_src/root_build/bindings/tpython /content/root_src/root_build/bindings/tpython/CMakeFiles/G__ROOTTPython.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bindings/tpython/CMakeFiles/G__ROOTTPython.dir/depend

