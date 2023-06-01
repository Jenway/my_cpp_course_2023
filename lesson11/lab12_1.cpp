// 声明一个异常类 CException，它有成员函数 Reason()，它用来显示异常的类型，在子函数中触发异常，在主程序中处理异常，观察程序的执行流程。
// 编写程序 lab12_l.cpp。在 CException 类的成员函数 Reason()中用 cout 显示异常的类型,在函数 fnl()中用 throw 语句触发异常,在主函数的 try 模块中调用 fnl( ,在 catch模块中捕获异常

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

class CException {
public:
    CException(const std::string& reason)
        : m_reason(reason)
    {
    }
    const std::string& Reason() const
    {
        return m_reason;
    }

private:
    std::string m_reason;
};

void fnl(int argument)
{
    if (argument < 0) {
        throw CException("argument should >= 0");
    } else {
        // the sqrt (argument)
        std::cout << "sqrt(" << argument << ") = " << sqrt(argument) << std::endl;
    }
}

int main()
{
    try {
        fnl(2);
        fnl(-2);
    } catch (const CException& e) {
        std::cout << e.Reason() << std::endl;
    }
    return 0;
}