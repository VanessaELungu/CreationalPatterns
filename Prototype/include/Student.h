#include "Person.h"

#ifndef student_h
#define student_h

using namespace std;

class Student : public Person
{
    public:
    Student(int number);
    Person* clone();
};

#endif
