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
include interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/attributes.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/attributes.c.o: ../interpreter/llvm/src/tools/llvm-c-test/attributes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/attributes.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/attributes.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/attributes.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/attributes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/attributes.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/attributes.c > CMakeFiles/llvm-c-test.dir/attributes.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/attributes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/attributes.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/attributes.c -o CMakeFiles/llvm-c-test.dir/attributes.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/calc.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/calc.c.o: ../interpreter/llvm/src/tools/llvm-c-test/calc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/calc.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/calc.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/calc.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/calc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/calc.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/calc.c > CMakeFiles/llvm-c-test.dir/calc.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/calc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/calc.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/calc.c -o CMakeFiles/llvm-c-test.dir/calc.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/diagnostic.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/diagnostic.c.o: ../interpreter/llvm/src/tools/llvm-c-test/diagnostic.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/diagnostic.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/diagnostic.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/diagnostic.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/diagnostic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/diagnostic.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/diagnostic.c > CMakeFiles/llvm-c-test.dir/diagnostic.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/diagnostic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/diagnostic.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/diagnostic.c -o CMakeFiles/llvm-c-test.dir/diagnostic.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/disassemble.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/disassemble.c.o: ../interpreter/llvm/src/tools/llvm-c-test/disassemble.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/disassemble.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/disassemble.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/disassemble.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/disassemble.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/disassemble.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/disassemble.c > CMakeFiles/llvm-c-test.dir/disassemble.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/disassemble.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/disassemble.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/disassemble.c -o CMakeFiles/llvm-c-test.dir/disassemble.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/echo.cpp.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/echo.cpp.o: ../interpreter/llvm/src/tools/llvm-c-test/echo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/echo.cpp.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -fno-exceptions -fno-rtti -o CMakeFiles/llvm-c-test.dir/echo.cpp.o -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/echo.cpp

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/echo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-c-test.dir/echo.cpp.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -fno-exceptions -fno-rtti -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/echo.cpp > CMakeFiles/llvm-c-test.dir/echo.cpp.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/echo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-c-test.dir/echo.cpp.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -fno-exceptions -fno-rtti -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/echo.cpp -o CMakeFiles/llvm-c-test.dir/echo.cpp.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/helpers.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/helpers.c.o: ../interpreter/llvm/src/tools/llvm-c-test/helpers.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/helpers.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/helpers.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/helpers.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/helpers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/helpers.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/helpers.c > CMakeFiles/llvm-c-test.dir/helpers.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/helpers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/helpers.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/helpers.c -o CMakeFiles/llvm-c-test.dir/helpers.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/include-all.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/include-all.c.o: ../interpreter/llvm/src/tools/llvm-c-test/include-all.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/include-all.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/include-all.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/include-all.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/include-all.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/include-all.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/include-all.c > CMakeFiles/llvm-c-test.dir/include-all.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/include-all.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/include-all.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/include-all.c -o CMakeFiles/llvm-c-test.dir/include-all.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/main.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/main.c.o: ../interpreter/llvm/src/tools/llvm-c-test/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/main.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/main.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/main.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/main.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/main.c > CMakeFiles/llvm-c-test.dir/main.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/main.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/main.c -o CMakeFiles/llvm-c-test.dir/main.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/module.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/module.c.o: ../interpreter/llvm/src/tools/llvm-c-test/module.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/module.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/module.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/module.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/module.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/module.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/module.c > CMakeFiles/llvm-c-test.dir/module.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/module.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/module.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/module.c -o CMakeFiles/llvm-c-test.dir/module.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/metadata.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/metadata.c.o: ../interpreter/llvm/src/tools/llvm-c-test/metadata.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/metadata.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/metadata.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/metadata.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/metadata.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/metadata.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/metadata.c > CMakeFiles/llvm-c-test.dir/metadata.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/metadata.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/metadata.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/metadata.c -o CMakeFiles/llvm-c-test.dir/metadata.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/object.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/object.c.o: ../interpreter/llvm/src/tools/llvm-c-test/object.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/object.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/object.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/object.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/object.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/object.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/object.c > CMakeFiles/llvm-c-test.dir/object.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/object.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/object.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/object.c -o CMakeFiles/llvm-c-test.dir/object.c.s

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/targets.c.o: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/flags.make
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/targets.c.o: ../interpreter/llvm/src/tools/llvm-c-test/targets.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/targets.c.o"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/llvm-c-test.dir/targets.c.o   -c /content/root_src/interpreter/llvm/src/tools/llvm-c-test/targets.c

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/targets.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/llvm-c-test.dir/targets.c.i"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /content/root_src/interpreter/llvm/src/tools/llvm-c-test/targets.c > CMakeFiles/llvm-c-test.dir/targets.c.i

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/targets.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/llvm-c-test.dir/targets.c.s"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /content/root_src/interpreter/llvm/src/tools/llvm-c-test/targets.c -o CMakeFiles/llvm-c-test.dir/targets.c.s

# Object files for target llvm-c-test
llvm__c__test_OBJECTS = \
"CMakeFiles/llvm-c-test.dir/attributes.c.o" \
"CMakeFiles/llvm-c-test.dir/calc.c.o" \
"CMakeFiles/llvm-c-test.dir/diagnostic.c.o" \
"CMakeFiles/llvm-c-test.dir/disassemble.c.o" \
"CMakeFiles/llvm-c-test.dir/echo.cpp.o" \
"CMakeFiles/llvm-c-test.dir/helpers.c.o" \
"CMakeFiles/llvm-c-test.dir/include-all.c.o" \
"CMakeFiles/llvm-c-test.dir/main.c.o" \
"CMakeFiles/llvm-c-test.dir/module.c.o" \
"CMakeFiles/llvm-c-test.dir/metadata.c.o" \
"CMakeFiles/llvm-c-test.dir/object.c.o" \
"CMakeFiles/llvm-c-test.dir/targets.c.o"

# External object files for target llvm-c-test
llvm__c__test_EXTERNAL_OBJECTS =

interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/attributes.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/calc.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/diagnostic.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/disassemble.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/echo.cpp.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/helpers.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/include-all.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/main.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/module.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/metadata.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/object.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/targets.c.o
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/build.make
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86CodeGen.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86AsmPrinter.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86AsmParser.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86Desc.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86Info.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86Disassembler.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86Info.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86Utils.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMNVPTXCodeGen.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMNVPTXAsmPrinter.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMNVPTXDesc.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMNVPTXInfo.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMNVPTXInfo.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMBitReader.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMCore.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMMCDisassembler.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMObject.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMTarget.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMGlobalISel.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86AsmPrinter.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMX86Utils.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMNVPTXAsmPrinter.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMAsmPrinter.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMDebugInfoCodeView.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMDebugInfoMSF.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMSelectionDAG.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMCodeGen.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMTarget.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMipo.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMScalarOpts.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMVectorize.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMBitWriter.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMInstCombine.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMIRReader.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMAsmParser.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMInstrumentation.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMLinker.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMTransformUtils.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMAnalysis.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMObject.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMBitReader.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMMCParser.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMMC.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMProfileData.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMCore.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMBinaryFormat.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/llvm-c-test: /usr/lib/x86_64-linux-gnu/libz.so
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/lib/libLLVMDemangle.a
interpreter/llvm/src/bin/llvm-c-test: interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/content/root_src/root_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable ../../bin/llvm-c-test"
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-c-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/build: interpreter/llvm/src/bin/llvm-c-test

.PHONY : interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/build

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/clean:
	cd /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test && $(CMAKE_COMMAND) -P CMakeFiles/llvm-c-test.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/clean

interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/depend:
	cd /content/root_src/root_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /content/root_src /content/root_src/interpreter/llvm/src/tools/llvm-c-test /content/root_src/root_build /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test /content/root_src/root_build/interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/llvm-c-test/CMakeFiles/llvm-c-test.dir/depend

