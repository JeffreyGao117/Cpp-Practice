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
include CMakeFiles/probs1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/probs1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/probs1.dir/flags.make

CMakeFiles/probs1.dir/1-probs.cpp.obj: CMakeFiles/probs1.dir/flags.make
CMakeFiles/probs1.dir/1-probs.cpp.obj: ../1-probs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/probs1.dir/1-probs.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\probs1.dir\1-probs.cpp.obj -c "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\1-probs.cpp"

CMakeFiles/probs1.dir/1-probs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/probs1.dir/1-probs.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\1-probs.cpp" > CMakeFiles\probs1.dir\1-probs.cpp.i

CMakeFiles/probs1.dir/1-probs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/probs1.dir/1-probs.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\1-probs.cpp" -o CMakeFiles\probs1.dir\1-probs.cpp.s

# Object files for target probs1
probs1_OBJECTS = \
"CMakeFiles/probs1.dir/1-probs.cpp.obj"

# External object files for target probs1
probs1_EXTERNAL_OBJECTS =

probs1.exe: CMakeFiles/probs1.dir/1-probs.cpp.obj
probs1.exe: CMakeFiles/probs1.dir/build.make
probs1.exe: CMakeFiles/probs1.dir/linklibs.rsp
probs1.exe: CMakeFiles/probs1.dir/objects1.rsp
probs1.exe: CMakeFiles/probs1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable probs1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\probs1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/probs1.dir/build: probs1.exe

.PHONY : CMakeFiles/probs1.dir/build

CMakeFiles/probs1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\probs1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/probs1.dir/clean

CMakeFiles/probs1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug" "C:\Users\gaoje\OneDrive\Desktop\Cpp-Practice\Koenig Notes\cmake-build-debug\CMakeFiles\probs1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/probs1.dir/depend

