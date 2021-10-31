#include "Person.h"
#include "Student.h"
#include "Teacher.h"

#include<iostream>
#include<string>

#ifndef university_h
#define university_h

using namespace std;

class University // manages prorotype instances and produce their clone
{
    static Person* name1ID1;
    static Person* name1ID2;
    static Person* name2ID1;
    static Person* name2ID2;

    public:
    static void initialize();
    static Person* getName1ID1();
    static Person* getName1ID2();
    static Person* getName2ID1();
    static Person* getName2ID2();

};


#endif