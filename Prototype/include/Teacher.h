#include "Person.h"

#ifndef teacher_h
#define teacher_h

using namespace std;

class Teacher : public Person
{
    public:
    Teacher(int number);
    Person* clone();
};

#endif