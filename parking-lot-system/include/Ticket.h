#ifndef TICKET_H
#define TICKET_H

#include "Vehicle.h"
#include "ParkingSpot.h"
#include <chrono>
#include <memory>

class Ticket {
private:
    int ticketId;
    std::shared_ptr<Vehicle> vehicle;
    std::shared_ptr<ParkingSpot> spot;
    std::chrono::system_clock::time_point entryTime;

public:
    Ticket(int ticketId,
           const std::shared_ptr<Vehicle>& vehicle,
           const std::shared_ptr<ParkingSpot>& spot);

    int getTicketId() const;
    std::shared_ptr<Vehicle> getVehicle() const;
    std::shared_ptr<ParkingSpot> getSpot() const;
    std::chrono::system_clock::time_point getEntryTime() const;

    // Returns duration parked, in hours (rounded up).
    long getDurationHours() const;
};

#endif // TICKET_H
