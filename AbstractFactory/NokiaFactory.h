#include "Smart.h"
#include "Dumb.h"
#include "PhoneShop.h"

#include <iostream>
#include <string>

#ifndef nokia_h
#define nokia_h

using namespace std;

class NokiaFactory : public PhoneShop
{
    public:
    Smart*GetSmart();
    Dumb*GetDumb();
};

#endif
