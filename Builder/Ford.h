#include "Director.h"
#include "Car.h"
#include "Builder.h"
#include "Wheel.h"
#include "Engine.h"
#include "Body.h"

#ifndef ford_h
#define ford_h

using namespace std;


class Ford : public Builder
{
    public:
    Wheel* getWheel();
    Engine* getEngine();
    Body* getBody();
   
};

#endif 