#include "Shape.h"

#include <iostream>
#include <string>

#ifndef rectangle_h
#define rectangle_h

using namespace std;

class Rectangle : public Shape 
{
    public:
       void Draw();
       friend class Shape;
};

#endif