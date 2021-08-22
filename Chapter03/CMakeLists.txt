cmake_minimum_required(VERSION 3.20)
project(CPP_Data_Structures_and_Algorithms_ch01)

set(CMAKE_CXX_STANDARD 17)
include_directories(Deque/include)

add_executable(ch03_deque
        Deque/src/Deque.cpp
        Deque/main.cpp)
add_executable(ch03_parenthesis_validity
        Parenthesis_Validity/main.cpp
        Parenthesis_Validity/Parenthesis_Validity.cpp)
#        Chapter03/Queue/include/Queue.h
#        Chapter03/Queue/src/Queue.cpp
#        Chapter03/Queue/main.cpp
#        Chapter03/Stack/include/Stack.h
#        Chapter03/Stack/src/Stack.cpp
#        Chapter03/Stack/main.cpp