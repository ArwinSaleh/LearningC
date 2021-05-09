cmake_minimum_required(VERSION 3.19)
project(LearningC)

set(CMAKE_CXX_STANDARD 14)

include_directories(converter)

add_executable(LearningC
        CodeWars/CountSmileys.cpp
        CodeWars/DigPow.cpp
        CodeWars/hexToDec.cpp
        converter/convert.h
        converter/main.c
        OpenGL/2D.c++
        Snake/main.cpp)
