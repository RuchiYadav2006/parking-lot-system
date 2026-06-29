#ifndef VEHICLE_FACTORY_H
#define VEHICLE_FACTORY_H

#include "Vehicle.h"
#include <memory>
#include <string>

// Factory pattern: hides the "which subclass do I instantiate" logic
// from the rest of the code. Caller just says "give me a CAR" and doesn't
// need to know the Car class exists.
class VehicleFactory {
public:
    static std::shared_ptr<Vehicle> createVehicle(VehicleType type, const std::string& licensePlate);
};

#endif // VEHICLE_FACTORY_H
