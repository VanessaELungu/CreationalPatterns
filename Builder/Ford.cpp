#include "Ford.h"
#include "Wheel.h"
#include "Engine.h"
#include "Body.h"

#include <iostream>
using namespace std;

Wheel* Ford::getWheel()
{
    Wheel* wheel = new Wheel();
    wheel->size = 19;
    return wheel;
}

Engine* Ford::getEngine()
    {
        Engine* engine = new Engine();
        engine->power = 450;
        return engine;
    }

Body* Ford::getBody()
    {
        Body* body = new Body();
        body->shape = "Roadster";
    }