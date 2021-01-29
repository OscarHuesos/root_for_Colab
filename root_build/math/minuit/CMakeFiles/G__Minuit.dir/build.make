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
include math/minuit/CMakeFiles/G__Minuit.dir/depend.make

# Include the progress variables for this target.
include math/minuit/CMakeFiles/G__Minuit.dir/progress.make

# Include the compile flags for this target's objects.
include math/minuit/CMakeFiles/G__Minuit.dir/flags.make

math/minuit/G__Minuit.cxx: ../math/minuit/inc/LinkDef.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TFitter.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TLinearFitter.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TLinearMinimizer.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TMinuit.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TMinuitMinimizer.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TFitter.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TLinearFitter.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TLinearMinimizer.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TMinuit.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/TMinuitMinimizer.h
math/minuit/G__Minuit.cxx: ../math/minuit/inc/LinkDef.h
math/minuit/G__Minuit.cxx: bin/rootcling
math/minuit/G__Minuit.cxx: lib/libGraf.so
math/minuit/G__Minuit.cxx: lib/libHist.so
math/minuit/G__Minuit.cxx: lib/libMatrix.so
math/minuit/G__Minuit.cxx: lib/libMathCore.so
math/minuit/G__Minuit.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Minuit.cxx, ../../lib/Minuit.pcm"
	cd /content/root_src/root_build/math/minuit && /usr/local/lib/python2.7/dist-packages/cmake/data/bin/cmake -E env LD_LIBRARY_PATH=/content/root_src/root_build/lib:/usr/local/nvidia/lib:/usr/local/nvidia/lib64 ROOTIGNOREPREFIX=1 /content/root_src/root_build/bin/rootcling -rootbuild -v2 -f G__Minuit.cxx -cxxmodule -s /content/root_src/root_build/lib/libMinuit.so -m Graf.pcm -m Hist.pcm -m Matrix.pcm -m MathCore.pcm -excludePath /content/root_src -excludePath /content/root_src/root_build/ginclude -excludePath /content/root_src/root_build/externals -excludePath /content/root_src/root_build/builtins -I/content/root_src/root_build/include -I/content/root_src/math/minuit/inc -I/content/root_src/core/unix/inc -I/content/root_src/core/clingutils/inc -I/content/root_src/core/textinput/inc -I/content/root_src/core/thread/inc -I/content/root_src/core/zip/inc -I/content/root_src/core/rint/inc -I/content/root_src/core/clib/inc -I/content/root_src/core/meta/inc -I/content/root_src/core/gui/inc -I/content/root_src/core/cont/inc -I/content/root_src/core/foundation/inc -I/content/root_src/core/base/inc -I/content/root_src/root_build/ginclude -I/content/root_src/math/minuit/inc -I/content/root_src/math/matrix/inc -I/content/root_src/core/unix/inc -I/content/root_src/core/clingutils/inc -I/content/root_src/core/textinput/inc -I/content/root_src/core/thread/inc -I/content/root_src/core/zip/inc -I/content/root_src/core/rint/inc -I/content/root_src/core/clib/inc -I/content/root_src/core/meta/inc -I/content/root_src/core/gui/inc -I/content/root_src/core/cont/inc -I/content/root_src/core/foundation/inc -I/content/root_src/core/base/inc -I/content/root_src/root_build/ginclude -I/content/root_src/math/mathcore/inc -I/content/root_src/math/mathcore/v7/inc -I/content/root_src/core/imt/inc -I/content/root_src/graf2d/graf/inc -I/content/root_src/hist/hist/inc -I/content/root_src/math/mathcore/inc -I/content/root_src/root_build/ginclude -I/content/root_src/core/base/inc -I/content/root_src/core/foundation/inc -I/content/root_src/core/cont/inc -I/content/root_src/core/gui/inc -I/content/root_src/core/meta/inc -I/content/root_src/core/clib/inc -I/content/root_src/core/rint/inc -I/content/root_src/core/zip/inc -I/content/root_src/core/thread/inc -I/content/root_src/core/textinput/inc -I/content/root_src/core/unix/inc -I/content/root_src/core/imt/inc -I/content/root_src/math/matrix/inc -I/content/root_src/io/io/inc -I/content/root_src/core/thread/inc -writeEmptyRootPCM TFitter.h TLinearFitter.h TLinearMinimizer.h TMinuit.h TMinuitMinimizer.h /content/root_src/math/minuit/inc/LinkDef.h

lib/Minuit.pcm: math/minuit/G__Minuit.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/Minuit.pcm

math/minuit/CMakeFiles/G__Minuit.dir/G__Minuit.cxx.o: math/minuit/CMakeFiles/G__Minuit.dir/flags.make
math/minuit/CMakeFiles/G__Minuit.dir/G__Minuit.cxx.o: math/minuit/G__Minuit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object math/minuit/CMakeFiles/G__Minuit.dir/G__Minuit.cxx.o"
	cd /content/root_src/root_build/math/minuit && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__Minuit.dir/G__Minuit.cxx.o -c /content/root_src/root_build/math/minuit/G__Minuit.cxx

math/minuit/CMakeFiles/G__Minuit.dir/G__Minuit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__Minuit.dir/G__Minuit.cxx.i"
	cd /content/root_src/root_build/math/minuit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/math/minuit/G__Minuit.cxx > CMakeFiles/G__Minuit.dir/G__Minuit.cxx.i

math/minuit/CMakeFiles/G__Minuit.dir/G__Minuit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__Minuit.dir/G__Minuit.cxx.s"
	cd /content/root_src/root_build/math/minuit && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/math/minuit/G__Minuit.cxx -o CMakeFiles/G__Minuit.dir/G__Minuit.cxx.s

G__Minuit: math/minuit/CMakeFiles/G__Minuit.dir/G__Minuit.cxx.o
G__Minuit: math/minuit/CMakeFiles/G__Minuit.dir/build.make

.PHONY : G__Minuit

# Rule to build all files generated by this target.
math/minuit/CMakeFiles/G__Minuit.dir/build: G__Minuit

.PHONY : math/minuit/CMakeFiles/G__Minuit.dir/build

math/minuit/CMakeFiles/G__Minuit.dir/clean:
	cd /content/root_src/root_build/math/minuit && $(CMAKE_COMMAND) -P CMakeFiles/G__Minuit.dir/cmake_clean.cmake
.PHONY : math/minuit/CMakeFiles/G__Minuit.dir/clean

math/minuit/CMakeFiles/G__Minuit.dir/depend: math/minuit/G__Minuit.cxx
math/minuit/CMakeFiles/G__Minuit.dir/depend: lib/Minuit.pcm
	cd /content/root_src/root_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src /content/root_src/math/minuit /content/root_src/root_build /content/root_src/root_build/math/minuit /content/root_src/root_build/math/minuit/CMakeFiles/G__Minuit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/minuit/CMakeFiles/G__Minuit.dir/depend

