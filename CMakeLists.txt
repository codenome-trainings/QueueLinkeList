cmake_minimum_required(VERSION 3.7)
project(p2_02_queueLinkedList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Queue.cpp Queue.h)
add_executable(p2_02_queueLinkedList ${SOURCE_FILES})