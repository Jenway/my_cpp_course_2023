#include <iostream>

// 华氏度 to 摄氏度  C=(F-32)*5/9
// 重载函数 max1 2整数 三整数 两个 double 三个 double
// 使用系统函数 pow(x，y)
// 递归 斐波那契数列

using namespace std;

int fib(int num);

int main(void)
{
    int x = 0;
    cin >> x;
    for (size_t i = 1; i < x; i++)
    {
        cout << fib(i) << " ";
    }
    cout << endl;
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