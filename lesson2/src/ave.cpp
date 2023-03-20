#include <iostream>

using namespace std;

// 6.编写一个函数f（x），若x>0函数返回值为1，若x<0函数返回值为-1，若x=0函数返回值为0，利用该函数实现计算输入任意n个整数中正整数的平均值。输入格式中第一个为整数个数n，后续为n个整数。源程序以ave.cpp命名，提交源程序并截图(n的值可从6-12中随意选取)结果到实验报告中。

inline int fun(int x)
{
    return x > 0 ? 1 : (x == 0 ? 0 : -1);
}

int main(void)
{
    int n = 0, temp = 0, sum = 0, count = 0;

    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> temp;
        if (fun(temp) == 1)
        {
            count++;
            sum += temp;
        }
    }
    cout << (double)sum / (double)count;

    return 0;
}