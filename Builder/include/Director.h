#include<iostream>
#include "Builder.h"
#include "Car.h"

#ifndef director_h
#define director_h

using namespace std;

class Director
{
    public:
    Builder* builder;
    Car* getCar();
    void setBuilder(Builder* newBuilder);
    
};

#endif