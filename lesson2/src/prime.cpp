#include <iostream>
#include <cmath>
using namespace std;

// 编写程序求m和n之间（包括m和n,m<=n）所有素数的平方根之和。要求使用函数，函数的功能是：判断某一个数是否为素数。m和n由键盘输入，要求输入输出均在主函数中完成。例如输入：100 999，输出：3157.48。源程序以prime.cpp命名，提交源程序并截图(m, n的值可从1-5000中随意选取)结果到实验报告中。

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }

    for (size_t i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int m = 0, n = 0;
    float sum = 0;
    cin >> m >> n;

    for (size_t i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            sum += sqrt(i);
        }
    }
    cout << sum;
    return 0;
}