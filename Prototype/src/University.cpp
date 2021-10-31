#include "University.h"

#include <iostream>
#include <string>

using namespace std;

void University::initialize()
    {
        name1ID1 = new Student(1);
        name1ID2 = new Student(2);
        name2ID1 = new Teacher(1);
        name2ID2 = new Teacher(2);   
    }

Person* University::getName1ID1()
    {
        return name1ID1->clone();
    }

Person* University::getName1ID2()
    {
        return name1ID2->clone();
    }

Person* University::getName2ID1()
    {
        return name2ID1->clone();
    }

Person* University::getName2ID2()
    {
        return name2ID2->clone();
    }