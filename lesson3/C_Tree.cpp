#include <iostream>
using namespace std;

class Tree
{
private:
    int m_age;

public:
    void age()
    {
        cout << "The age of this tree is " << m_age << endl;
    }
    void grow(int years)
    {
        m_age += years;
        age();
    }
    Tree(int age) : m_age(age) {}
    ~Tree() {}
};

int main()
{
    Tree t(12);
    t.age();
    t.grow(4);
    return 0;
}