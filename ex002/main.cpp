#include <iostream>
#include "codeSystem.h"

const int stopProgramKey = 1;

int hadFinish();

int main(){
    do{
    int ISBNCode[13];
    for (int p = 0; p<13; p++) {
        std::cin>>ISBNCode[p];
    }

    CodeSystem codeSystem;
    codeSystem.bookVerefication(ISBNCode);

    }while(hadFinish() != stopProgramKey);

    return 0;
}

int hadFinish(){
    int result;
    std::cout<<"Press 1 to stop the program, any other key to continue."<<std::endl;
    std::cin>>result;
    return result;
}