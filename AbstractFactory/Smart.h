#include <iostream>
#include <string>

#ifndef smart_h
#define smart_h

using namespace std;

//New interface 
class Smart
{
    public:
    virtual string Name() = 0;
    virtual ~Smart(){}
};

#endif