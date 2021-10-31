#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

#include <iostream>
#include <string>

using namespace std;

Shape* Shape::ShapeFactory(string type) {
    if ( type == "circle" ) return new Circle();
    if ( type == "square" ) return new Square();
    if ( type == "rectangle" ) return new Rectangle();
    return NULL;
}

int main(){
   Shape* obj1 = Shape::ShapeFactory("circle");
   Shape* obj2 = Shape::ShapeFactory("square");
   Shape* obj3 = Shape::ShapeFactory("rectangle");
   obj1->Draw();
   obj2->Draw();
   obj3->Draw();
}