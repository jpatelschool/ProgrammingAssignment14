#include "Vehicle.h"

#include <iostream>
#include <ostream>

Vehicle::Vehicle(const std::string &manufacturer, int year) {
    manufacturer_ = manufacturer;
    year_ = year;
}

std::string Vehicle::getManufacturer() {
    return manufacturer_;
}

int Vehicle::getYear() {
    return year_;
}

void Vehicle::setManufacturer(const std::string &manufacturer) {
    manufacturer_ = manufacturer;
}

void Vehicle::setYear(int year) {
    year_ = year;
}

void Vehicle::displayInfo() {
    std::cout << "Vehicle Information:" << std::endl;
    std::cout << "Manufacturer: " << manufacturer_ << std::endl;
    std::cout << "Year Built: " << year_ << std::endl;
}