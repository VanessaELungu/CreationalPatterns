#include "SamsungFactory.h"
#include "GalaxyS21.h"
#include "GalaxyS3.h"

#include <iostream>
#include <string>

using namespace std;

Smart* SamsungFactory::GetSmart()
    {
        return new GalaxyS21();
    }
Dumb* SamsungFactory::GetDumb()
    {
        return new GalaxyS3();
    }
