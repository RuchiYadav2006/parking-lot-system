#include "ParkingSpot.h"
#include <stdexcept>

// ---- ParkingSpot (base) ----

ParkingSpot::ParkingSpot(int spotId) : spotId(spotId), occupied(false), parkedVehicle(nullptr) {}

int ParkingSpot::getSpotId() const {
    return spotId;
}

bool ParkingSpot::isOccupied() const {
    return occupied;
}

std::shared_ptr<Vehicle> ParkingSpot::getParkedVehicle() const {
    return parkedVehicle;
}

void ParkingSpot::park(const std::shared_ptr<Vehicle>& vehicle) {
    // TODO:
    // - If already occupied, throw std::runtime_error("Spot already occupied")
    // - Otherwise set parkedVehicle = vehicle, occupied = true
    throw std::logic_error("Not implemented");
}

void ParkingSpot::unpark() {
    // TODO:
    // - Set parkedVehicle = nullptr, occupied = false
    throw std::logic_error("Not implemented");
}

// ---- CompactSpot ----

CompactSpot::CompactSpot(int spotId) : ParkingSpot(spotId) {}

bool CompactSpot::canFitVehicle(const std::shared_ptr<Vehicle>& vehicle) const {
    // TODO: Compact spots fit CAR and BIKE, but NOT TRUCK.
    // Check vehicle->getType() against VehicleType::TRUCK
    throw std::logic_error("Not implemented");
}

SpotType CompactSpot::getSpotType() const {
    // TODO: return SpotType::COMPACT
    throw std::logic_error("Not implemented");
}

// ---- LargeSpot ----

LargeSpot::LargeSpot(int spotId) : ParkingSpot(spotId) {}

bool LargeSpot::canFitVehicle(const std::shared_ptr<Vehicle>& vehicle) const {
    // TODO: Large spots fit everything (CAR, BIKE, TRUCK) -> return true
    throw std::logic_error("Not implemented");
}

SpotType LargeSpot::getSpotType() const {
    // TODO: return SpotType::LARGE
    throw std::logic_error("Not implemented");
}

// ---- MotorcycleSpot ----

MotorcycleSpot::MotorcycleSpot(int spotId) : ParkingSpot(spotId) {}

bool MotorcycleSpot::canFitVehicle(const std::shared_ptr<Vehicle>& vehicle) const {
    // TODO: Motorcycle spots ONLY fit BIKE.
    throw std::logic_error("Not implemented");
}

SpotType MotorcycleSpot::getSpotType() const {
    // TODO: return SpotType::MOTORCYCLE
    throw std::logic_error("Not implemented");
}
