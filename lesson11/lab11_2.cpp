#include <fstream>
#include <iostream>
#include <string>

// 编写程序 lab11_2.cpp 使用int main(int argc，char * argv[])函数中的参数传递操作的文件名,声明 ofstream 的对象对文件进行操作,使用 getline 成员函数读入数据,使用cout 输出字符到文件。

int main(int argc, char* argv[])
{
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " filename" << std::endl;
        return 1;
    }
    // 声明 ofstream 的对象对文件进行操作,
    // 嘛，我是完全没有搞懂题目里用 cout 输出到文件是什么意思
    // 大概是这样吧，把文件输出流叫做 cout
    std::ofstream cout(argv[1]);
    if (!cout) {
        std::cout << "Cannot open file " << argv[1] << std::endl;
        return 1;
    }

    std::string line;
    std::getline(std::cin, line);
    cout << line << std::endl;

    cout.close();
    return 0;
}
