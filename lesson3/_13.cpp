#include <iostream>
#include <cstdlib>
using namespace std;

class CA
{
    int m_a;
    CA() {}
    ~CA() {}
};
struct student
{
    char mark;
    long num;
    float score;
};
union test
{
    char mark;
    long num;
    float score;
};
// union Test
// {
//     CA a;
//     double d;
// };

int main()
{
    cout << sizeof(student) << "  " << sizeof(test) << endl;
    return 0;
}
