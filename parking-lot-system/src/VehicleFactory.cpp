#include "VehicleFactory.h"
#include <stdexcept>

std::shared_ptr<Vehicle> VehicleFactory::createVehicle(VehicleType type, const std::string& licensePlate) {
    // TODO:
    // - switch on `type`
    //   case VehicleType::CAR -> return std::make_shared<Car>(licensePlate)
    //   case VehicleType::BIKE -> return std::make_shared<Bike>(licensePlate)
    //   case VehicleType::TRUCK -> return std::make_shared<Truck>(licensePlate)
    // - default: throw std::invalid_argument("Unknown vehicle type")
    throw std::logic_error("Not implemented");
}
