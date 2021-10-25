#include "Wheel.h"
#include "Engine.h"
#include "Body.h"

#ifndef builder_h
#define builder_h

using namespace std;

class Builder
{
    public:
    virtual Wheel* getWheel() = 0;
    virtual Engine* getEngine() = 0;
    virtual Body* getBody() = 0;
};

#endif
