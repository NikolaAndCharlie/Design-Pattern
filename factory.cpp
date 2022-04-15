#include "factory.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Factory::Factory()
{
    cout << "Create A Factory" << endl;
}

Factory::~Factory()
{
    cout << "Destory A Factory" << endl;
}

void Factory::Test()
{
    cout << "Factory is Used" << endl;
}

Factory* Factory::SelectFactory(const std::string& str)
{
    if (str == "A") {
        return new FactoryA();
    } else if (str == "B") {
        return new FactoryB();
    }
}


////////////////////////////////////////////////////////

FactoryA::FactoryA()
{
    cout << "Create A Factory A" <<endl;
}

FactoryA::~FactoryA()
{
    cout << "Destory Factroy A" << endl;
}

void FactoryA::Test()
{
    cout << "This is Factory A" << endl;
}

////////////////////////////////////////////////////////

FactoryB::FactoryB()
{
    cout << "Create Factory B" << endl;
}

FactoryB::~FactoryB()
{
    cout << "Destory Factory B" <<endl;
}

void FactoryB::Test()
{
    cout << "This is Factroy B" << endl;
}




