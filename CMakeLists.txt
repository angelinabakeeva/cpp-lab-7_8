cmake_minimum_required(VERSION 3.26)
project(cpp_lab_7_8)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_lab_7_8
        Book.cpp
        Book.h
        Inheritate.cpp
        Inheritate.h
        Loan.cpp
        Loan.h
        main.cpp
        User.cpp
        User.h
        Library.h)
