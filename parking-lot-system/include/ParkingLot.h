#ifndef PARKING_LOT_H
#define PARKING_LOT_H

#include "ParkingSpot.h"
#include "Ticket.h"
#include <vector>
#include <memory>
#include <unordered_map>

// Singleton pattern: there should only ever be ONE ParkingLot instance
// managing the spots. Constructor is private; access via getInstance().
class ParkingLot {
private:
    static ParkingLot* instance;

    std::vector<std::shared_ptr<ParkingSpot>> spots;
    std::unordered_map<int, std::shared_ptr<Ticket>> activeTickets; // ticketId -> Ticket
    int nextTicketId;

    ParkingLot(); // private constructor — use getInstance()

public:
    // Delete copy constructor/assignment so nobody can accidentally
    // copy the singleton.
    ParkingLot(const ParkingLot&) = delete;
    ParkingLot& operator=(const ParkingLot&) = delete;

    static ParkingLot* getInstance();

    // Park a vehicle, returns the issued Ticket (or nullptr if lot is full).
    std::shared_ptr<Ticket> parkVehicle(const std::shared_ptr<Vehicle>& vehicle);

    // Unpark using ticket ID, returns the fee charged.
    double unparkVehicle(int ticketId);

    // Print availability per spot type to stdout.
    void displayAvailability() const;
};

#endif // PARKING_LOT_H
