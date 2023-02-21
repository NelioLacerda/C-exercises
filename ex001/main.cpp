#include <iostream>
#include "priceSystem.h"

const int stopProgramKey = 1;

int hadFinish();

int main(){
    int type;
    double time, distance;
    do{
    std::cout<<"Type[], Time[], Distance[]"<<std::endl;
    std::cin>>type;
    std::cin>>time;
    std::cin>>distance;

    PriceSystem priceSystem(type, time, distance);
    priceSystem.calcPrice();

    }while(hadFinish() != stopProgramKey);

    return 0;
}

int hadFinish(){
    int result;
    std::cout<<"Press 1 to stop the program, any other key to continue."<<std::endl;
    std::cin>>result;
    return result;
}