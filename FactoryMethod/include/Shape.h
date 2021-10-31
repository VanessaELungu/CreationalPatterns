#include <iostream>
#include <string>

#ifndef shape_h
#define shape_h

using namespace std;

class Shape 
{
    public:
       virtual void Draw() = 0;
       static Shape* ShapeFactory(string type);
};

#endif