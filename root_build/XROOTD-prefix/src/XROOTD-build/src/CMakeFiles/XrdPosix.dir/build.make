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
include src/CMakeFiles/XrdPosix.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/XrdPosix.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/XrdPosix.dir/flags.make

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixAdmin.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixAdmin.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixAdmin.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixAdmin.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixCache.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixCache.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixCache.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixCache.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixCallBack.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixCallBack.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixCallBack.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixCallBack.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixConfig.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixConfig.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixConfig.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixConfig.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixDir.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixDir.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixDir.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixDir.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixFile.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixFile.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixFile.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixFile.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixFileRH.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixFileRH.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixFileRH.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixFileRH.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixMap.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixMap.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixMap.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixMap.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixObject.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixObject.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixObject.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixObject.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixPrepIO.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixPrepIO.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixPrepIO.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixPrepIO.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixXrootd.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixXrootd.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixXrootd.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixXrootd.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.s

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.o: src/CMakeFiles/XrdPosix.dir/flags.make
src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.o: /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixXrootdPath.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.o"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.o -c /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixXrootdPath.cc

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.i"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixXrootdPath.cc > CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.i

src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.s"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src/XrdPosix/XrdPosixXrootdPath.cc -o CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.s

# Object files for target XrdPosix
XrdPosix_OBJECTS = \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.o" \
"CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.o"

# External object files for target XrdPosix
XrdPosix_EXTERNAL_OBJECTS =

src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixAdmin.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCache.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixCallBack.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixConfig.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixDir.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFile.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixFileRH.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixMap.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixObject.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixPrepIO.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootd.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/XrdPosix/XrdPosixXrootdPath.cc.o
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/build.make
src/libXrdPosix.so.2.0.0: src/XrdCl/libXrdCl.so.2.0.0
src/libXrdPosix.so.2.0.0: src/libXrdUtils.so.2.0.0
src/libXrdPosix.so.2.0.0: src/CMakeFiles/XrdPosix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX shared library libXrdPosix.so"
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/XrdPosix.dir/link.txt --verbose=$(VERBOSE)
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -E cmake_symlink_library libXrdPosix.so.2.0.0 libXrdPosix.so.2 libXrdPosix.so

src/libXrdPosix.so.2: src/libXrdPosix.so.2.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate src/libXrdPosix.so.2

src/libXrdPosix.so: src/libXrdPosix.so.2.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate src/libXrdPosix.so

# Rule to build all files generated by this target.
src/CMakeFiles/XrdPosix.dir/build: src/libXrdPosix.so

.PHONY : src/CMakeFiles/XrdPosix.dir/build

src/CMakeFiles/XrdPosix.dir/clean:
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -P CMakeFiles/XrdPosix.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/XrdPosix.dir/clean

src/CMakeFiles/XrdPosix.dir/depend:
	cd /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src/root_build/XROOTD-prefix/src/XROOTD /content/root_src/root_build/XROOTD-prefix/src/XROOTD/src /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src /content/root_src/root_build/XROOTD-prefix/src/XROOTD-build/src/CMakeFiles/XrdPosix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/XrdPosix.dir/depend

