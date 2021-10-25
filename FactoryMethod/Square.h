#include "Shape.h"

#include <iostream>
#include <string>

#ifndef square_h
#define square_h

using namespace std;

class Square : public Shape 
{
    public:
       void Draw();
       friend class Shape;
};

#endif