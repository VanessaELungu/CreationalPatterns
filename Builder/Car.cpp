#include <iostream>
#include "Car.h"
#include "Wheel.h"
#include "Engine.h"
#include "Body.h"
 

 using namespace std;

 void Car::specifications()
    {
        cout << "body:" << body->shape << endl;
        cout << "power:" << engine->power << endl;
        cout << "tire size:" << wheels[0]->size << "" << endl;
    }