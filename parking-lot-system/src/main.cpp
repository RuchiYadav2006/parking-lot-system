#include "ParkingLot.h"
#include "VehicleFactory.h"
#include <iostream>
#include <sstream>
#include <string>

// Helper: convert a string like "CAR" to VehicleType. You'll fill this in.
VehicleType parseVehicleType(const std::string& s) {
    // TODO:
    // - if s == "CAR" return VehicleType::CAR
    // - if s == "BIKE" return VehicleType::BIKE
    // - if s == "TRUCK" return VehicleType::TRUCK
    // - else throw std::invalid_argument("Unknown vehicle type: " + s)
    throw std::logic_error("Not implemented");
}

int main() {
    ParkingLot* lot = ParkingLot::getInstance();

    std::cout << "Parking Lot System - commands: park <TYPE> <PLATE>, unpark <TICKET_ID>, status, exit\n";

    std::string line;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        std::string command;
        iss >> command;

        // TODO:
        // - if command == "park": read TYPE and PLATE from iss, use
        //   parseVehicleType + VehicleFactory::createVehicle, then
        //   lot->parkVehicle(vehicle). Print the ticket ID, or
        //   "Lot full for this vehicle type" if nullptr returned.
        // - if command == "unpark": read ticketId (int) from iss, call
        //   lot->unparkVehicle(ticketId), print the fee.
        // - if command == "status": call lot->displayAvailability()
        // - if command == "exit": break out of the loop
        // - else: print "Unknown command"
        //
        // Wrap each branch's logic in try/catch so a bad command doesn't
        // crash the whole program — print the exception's .what() instead.

        std::cout << "Not implemented yet\n";
    }

    return 0;
}
