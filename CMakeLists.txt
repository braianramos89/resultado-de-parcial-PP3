cmake_minimum_required(VERSION 3.22)
project(Templatecpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Templatecpp main.cpp Gestion.cpp Gestion.h Cliente.cpp Cliente.h Libro.cpp Libro.h Disco.cpp Disco.h)
