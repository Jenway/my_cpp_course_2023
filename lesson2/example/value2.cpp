#include <iostream>
using namespace std;

int fun(int &a)
{
    a = 3;
    cout << a << endl;
    return 1;
}

int main()
{
    int a = 1;
    cout << a << endl;
    fun(a);
    //  引用作为函数参数
    // 函数修改了原变量
    cout << a << endl;
    return 0;
}