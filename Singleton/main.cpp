#include<iostream>
#include "singleton.h"

int main()
{
    Singleton *s = s->getInstance();
    cout << s->getData() << endl;
    s->setData(100);
    cout << s->getData() << endl;

    return 0;
}