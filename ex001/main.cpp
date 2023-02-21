#include <iostream>
#include "priceSystem.h"

int main(){
    int type;
    double time;
    double distance;

    std::cin>>type;
    std::cin>>time;
    std::cin>>distance;

    PriceSystem priceSystem(type, time, distance);

    priceSystem.calcPrice();

    return 0;
}