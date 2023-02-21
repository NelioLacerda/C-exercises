#include "priceSystem.h"

PriceSystem::PriceSystem(int carType, double time, double distance)
    : carType(carType), time(time), distance(distance)
{
    std::cout<<"Start"<<std::endl;
}

PriceSystem::~PriceSystem(){
    std::cout<<"Ending"<<std::endl;
}

void PriceSystem::calcPrice(){
    if(carType == 1){
        price = baseRate1 + distance*distance1 + time*time1;
        if (price < minRate1)
        {
            price = minRate1;
        }
    }else if(carType == 2){
        price = baseRate2 + distance*distance2 + time*time2;
        if (price < minRate2)
        {
            price = minRate2;
        }
    }else{
        std::cout<<"Invalid car type"<<std::endl;
    }
    std::cout<<"Travel price: "<<price<<std::endl;
} 
