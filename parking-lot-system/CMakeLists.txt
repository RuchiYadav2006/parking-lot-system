cmake_minimum_required(VERSION 3.10)
project(ParkingLotSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(parking_lot
    src/main.cpp
    src/Vehicle.cpp
    src/ParkingSpot.cpp
    src/ParkingLot.cpp
    src/Ticket.cpp
    src/VehicleFactory.cpp
    src/FeeCalculator.cpp
)
