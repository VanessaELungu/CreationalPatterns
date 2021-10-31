#include "Smart.h"
#include "Dumb.h"
#include "PhoneShop.h"

#include <iostream>
#include <string>

#ifndef samsung_h
#define samsung_h

using namespace std;

class SamsungFactory : public PhoneShop
{
    public:
    Smart*GetSmart();
    Dumb*GetDumb();
};

#endif