#include "Smart.h"
#include "Dumb.h"
#include "PhoneShop.h"

#include <iostream>
#include <string>

#ifndef apple_h
#define apple_h

using namespace std;

class AppleFactory : public PhoneShop
{
public:
Smart*GetSmart();
Dumb*GetDumb();
};

#endif