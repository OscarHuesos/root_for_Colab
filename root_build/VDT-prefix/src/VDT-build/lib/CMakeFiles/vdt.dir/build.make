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
CMAKE_SOURCE_DIR = /content/root_src/root_build/VDT-prefix/src/VDT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /content/root_src/root_build/VDT-prefix/src/VDT-build

# Include any dependencies generated for this target.
include lib/CMakeFiles/vdt.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/vdt.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/vdt.dir/flags.make

lib/CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.o: lib/CMakeFiles/vdt.dir/flags.make
lib/CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.o: /content/root_src/root_build/VDT-prefix/src/VDT/src/vdtMath_signatures.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/VDT-prefix/src/VDT-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.o"
	cd /content/root_src/root_build/VDT-prefix/src/VDT-build/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.o -c /content/root_src/root_build/VDT-prefix/src/VDT/src/vdtMath_signatures.cc

lib/CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.i"
	cd /content/root_src/root_build/VDT-prefix/src/VDT-build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/VDT-prefix/src/VDT/src/vdtMath_signatures.cc > CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.i

lib/CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.s"
	cd /content/root_src/root_build/VDT-prefix/src/VDT-build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/VDT-prefix/src/VDT/src/vdtMath_signatures.cc -o CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.s

# Object files for target vdt
vdt_OBJECTS = \
"CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.o"

# External object files for target vdt
vdt_EXTERNAL_OBJECTS =

lib/libvdt.so: lib/CMakeFiles/vdt.dir/__/src/vdtMath_signatures.cc.o
lib/libvdt.so: lib/CMakeFiles/vdt.dir/build.make
lib/libvdt.so: lib/CMakeFiles/vdt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/content/root_src/root_build/VDT-prefix/src/VDT-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libvdt.so"
	cd /content/root_src/root_build/VDT-prefix/src/VDT-build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vdt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/vdt.dir/build: lib/libvdt.so

.PHONY : lib/CMakeFiles/vdt.dir/build

lib/CMakeFiles/vdt.dir/clean:
	cd /content/root_src/root_build/VDT-prefix/src/VDT-build/lib && $(CMAKE_COMMAND) -P CMakeFiles/vdt.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/vdt.dir/clean

lib/CMakeFiles/vdt.dir/depend:
	cd /content/root_src/root_build/VDT-prefix/src/VDT-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src/root_build/VDT-prefix/src/VDT /content/root_src/root_build/VDT-prefix/src/VDT/lib /content/root_src/root_build/VDT-prefix/src/VDT-build /content/root_src/root_build/VDT-prefix/src/VDT-build/lib /content/root_src/root_build/VDT-prefix/src/VDT-build/lib/CMakeFiles/vdt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/vdt.dir/depend
