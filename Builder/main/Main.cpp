#include "Body.h"
#include "Engine.h"
#include "Wheel.h"
#include "Car.h"
#include "Director.h"
#include "Builder.h"
#include "Maserati.h"
#include "Ford.h"

#include <iostream>
using namespace std;

int main()
{
    
    Car* car; // final product
    Director director; // controls the process
    Maserati maserati; //concrete builder
    Ford ford;

    cout<< "MASERATI LEVANTE" << endl;
    director.setBuilder(&maserati);
    car = director.getCar();
    car->specifications();

    cout<<endl;

    cout<< "FORD MUSTANG" << endl;
    director.setBuilder(&ford);
    car = director.getCar();
    car->specifications();

    return 0;

}
