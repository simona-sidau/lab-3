cmake_minimum_required(VERSION 3.21)
project(lab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab3 main.cpp menu/Console.h menu/Console.cpp menu/PrintMenu.h menu/PrintMenu.cpp menu/ReadAndShow.cpp menu/ReadAndShow.h)
