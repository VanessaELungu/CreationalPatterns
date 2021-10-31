#include "singleton.h"

#include<iostream>

using namespace std;

 Singleton::Singleton()
 {
     data = 0;
 }

 Singleton* Singleton::getInstance()
 {
        if ( !instance )
        instance = new Singleton;
        return instance;
 }

 int Singleton::getData()
    {
         return this->data;
    }

 void Singleton::setData(int data)
    {
        this->data = data; 
    }

Singleton* Singleton::instance = 0;