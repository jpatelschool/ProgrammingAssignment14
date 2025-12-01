#ifndef CODE_CAR_H
#define CODE_CAR_H

#include "Vehicle.h"
#include <string>

class Truck: public Vehicle {
private:
    int towingCapacity_;

public:
    Truck(const std::string &manufacturer, int year, int towingCapacity);

    virtual ~Truck() = default;

    int getTowingCapacity();

    void setTowingCapacity(int towingCapacity);

    void displayInfo() override;
};

#endif //CODE_CAR_H