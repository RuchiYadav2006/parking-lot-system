#ifndef PARKING_SPOT_H
#define PARKING_SPOT_H

#include "Vehicle.h"
#include <memory>

enum class SpotType {
    COMPACT,
    LARGE,
    MOTORCYCLE
};

class ParkingSpot {
protected:
    int spotId;
    bool occupied;
    std::shared_ptr<Vehicle> parkedVehicle;

public:
    ParkingSpot(int spotId);
    virtual ~ParkingSpot() = default;

    int getSpotId() const;
    bool isOccupied() const;
    std::shared_ptr<Vehicle> getParkedVehicle() const;

    // Each spot type decides which vehicle types it can hold.
    virtual bool canFitVehicle(const std::shared_ptr<Vehicle>& vehicle) const = 0;
    virtual SpotType getSpotType() const = 0;

    // Shared behavior: assign / remove a vehicle from this spot.
    void park(const std::shared_ptr<Vehicle>& vehicle);
    void unpark();
};

class CompactSpot : public ParkingSpot {
public:
    CompactSpot(int spotId);
    bool canFitVehicle(const std::shared_ptr<Vehicle>& vehicle) const override;
    SpotType getSpotType() const override;
};

class LargeSpot : public ParkingSpot {
public:
    LargeSpot(int spotId);
    bool canFitVehicle(const std::shared_ptr<Vehicle>& vehicle) const override;
    SpotType getSpotType() const override;
};

class MotorcycleSpot : public ParkingSpot {
public:
    MotorcycleSpot(int spotId);
    bool canFitVehicle(const std::shared_ptr<Vehicle>& vehicle) const override;
    SpotType getSpotType() const override;
};

#endif // PARKING_SPOT_H
