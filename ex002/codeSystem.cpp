#include "codeSystem.h"

CodeSystem::~CodeSystem(){}

int CodeSystem::calcFristDigits(int ISBNCode[]){
    int sum = 0;
    for(int p = 0; p < 12; p++){
        if((p+1)%2 == 0){
            sum += ISBNCode[p]*3;
        }else{
            sum += ISBNCode[p]*1; 
        } 
    }
    return 10 - (sum%10);
    
}

int CodeSystem::getControlDigit(int result){
    if(result == 10){
        return 0;
    }else{
        return result;
    }
}

void CodeSystem::bookVerefication(int ISBNCode[]){
    int controlDigit = getControlDigit(calcFristDigits(ISBNCode));

    if(controlDigit == ISBNCode[12]){
        std::cout<<"OK"<<std::endl;
    }else{
         std::cout<<"ERRO "<<controlDigit<<std::endl;
    }
}