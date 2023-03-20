#include <iostream>

// 华氏度 to 摄氏度  C=(F-32)*5/9
// 重载函数 max1 2整数 三整数 两个 double 三个 double
// 使用系统函数 pow(x，y)
// 递归 斐波那契数列

using namespace std;

inline float Convert(float TempFer)
{

    return (TempFer - 32.0) * 5.0 / 9.0;
}

int main(void)
{

    double TempFer = 0;

    cin >> TempFer;
    cout << Convert(TempFer) << endl;

    return 0;
}