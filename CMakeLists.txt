cmake_minimum_required(VERSION 3.16)
project(Lesson4_4)

set(CMAKE_CXX_STANDARD 17)

#add_executable(Lesson4_4 main.cpp Task1/ArrayInt.cpp Task1/ArrayInt.h Task2/Task2.h Task2/Task2.cpp)
#add_executable(Lesson4_4 main.cpp Task1/ArrayInt.cpp Task1/ArrayInt.h Task2/Task2.h Task2/Task2.cpp)
add_executable(Lesson4_4 main.cpp Task1/ArrayInt.cpp Task1/ArrayInt.h )


add_executable(Lesson4_4_test Task2/main.cpp Task2/Task2.h Task2/Task2.cpp )
