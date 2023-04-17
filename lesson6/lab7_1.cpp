#include <iostream>

using namespace std;

class Animal
{
private:
    // int age;

public:
    int age;
    Animal(/* args */) {}
    ~Animal() {}
};
class Dog : public Animal
{
private:
    /* data */
public:
    void SetAge(int age) { this->age = age; }
    Dog(/* args */) {}
    ~Dog() {}
};

int main(void)
{
    Dog dog;
    return 0;
}