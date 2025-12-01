#include <iostream>
#include "Car.h"

Car::Car(const std::string &manufacturer, int year, int doorCount)
    : Vehicle(manufacturer, year), doorCount_(doorCount) {
}

int Car::getDoorCount() {
    return doorCount_;
}

void Car::setDoorCount(int doorCount) {
    doorCount_ = doorCount;
}

void Car::displayInfo() {
    Vehicle::displayInfo();
    std::cout << "Doors: " << doorCount_ << std::endl;
}