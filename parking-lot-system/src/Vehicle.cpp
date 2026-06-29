#include "Vehicle.h"
#include <stdexcept>

// ---- Vehicle (base) ----

Vehicle::Vehicle(const std::string& licensePlate) : licensePlate(licensePlate) {}

std::string Vehicle::getLicensePlate() const {
    return licensePlate;
}

// ---- Car ----

Car::Car(const std::string& licensePlate) : Vehicle(licensePlate) {}

VehicleType Car::getType() const {
    // TODO: return VehicleType::CAR
    throw std::logic_error("Not implemented");
}

// ---- Bike ----

Bike::Bike(const std::string& licensePlate) : Vehicle(licensePlate) {}

VehicleType Bike::getType() const {
    // TODO: return VehicleType::BIKE
    throw std::logic_error("Not implemented");
}

// ---- Truck ----

Truck::Truck(const std::string& licensePlate) : Vehicle(licensePlate) {}

VehicleType Truck::getType() const {
    // TODO: return VehicleType::TRUCK
    throw std::logic_error("Not implemented");
}
