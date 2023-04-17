#include <iostream>

using namespace std;

class BaseClass
{
private:
    int Number;

public:
    BaseClass(int number) : Number(number)
    {
        cout << "BaseClass constructor" << endl;
    }
    ~BaseClass()
    {
        cout << "BaseClass destructor" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    DerivedClass(int number) : BaseClass(number)
    {
        cout << "DerivedClass constructor" << endl;
    }
    ~DerivedClass()
    {
        cout << "DerivedClass destructor" << endl;
    }
};

int main(void)
{
    DerivedClass derived(1);
    return 0;
}