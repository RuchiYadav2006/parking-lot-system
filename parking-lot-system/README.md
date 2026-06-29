# Parking Lot Management System (C++)

A command-line Parking Lot system demonstrating Object-Oriented Design and
classic design patterns: **Singleton**, **Factory**, and **Strategy**.

> Status: 🚧 In progress — built step-by-step as a learning project.

## Features

- Park a vehicle (Car / Bike / Truck) — automatically assigned to a fitting spot
- Unpark a vehicle and calculate the parking fee based on duration
- Display real-time availability of spots by type

## Design patterns used

| Pattern   | Where                                                                 |
|-----------|------------------------------------------------------------------------|
| Singleton | `ParkingLot` — only one parking lot instance exists at a time         |
| Factory   | `VehicleFactory` — creates the right `Vehicle` subclass from a type   |
| Strategy  | `FeeCalculator` — pluggable fee logic per vehicle type                |

## Class overview

```
Vehicle (abstract)
 ├── Car
 ├── Bike
 └── Truck

ParkingSpot (abstract)
 ├── CompactSpot     (fits Car, Bike)
 ├── LargeSpot       (fits Truck, Car, Bike)
 └── MotorcycleSpot  (fits Bike only)

ParkingLot   — Singleton, owns all ParkingSpots, handles park/unpark
Ticket       — issued on entry, holds entry time + spot + vehicle
VehicleFactory — creates Vehicle objects
FeeCalculator  — calculates fee given vehicle type + duration
```

## Project structure

```
parking-lot-system/
├── README.md
├── .gitignore
├── CMakeLists.txt
├── include/
│   ├── Vehicle.h
│   ├── ParkingSpot.h
│   ├── ParkingLot.h
│   ├── Ticket.h
│   ├── VehicleFactory.h
│   └── FeeCalculator.h
└── src/
    ├── Vehicle.cpp
    ├── ParkingSpot.cpp
    ├── ParkingLot.cpp
    ├── Ticket.cpp
    ├── VehicleFactory.cpp
    ├── FeeCalculator.cpp
    └── main.cpp
```

## Build & run

```bash
mkdir build && cd build
cmake ..
make
./parking_lot
```

## Example session (target behavior once built)

```
> park CAR KA-01-1234
Vehicle parked at spot C-3. Ticket ID: 1001

> unpark 1001
Vehicle KA-01-1234 left spot C-3. Duration: 2 hrs. Fee: ₹40

> status
Compact spots available: 4/5
Large spots available: 2/2
Motorcycle spots available: 6/6
```

## Future improvements

- Multiple floors / multiple parking lots
- Persist tickets to a file or simple database
- Add a basic test suite (Catch2 or GoogleTest)

## Resume bullet (draft — to finalize once built)

> Designed and implemented a Parking Lot Management System in C++ applying
> Singleton, Factory, and Strategy design patterns, supporting multiple
> vehicle/spot types and dynamic fee calculation.
