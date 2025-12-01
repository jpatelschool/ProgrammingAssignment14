#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

#include <iostream>
#include <limits>

int main() {
    std::cout << "Vehicle Program" << std::endl;
    // Get input from user for Vehicle (manufacturer and year built)
    std::string vehicleManufacturer;
    int vehicleYear;

    std::cout << "\nVehicle" << std::endl;
    // Ask user for input
    std::cout << "Enter the manufacturer: ";
    std::getline(std::cin, vehicleManufacturer);
    std::cout << "Enter the year built: ";
    std::cin >> vehicleYear;

    // Ignore newline character after vehicleYear
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Create object based on user input
    Vehicle vehicle(vehicleManufacturer, vehicleYear);

    // Print object information back to user
    vehicle.displayInfo();

    // Variables that will eventually be replaced in a Car object
    std::string carManufacturer;
    int carYear;
    int carDoorCount;

    // Get user input
    std::cout << "\nCar:" << std::endl;
    std::cout << "Enter the manufacturer: ";
    std::getline(std::cin, carManufacturer);
    std::cout << "Enter the year built: ";
    std::cin >> carYear;
    std::cout << "Enter the number of doors: ";
    std::cin >> carDoorCount;

    // Ignore newline character after carDoorCount
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Store user input in a Car object
    Car car(carManufacturer, carYear, carDoorCount);

    // Print object information to user
    car.displayInfo();

    // Variables that will eventually be relaced in a Truck object
    std::string truckManufacturer;
    int truckYear;
    int truckTowingCapacity;

    // Get user input
    std::cout << "\nTruck:" << std::endl;
    std::cout << "Enter the manufacturer: ";
    std::getline(std::cin, truckManufacturer);
    std::cout << "Enter the year built: ";
    std::cin >> truckYear;
    std::cout << "Enter the towing capacity: ";
    std::cin >> truckTowingCapacity;

    // Ignore newline from truckTowingCapacity
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Store user input in a Truck object
    Truck truck(truckManufacturer, truckYear, truckTowingCapacity);

    // Print object information to user
    truck.displayInfo();

    return 0;
}