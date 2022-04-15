#include "factory.h"
#include <Windows.h>

int main(int argc, char* argv[])
{
    Factory* factory = new Factory();

    Factory* factory_a = factory->SelectFactory("A");
    factory_a->Test();
    Factory* factory_b = factory->SelectFactory("B");
    factory_b->Test();

    //delete
    delete factory_a;
    delete factory_b;
    delete factory;

    std::cin.get();
    std::cin.get();

    return 0;
}