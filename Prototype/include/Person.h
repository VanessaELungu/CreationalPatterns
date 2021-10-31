#include<string>
#include<iostream>

#ifndef person_h
#define person_h

using namespace std;

class Person //base class
{
    public:
    string name;
    int ID;
    
    virtual Person* clone() = 0;

    string getName();
    int getID();
};

#endif