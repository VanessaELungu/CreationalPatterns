#include "Smart.h"
#include "Dumb.h"

#include <iostream>
#include <string>

#ifndef phoneshop_h
#define phoneshop_h

using namespace std;
//Abstract Factory

class PhoneShop
{
    public:
    enum Phone_factories
    {
        Apple,
        Samsung,
        Nokia
    };
    virtual Smart* GetSmart()=0;
    virtual Dumb* GetDumb()=0;
    static PhoneShop*CreateFactory(Phone_factories factory);
    virtual ~PhoneShop(){}
};

#endif