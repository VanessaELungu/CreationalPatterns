#include "NokiaFactory.h"
#include "Lumia.h"
#include "Genie.h"

#include <iostream>
#include <string>

using namespace std;

 Smart* NokiaFactory::GetSmart()
    {
        return new Lumia();
    }
Dumb* NokiaFactory::GetDumb()
    {
        return new Genie();
    }