cmake_minimum_required(VERSION 3.20)
project(CPP_Data_Structures_and_Algorithms_ch01)

set(CMAKE_CXX_STANDARD 17)

include_directories(Deque/include)
include_directories(Queue/include)
include_directories(Node)
include_directories(Stack/include)

add_executable(ch03_deque
        Deque/src/Deque.cpp
        Deque/main.cpp)
add_executable(ch03_parenthesis_validity
        Parenthesis_Validity/main.cpp
        Parenthesis_Validity/Parenthesis_Validity.cpp)
add_executable(ch03_queue
        Queue/src/Queue.cpp
        Queue/main.cpp)
add_executable(ch03_stack
        Stack/src/Stack.cpp
        Stack/main.cpp)