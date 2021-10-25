#include "AppleFactory.h"
#include "Iphone12.h"
#include "Iphone4.h"

#include <iostream>
#include <string>

using namespace std;

Smart* AppleFactory::GetSmart()
    {
        return new Iphone12();
    }
Dumb* AppleFactory::GetDumb()
    {
        return new Iphone4();
    }