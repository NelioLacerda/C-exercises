#ifndef CODESYSTEM_H
#define CODESYSTEM_H
#include <iostream>

class CodeSystem{
private:

    int calcFristDigits(int ISBNCode[]);
    int getControlDigit(int result);

public:
    CodeSystem() = default;
    ~CodeSystem();

    void bookVerefication(int ISBNCode[]);
     
};

#endif