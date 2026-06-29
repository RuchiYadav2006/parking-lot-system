#include "ParkingLot.h"
#include "FeeCalculator.h"
#include <iostream>
#include <stdexcept>

ParkingLot* ParkingLot::instance = nullptr;

ParkingLot::ParkingLot() : nextTicketId(1001) {
    // TODO: populate `spots` with some starting spots, e.g.:
    //   5 CompactSpot, 2 LargeSpot, 6 MotorcycleSpot
    // Use unique IDs, e.g. spots.push_back(std::make_shared<CompactSpot>(1)); etc.
}

ParkingLot* ParkingLot::getInstance() {
    // TODO:
    // - If instance == nullptr, create it: instance = new ParkingLot();
    // - Return instance
    throw std::logic_error("Not implemented");
}

std::shared_ptr<Ticket> ParkingLot::parkVehicle(const std::shared_ptr<Vehicle>& vehicle) {
    // TODO:
    // 1. Loop through `spots`, find the first spot where:
    //    !spot->isOccupied() && spot->canFitVehicle(vehicle)
    // 2. If no spot found, return nullptr (lot is full for this vehicle type)
    // 3. Otherwise: spot->park(vehicle)
    // 4. Create a Ticket: std::make_shared<Ticket>(nextTicketId, vehicle, spot)
    // 5. Store it in activeTickets[nextTicketId] = ticket
    // 6. Increment nextTicketId
    // 7. Return the ticket
    throw std::logic_error("Not implemented");
}

double ParkingLot::unparkVehicle(int ticketId) {
    // TODO:
    // 1. Look up activeTickets.find(ticketId) — if not found, throw
    //    std::runtime_error("Invalid ticket ID")
    // 2. Get the ticket, then ticket->getSpot()->unpark()
    // 3. long hours = ticket->getDurationHours();
    // 4. double fee = FeeCalculator::calculateFee(ticket->getVehicle()->getType(), hours);
    // 5. Remove the ticket from activeTickets (activeTickets.erase(ticketId))
    // 6. Return fee
    throw std::logic_error("Not implemented");
}

void ParkingLot::displayAvailability() const {
    // TODO:
    // - Count available spots per SpotType (COMPACT, LARGE, MOTORCYCLE)
    // - Print something like:
    //     "Compact spots available: 4/5"
    //     "Large spots available: 2/2"
    //     "Motorcycle spots available: 6/6"
    // hint: loop through `spots`, tally total and available count per type
    throw std::logic_error("Not implemented");
}
