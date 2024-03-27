cmake_minimum_required(VERSION 3.24)
project(ReviewProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(ReviewProject main.cpp Person.cpp Person.h Student.cpp Student.h Employer.cpp Employer.h)
