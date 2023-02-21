#ifndef PRICESYSTEM_H
#define PRICESYSTEM_H
#include <iostream>

class PriceSystem{
private:
    int carType;
    double price;
    double distance;
    double time;

    //constants
    const int baseRate1 = 1;
    const double baseRate2 = 1.5;
    const double minRate1 = 2.5;
    const double minRate2 = 3.5;
    const double distance1 = 0.80;
    const double time1 = 0.10;
    const double distance2 = 1.20;
    const double time2 = 0.50;

public:
    PriceSystem() = default;
    PriceSystem(int carType, double time, double distance);
    ~PriceSystem();

    void calcPrice();   

};

#endif