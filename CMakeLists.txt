cmake_minimum_required(VERSION 3.31)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ LinkedList.cpp
        LinkedList.h)

add_executable(MDLL merge_doublyLinkedList.cpp)
add_executable(STLDLL "STL Doubly Linked List.cpp")
