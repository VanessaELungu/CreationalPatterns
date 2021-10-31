#include "Teacher.h"

#include <iostream>
#include <string>

using namespace std;

Teacher::Teacher(int number)
    {
        name = "Oana";
        ID = number;
    }

Person* Teacher::clone()
    {
        return new Teacher(*this);
    }
