#include "Maserati.h"
#include "Wheel.h"
#include "Engine.h"
#include "Body.h"

#include <iostream>
using namespace std;

Wheel* Maserati::getWheel()
{
    Wheel* wheel = new Wheel();
    wheel->size=21;
    return wheel;
}

Engine* Maserati::getEngine()
    {
        Engine* engine = new Engine();
        engine->power = 400;
        return engine;
    }

Body* Maserati::getBody()
    {
        Body* body = new Body();
        body->shape = "SUV";
    }
