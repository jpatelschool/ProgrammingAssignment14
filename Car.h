// Joshua Patel
// CIS 1202 501
// November 30, 2025

#ifndef CODE_CAR_H
#define CODE_CAR_H

#include "Vehicle.h"
#include <string>

class Car: public Vehicle {
private:
    int doorCount_;

public:
    Car(const std::string &manufacturer, int year, int doorCount_);

    virtual ~Car() = default;

    int getDoorCount();

    void setDoorCount(int doorCount);

    void displayInfo() override;
};


#endif //CODE_CAR_H