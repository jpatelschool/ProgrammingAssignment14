#include <iostream>
#include "Truck.h"

Truck::Truck(const std::string &manufacturer, int year, int towingCapacity)
    : Vehicle(manufacturer, year), towingCapacity_(towingCapacity) {
}

int Truck::getTowingCapacity() {
    return towingCapacity_;
}

void Truck::setTowingCapacity(int towingCapacity) {
    towingCapacity_ = towingCapacity;
}

void Truck::displayInfo() {
    Vehicle::displayInfo();
    std::cout << "Towing Capacity: " << towingCapacity_ << std::endl;
}