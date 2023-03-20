#include <iostream>
#include <string>
#include <complex>
using namespace std;

// 8.定义一个复数类Complex,使得下面的代码能够工作：
// Complex c1(5,8);  //用复数5+8i初始化c1
// Complex c2 = 6.7; //用实数6.7初始化c2
// c1.add(c2);       //将c1与c2相加，结果保存在c1中
// c1.show();        //将c1输出（这时的结果应该是11.7+8i）
// 截图程序结果到实验报告中，以C_Complex.cpp命名源程序并提交。
class Complex
{
private:
    float m_real;
    float m_imag;

public:
    auto GetReal()
    {
        return m_real;
    }
    auto GetImag()
    {
        return m_imag;
    }
    void add(Complex num)
    {
        num.GetImag() == 0 ? 0 : m_imag += num.GetImag();
        m_real += num.GetReal();
    }
    void show();
    Complex(float real = 0, float imag = 0) : m_real(real), m_imag(imag) {}
    ~Complex();
};

void Complex::show()
{
    cout << m_real;
    if (m_imag == 0)
    {
        cout << endl;
    }
    else
    {
        cout << "+" << m_imag << "i" << endl;
    }
}

Complex::~Complex()
{
}

int main(void)
{
    Complex c1(5, 8); // 用复数5+8i初始化c1
    Complex c2 = 6.7; // 用实数6.7初始化c2
    c1.add(c2);       // 将c1与c2相加，结果保存在c1中
    c1.show();        // 将c1输出（这时的结果应该是11.7+8i）
    return 0;
}