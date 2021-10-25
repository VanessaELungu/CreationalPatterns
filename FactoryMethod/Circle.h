#include "Shape.h"

#include <iostream>
#include <string>

#ifndef circle_h
#define circle_h

using namespace std;

class Circle : public Shape 
{
    public:
       void Draw();
       friend class Shape;
};

#endif