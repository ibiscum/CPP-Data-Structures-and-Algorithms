cmake_minimum_required(VERSION 3.20)
project(CPP_Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 17)

include_directories(Chapter02/Doubly_Linked_List/include)
include_directories(Chapter02/List/include)
include_directories(Chapter02/Singly_Linked_List/include)
include_directories(Chapter03/Deque/include)
include_directories(Chapter03/Node)
include_directories(Chapter03/Queue/include)
include_directories(Chapter03/Stack/include)
include_directories(Chapter04/Radix_Sort)
include_directories(Chapter07/Binary_Heap/include)
include_directories(Chapter07/Binary_Search_Tree/include)
include_directories(Chapter08/Hash_Table_OP_LP/include)
include_directories(Chapter08/Hash_Table_SC/include)

add_subdirectory(Chapter01)
add_subdirectory(Chapter02)
add_subdirectory(Chapter03)
add_subdirectory(Chapter04)
add_subdirectory(Chapter05)
add_subdirectory(Chapter06)
add_subdirectory(Chapter07)
add_subdirectory(Chapter08)
add_subdirectory(Chapter09)

#        Chapter06/Anagram/Anagram.cpp
#        Chapter06/BinaryString_To_Decimal/BinaryString_To_Decimal.cpp
#        Chapter06/Characters_Array/Characters_Array.cpp
#        Chapter06/Decimal_To_BinaryString/Decimal_To_BinaryString.cpp
#        Chapter06/Palindrome/Palindrome.cpp
#        Chapter06/Pattern_Searching/Pattern_Searching.cpp
#        Chapter06/Subsequence_Generator/Subsequence_Generator.cpp
#        Chapter06/Subsequence_String/Subsequence_String.cpp
#        Chapter07/Binary_Heap/include/BinaryHeap.h
#        Chapter07/Binary_Heap/src/BinaryHeap.cpp
#        Chapter07/Binary_Heap/Binary_Heap.cpp
#        Chapter07/Binary_Search_Tree/include/AVLNode.h
#        Chapter07/Binary_Search_Tree/include/BSTNode.cpp
#        Chapter07/Binary_Search_Tree/include/BSTNode.h
#        Chapter07/Binary_Search_Tree/src/AVLNode.cpp
#        Chapter07/Binary_Search_Tree/src/BSTNode.cpp
#        Chapter07/Binary_Search_Tree/AVL_Tree.cpp
#        Chapter07/Binary_Search_Tree/Binary_Search_Tree.cpp
#        Chapter07/Binary_Tree/Binary_Tree.cpp
#        Chapter08/Hash_Table_OP_LP/include/HashTable.h
#        Chapter08/Hash_Table_OP_LP/src/HashTable.cpp
#        Chapter08/Hash_Table_OP_LP/main.cpp
#        Chapter08/Hash_Table_SC/include/HashTable.h
#        Chapter08/Hash_Table_SC/src/HashTable.cpp
#        Chapter08/Hash_Table_SC/main.cpp
#        Chapter09/CAPTCHA/main.cpp
#        Chapter09/Coin_Change_Dynamic_Programming/main.cpp
#        Chapter09/Coin_Change_Problem/Coin_Change_Problem.cpp
#        Chapter09/Coin_Change_Problem/main.cpp
#        Chapter09/Fibonacci/main.cpp
#        Chapter09/Huffman_Coding/main.cpp
#        Chapter09/Random_Number_Gеnеrаtоrѕ/main.cpp
#        Chapter09/TicTacToe/main.cpp)
