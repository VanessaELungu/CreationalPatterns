#include <iostream>
#include <string>

#ifndef dumb_h
#define dumb_h

using namespace std;

//Old interface
class Dumb
{
    public:
    virtual string Name() = 0;
    virtual ~Dumb(){}
};

#endif