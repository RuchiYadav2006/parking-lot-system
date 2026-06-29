#ifndef FEE_CALCULATOR_H
#define FEE_CALCULATOR_H

#include "Vehicle.h"

// Strategy pattern: fee calculation logic is isolated here so you could
// swap in a different pricing strategy later (e.g. weekend rates,
// first-hour-free promos) without touching ParkingLot at all.
class FeeCalculator {
public:
    static double calculateFee(VehicleType type, long durationHours);
};

#endif // FEE_CALCULATOR_H
