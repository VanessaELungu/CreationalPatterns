#include "Student.h"

#include <iostream>
#include <string>

using namespace std;

Student::Student(int number)
    {
        name = "Gabriela";
        ID = number;
    }

Person* Student::clone()
    {
        return new Student(*this);
    }