#ifndef _FACTORY_H_
#define _FACTORY_H_

#include <iostream>

class Factory
{
public:
    Factory();
    virtual ~Factory();
    Factory* SelectFactory(const std::string&);
    virtual void Test();

private:
};


class FactoryA : public Factory
{
public:
    FactoryA();
    ~FactoryA();
    void Test();

private:
};


class FactoryB : public Factory
{
public:
    FactoryB();
    ~FactoryB();
    void Test();
private:
};

#endif // !_FACTORY_H_

