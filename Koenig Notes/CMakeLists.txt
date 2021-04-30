cmake_minimum_required(VERSION 3.13)  # CMake version check
project(accelerated_cpp_koenig)       # Create project "accelerated_cpp_koenig"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES 0-probs.cpp 1-probs.cpp 2-probs.cpp 3-probs.cpp 4-files/4-probs.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
#add_executable(probs ${SOURCE_FILES})
add_executable(probs0 0-probs.cpp)
add_executable(probs1 1-probs.cpp)
add_executable(probs2 2-probs.cpp)
add_executable(probs3 3-probs.cpp)
add_executable(probs4 4-files/4-content.cpp
        4-files/median.cpp 4-files/median.h
        4-files/Student_info.cpp 4-files/Student_info.h
        4-files/4-probs.cpp)

