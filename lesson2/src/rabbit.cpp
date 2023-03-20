#include <iostream>

using namespace std;

int fib(int num);

int main(void)
{
    int x = 0;
    cin >> x;
    cout << fib(x) << endl;
    return 0;
}
int fib(int num)
{
    if (num <= 0)
    {
        return 0;
    }
    else if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}