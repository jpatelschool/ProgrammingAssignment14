// Joshua Patel
// CIS 1202 501
// November 30, 2025

#ifndef CODE_TRUCK_H
#define CODE_TRUCK_H

#include "Vehicle.h"
#include <string>

class Truck: public Vehicle {
private:
    int towingCapacity_;

public:
    Truck(const std::string &manufacturer, int year, int towingCapacity);

    int getTowingCapacity();

    void setTowingCapacity(int towingCapacity);

    void displayInfo() override;
};

#endif //CODE_TRUCK_H