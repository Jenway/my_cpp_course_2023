// 4_7.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student
{

private:
    int m_num;     // 学号
    string m_name; // 姓名，字符串对象，将在第6章详细介绍
    char m_sex;    // 性别
    int m_age;     // 年龄

public:
    void show()
    {

        cout << "Num:  " << m_num << endl;
        cout << "Name: " << m_name << endl;
        cout << "Sex:  " << m_sex << endl;
        cout << "Age:  " << m_age << endl;
    }
    Student(int num, string name, char sex, int age) : m_num(num), m_name(name), m_sex(sex), m_age(age)
    {
    }
    ~Student() {}
};

int main()
{
    Student stu = {97001, "Lin Lin", 'F', 19};
    stu.show();
    return 0;
}
