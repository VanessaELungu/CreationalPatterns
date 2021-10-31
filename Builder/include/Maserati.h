#include "Director.h"
#include "Car.h"
#include "Builder.h"
#include "Wheel.h"
#include "Engine.h"
#include "Body.h"


#ifndef maserati_h
#define maserati_h

using namespace std;

class Maserati : public Builder
{
    public:
    Wheel* getWheel();
    Engine* getEngine();
    Body* getBody();
 
};

#endif
