#ifndef CODE_VEHICLE_H
#define CODE_VEHICLE_H
#include <string>

class Vehicle {
private:
    std::string manufacturer_;
    int year_;

public:
    Vehicle(const std::string &manufacturer, int year);

    virtual ~Vehicle() = default;

    virtual std::string getManufacturer();
    virtual int getYear();

    virtual void setManufacturer(const std::string &manufacturer);
    virtual void setYear(int year);

    virtual void displayInfo();
};

#endif //CODE_VEHICLE_H