#include<iostream>
#include "Director.h"
#include "Builder.h"
#include "Car.h"

using namespace std;

Car* Director::getCar()
    {
        Car* car= new Car();
        car->body = builder->getBody();
        car->engine = builder->getEngine();
        car->wheels[0]=builder->getWheel();
        car->wheels[1]=builder->getWheel();
        car->wheels[2]=builder->getWheel();
        car->wheels[3]=builder->getWheel();

        return car;
    }

void Director::setBuilder(Builder* newBuilder)
{
    builder = newBuilder;
}