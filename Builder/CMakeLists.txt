cmake_minimum_required(VERSION 3.10)
project(Builder)

include_directories(include)
set(my_main "./main/Main.cpp")
file(GLOB SOURCES "src/*.cpp")

add_executable(a.out ${SOURCES} ${my_main})
