#include <iostream>

// 华氏度 to 摄氏度  C=(F-32)*5/9
// 重载函数 max1 2整数 三整数 两个 double 三个 double
// 使用系统函数 pow(x，y)
// 递归 斐波那契数列

using namespace std;

int max1(int x, int y)
{
    return x > y ? x : y;
}
int max1(int x, int y, int z)
{
    return max1(x, y) > z ? max1(x, y) : z;
}
double max1(double x, double y)
{
    return x > y ? x : y;
}
double max1(double x, double y, double z)
{
    return max1(x, y) > z ? max1(x, y) : z;
}

int main(void)
{
    cout << max1(23, 24) << endl;
    cout << max1(23, 24, 67) << endl;
    cout << max1(23.23, 24.65) << endl;
    cout << max1(23.42, 240.65, 87.21) << endl;
    return 0;
}