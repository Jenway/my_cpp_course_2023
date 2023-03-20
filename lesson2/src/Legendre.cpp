#include <ioStream>
using namespace std;
// 8.用递归的方法编写函数求n阶勒让德多项式的值，在主程序中实现输入输出；递归公式为：
//         | 1 n=0
// P<n>(x) | x n=1
//         | ((2n-1)*x*P<n-1>(X)-(n-1)*P<n-2>(x))/n n>1
// 输入n,x(10-20之内的正整数)，输出的结果，源程序以Legendre.cpp命名，提交源程序并截图结果到实验报告中。
double lege(int x, int n)
{

    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }
    else if (n < 0)
    {

        return 0;
    }
    else
    {
        return ((2 * n - 1) * x * lege(x,n - 1) - (n - 1) * lege(x, n-2)) / n;
    }
}

int main(void)
{
    int x = 0, n = 0;
    cin >> n >> x;
    cout << lege(x, n) << endl;

    return 0;
}