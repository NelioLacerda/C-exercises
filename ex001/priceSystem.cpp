#include "priceSystem.h"

PriceSystem::PriceSystem(int carType, double time, double distance)
    : carType(carType), time(time), distance(distance)
{
    
}

PriceSystem::~PriceSystem(){
    
}

void PriceSystem::calcPrice(){
    if (time <= 0 || distance <= 0)
    {
        std::cout<<"Invalid distance or time"<<std::endl;
    }else{
        if(carType == 1){
            price = baseRate1 + distance*distance1 + time*time1;
            if (price < minRate1)
            {
                price = minRate1;
            }
            std::cout<<"Travel price: "<<price<<"EUR"<<std::endl;
        }else if(carType == 2){
            price = baseRate2 + distance*distance2 + time*time2;
            if (price < minRate2)
            {
                price = minRate2;
            }
            std::cout<<"Travel price: "<<price<<"EUR"<<std::endl;
        }else{
            std::cout<<"Invalid car type"<<std::endl;
        }
    }
    
} 
