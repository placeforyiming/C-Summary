# cmake version
cmake_minimum_required(VERSION 3.5.1)
#c++ standard
set(CMAKE_CXX_STANDARD 14)
# project name
project(First_try)

# add output file name : haha
# add all compile .cpp files

add_executable(haha src/main.cpp src/vect_add_one.cpp src/increment_and_sum.cpp)