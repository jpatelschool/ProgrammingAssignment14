cmake_minimum_required(VERSION 4.0)
project(code)

set(CMAKE_CXX_STANDARD 26)

add_executable(code main.cpp
        Vehicle.cpp
        Vehicle.h
        main.cpp
        Car.cpp
        Car.h
        Truck.cpp
        Truck.h)
