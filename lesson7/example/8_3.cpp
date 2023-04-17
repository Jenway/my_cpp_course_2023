// 8_3.cpp
#include <iostream>
using namespace std;

class Complex
{                                                                 // 复数类定义
public:                                                           // 外部接口
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {} // 构造函数
    // 类型转换函数 int to Complex
    operator int() const { return int(real); }

    friend Complex operator+(const Complex &cc1, const Complex &cc2); // 运算符+重载
    friend Complex operator+(const Complex &cc1, int i);              // 运算符+重载
    friend Complex operator+(int i, const Complex &cc1);              // 运算符+重载
    friend Complex operator-(const Complex &cc1, const Complex &cc2); // 运算符-重载
    friend ostream &operator<<(ostream &out, const Complex &c);       // 运算符<<重载
private:                                                              // 私有数据成员
    double real;                                                      // 复数实部
    double imag;                                                      // 复数虚部
};

Complex operator+(const Complex &cc1, const Complex &cc2)
{ // 重载运算符函数实现
    return Complex(cc1.real + cc2.real, cc1.imag + cc2.imag);
}

Complex operator+(const Complex &cc1, int i)
{ // 重载运算符函数实现
    return Complex(cc1.real + i, cc1.imag);
}

Complex operator+(int i, const Complex &cc1)
{ // 重载运算符函数实现
    return Complex(cc1.real + i, cc1.imag);
}

Complex operator-(const Complex &cc1, const Complex &cc2)
{ // 重载运算符函数实现
    return Complex(cc1.real - cc2.real, cc1.imag - cc2.imag);
}

ostream &operator<<(ostream &out, const Complex &c)
{ // 重载运算符函数实现
    out << "(" << c.real << ", " << c.imag << ")";
    return out;
}

int main()
{                                    // 主函数
    Complex c1(5, 4), c2(2, 10), c3; // 定义复数类的对象
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    c3 = c1 - c2; // 使用重载运算符完成复数减法
    cout << "c3 = c1 - c2 = " << c3 << endl;
    c3 = c1 + c2; // 使用重载运算符完成复数加法
    cout << "c3 = c1 + c2 = " << c3 << endl;
    c3 = c1 + 10; // 使用重载运算符完成复数加法
    cout << "c3 = c1 + 10 = " << c3 << endl;
    c3 = 10 + c1; // 使用重载运算符完成复数加法
    cout << "c3 = 10 + c1 = " << c3 << endl;

    return 0;
}
