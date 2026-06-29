#include "Ticket.h"
#include <cmath>
#include <stdexcept>

Ticket::Ticket(int ticketId,
               const std::shared_ptr<Vehicle>& vehicle,
               const std::shared_ptr<ParkingSpot>& spot)
    : ticketId(ticketId), vehicle(vehicle), spot(spot),
      entryTime(std::chrono::system_clock::now()) {}

int Ticket::getTicketId() const {
    return ticketId;
}

std::shared_ptr<Vehicle> Ticket::getVehicle() const {
    return vehicle;
}

std::shared_ptr<ParkingSpot> Ticket::getSpot() const {
    return spot;
}

std::chrono::system_clock::time_point Ticket::getEntryTime() const {
    return entryTime;
}

long Ticket::getDurationHours() const {
    // TODO:
    // - Get the current time: std::chrono::system_clock::now()
    // - Subtract entryTime from it to get a duration
    // - Convert to hours: std::chrono::duration_cast<std::chrono::hours>(...)
    // - Round UP to the nearest hour (e.g. 1 hr 5 min should count as 2 hrs)
    //   hint: you may need to compare against minutes too and add 1 if there's
    //   a remainder, since duration_cast truncates
    // - Return at least 1 (minimum charge is 1 hour)
    throw std::logic_error("Not implemented");
}
