cmake_minimum_required(VERSION 3.10)
project(FactoryMethod)

include_directories(include)
set(my_main "./main/main.cpp")
file(GLOB SOURCES "src/*.cpp")

add_executable(a.out ${SOURCES} ${my_main})