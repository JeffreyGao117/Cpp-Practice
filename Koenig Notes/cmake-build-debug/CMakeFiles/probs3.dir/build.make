# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/probs3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/probs3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/probs3.dir/flags.make

CMakeFiles/probs3.dir/3-probs.cpp.obj: CMakeFiles/probs3.dir/flags.make
CMakeFiles/probs3.dir/3-probs.cpp.obj: ../3-probs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/probs3.dir/3-probs.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\probs3.dir\3-probs.cpp.obj -c "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\3-probs.cpp"

CMakeFiles/probs3.dir/3-probs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/probs3.dir/3-probs.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\3-probs.cpp" > CMakeFiles\probs3.dir\3-probs.cpp.i

CMakeFiles/probs3.dir/3-probs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/probs3.dir/3-probs.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\3-probs.cpp" -o CMakeFiles\probs3.dir\3-probs.cpp.s

# Object files for target probs3
probs3_OBJECTS = \
"CMakeFiles/probs3.dir/3-probs.cpp.obj"

# External object files for target probs3
probs3_EXTERNAL_OBJECTS =

probs3.exe: CMakeFiles/probs3.dir/3-probs.cpp.obj
probs3.exe: CMakeFiles/probs3.dir/build.make
probs3.exe: CMakeFiles/probs3.dir/linklibs.rsp
probs3.exe: CMakeFiles/probs3.dir/objects1.rsp
probs3.exe: CMakeFiles/probs3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable probs3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\probs3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/probs3.dir/build: probs3.exe

.PHONY : CMakeFiles/probs3.dir/build

CMakeFiles/probs3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\probs3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/probs3.dir/clean

CMakeFiles/probs3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug\CMakeFiles\probs3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/probs3.dir/depend

