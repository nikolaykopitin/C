# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\CLionProjects\calc2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\CLionProjects\calc2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled7.dir/flags.make

CMakeFiles/untitled7.dir/main.c.obj: CMakeFiles/untitled7.dir/flags.make
CMakeFiles/untitled7.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\calc2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled7.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\untitled7.dir\main.c.obj   -c C:\Users\Admin\CLionProjects\calc2\main.c

CMakeFiles/untitled7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled7.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Admin\CLionProjects\calc2\main.c > CMakeFiles\untitled7.dir\main.c.i

CMakeFiles/untitled7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled7.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Admin\CLionProjects\calc2\main.c -o CMakeFiles\untitled7.dir\main.c.s

# Object files for target untitled7
untitled7_OBJECTS = \
"CMakeFiles/untitled7.dir/main.c.obj"

# External object files for target untitled7
untitled7_EXTERNAL_OBJECTS =

untitled7.exe: CMakeFiles/untitled7.dir/main.c.obj
untitled7.exe: CMakeFiles/untitled7.dir/build.make
untitled7.exe: CMakeFiles/untitled7.dir/linklibs.rsp
untitled7.exe: CMakeFiles/untitled7.dir/objects1.rsp
untitled7.exe: CMakeFiles/untitled7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\CLionProjects\calc2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable untitled7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\untitled7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled7.dir/build: untitled7.exe

.PHONY : CMakeFiles/untitled7.dir/build

CMakeFiles/untitled7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/untitled7.dir/clean

CMakeFiles/untitled7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\CLionProjects\calc2 C:\Users\Admin\CLionProjects\calc2 C:\Users\Admin\CLionProjects\calc2\cmake-build-debug C:\Users\Admin\CLionProjects\calc2\cmake-build-debug C:\Users\Admin\CLionProjects\calc2\cmake-build-debug\CMakeFiles\untitled7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled7.dir/depend

