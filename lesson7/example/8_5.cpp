// 8_5.cpp
#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base();
};

Base::~Base()
{
    cout << "Base destructor" << endl;
}

class Derived : public Base
{
public:
    Derived();
    virtual ~Derived();

private:
    int *p;
};
Derived::Derived()
{
    p = new int(0);
}
Derived::~Derived()
{
    cout << "Derived destructor" << endl;
    delete this->p;
}

void fun(Base *b)
{
    cout << "fun start" << endl;
    delete b;
    cout << "fun end" << endl;
}

int main()
{
    Derived d1;
    fun(&d1);
    return 0;
}
