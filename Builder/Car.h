#include "Wheel.h"
#include "Engine.h"
#include "Body.h"

#ifndef car_h
#define car_h

using namespace std;

class Car
{
    public:
    Wheel* wheels[4];
    Engine* engine;
    Body* body;

    void specifications();

};

#endif