cmake_minimum_required(VERSION 3.20)
project(CPP_Data_Structures_and_Algorithms_ch02)

set(CMAKE_CXX_STANDARD 17)
include_directories(Doubly_Linked_List/include)
include_directories(List/include)
include_directories(Singly_Linked_List/include)

add_executable(ch02_array Array/array.cpp)
add_executable(ch02_array_as_pointer Array_As_Pointer/array_as_pointer.cpp)
add_executable(ch02_doubly_linked_list
        Doubly_Linked_List/src/DoublyLinkedList.cpp
        Doubly_Linked_List/src/DoublyNode.cpp
        Doubly_Linked_List/main.cpp)
add_executable(ch02_list
        List/src/List.cpp
        List/main.cpp)
add_executable(ch02_node_chain Node_Chain/main.cpp)
add_executable(ch02_node_chain_template Node_Chain_Template/main.cpp)
add_executable(ch02_singly_linked_list
        Singly_Linked_List/src/LinkedList.cpp
        Singly_Linked_List/src/Node.cpp
        Singly_Linked_List/main.cpp)
add_executable(ch02_std_list Std_List/main.cpp)
add_executable(ch02_vector Vector/main.cpp)