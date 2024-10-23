# CMake 3.15 or newer is requried because of CMP0091.
cmake_minimum_required(VERSION "3.15")

# The CMake compatibility flag for MSVC runtime library flag. New in 3.15.  Must set "NEW"
cmake_policy(SET CMP0091 "NEW")   
# Enforce the  /MT or /MTd as link option for MS Visual Studio C++
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")


#----------------------------------------------------------------------------
# Parameters inside project
project("app")

# Compiler option
# GoogleTest requirest C++11 or later
set(CMAKE_CXX_STANDARD "11")
set(CMAKE_CXX_STANDARD_REQUIRED "ON")
set(CMAKE_CXX_EXTENSIONS "OFF")


#----------------------------------------------------------------------------
# Do not edit the lines below 

# Executable name
set(EXECUTABLE_NAME ${PROJECT_NAME})

# Subdirectories
add_subdirectory("src")
add_subdirectory("test")

