#include "Smart.h"
#include "Dumb.h"
#include "AppleFactory.h"
#include "SamsungFactory.h"
#include "NokiaFactory.h"
#include "PhoneShop.h"

#include <iostream>
#include <string>

using namespace std;

PhoneShop*PhoneShop::CreateFactory(Phone_factories factory)
{
    if(factory == Phone_factories::Apple)
    {
        return new AppleFactory();
    }
    else if(factory == Phone_factories::Samsung)
    {
        return new SamsungFactory();
    }
    else if(factory == Phone_factories::Nokia)
    {
        return new NokiaFactory();
    }
    return NULL;
}

int main(int argc, char* argv[])
{
    PhoneShop *factory = PhoneShop :: CreateFactory(PhoneShop::Phone_factories::Apple);
    std::cout<<"Smart phone from Apple:"<<factory->GetSmart()->Name()<<"\n";
    delete factory->GetSmart();
    std::cout<<"Dumb phone from Apple:"<<factory->GetDumb()->Name()<<"\n";
    delete factory->GetDumb();

    delete factory;
    getchar();

    factory=PhoneShop :: CreateFactory(PhoneShop::Phone_factories::Samsung);
    std::cout<<"Smart phone from Samsung:"<<factory->GetSmart()->Name()<<"\n";
    delete factory->GetSmart();
    std::cout<<"Dumb phone from Samsung:"<<factory->GetDumb()->Name()<<"\n";
    delete factory->GetDumb();

    delete factory;
    getchar();

    PhoneShop :: CreateFactory(PhoneShop::Phone_factories::Nokia);
    std::cout<<"Smart phone from Nokia:"<<factory->GetSmart()->Name()<<"\n";
    delete factory->GetSmart();
    std::cout<<"Dumb phone from Nokia:"<<factory->GetDumb()->Name()<<"\n";
    delete factory->GetDumb();

    delete factory;
    getchar();
    
    return 0;
}