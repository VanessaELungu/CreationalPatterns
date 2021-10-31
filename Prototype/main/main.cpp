#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "University.h"

#include <iostream>
#include <string>

using namespace std;

Person* University::name1ID1 = 0;
Person* University::name1ID2 = 0;
Person* University::name2ID1 = 0;
Person* University::name2ID2 = 0;

int main()
{
    University::initialize();
    Person* object;

    object = University::getName1ID1();
    cout << object->getName() << "." << object->getID() << endl;

    object = University::getName1ID2();
    cout << object->getName() << "." << object->getID() << endl;

    object = University::getName2ID1();
    cout << object->getName() << "." << object->getID() << endl;

    object = University::getName2ID2();
    cout << object->getName() << "." << object->getID() << endl;

    return 0;    
}