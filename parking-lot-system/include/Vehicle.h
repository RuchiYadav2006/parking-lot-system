#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

enum class VehicleType {
    CAR,
    BIKE,
    TRUCK
};

// Abstract base class — every vehicle has a license plate and a type.
class Vehicle {
protected:
    std::string licensePlate;

public:
    Vehicle(const std::string& licensePlate);
    virtual ~Vehicle() = default;

    std::string getLicensePlate() const;

    // Pure virtual — every subclass must say what type it is.
    virtual VehicleType getType() const = 0;
};

class Car : public Vehicle {
public:
    Car(const std::string& licensePlate);
    VehicleType getType() const override;
};

class Bike : public Vehicle {
public:
    Bike(const std::string& licensePlate);
    VehicleType getType() const override;
};

class Truck : public Vehicle {
public:
    Truck(const std::string& licensePlate);
    VehicleType getType() const override;
};

#endif // VEHICLE_H
