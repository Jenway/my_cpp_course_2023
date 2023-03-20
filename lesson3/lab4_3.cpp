#include <iostream>
#include <string>
using namespace std;

enum SEX
{
    MALE = 0,
    FEMALE
};

class People
{
private:
    int m_number;
    int m_id;
    SEX m_sex;

    // Date --> 类的成员组合
    class Date
    {
    private:
        int m_year;
        int m_month;
        int m_day;

    public:
        void SetDate(int year, int month, int day)
        {
            m_year = year;
            m_month = month;
            m_day = day;
        }
        void GetDate()
        {
            cout << "Date: " << m_year << m_month << m_day << endl;
        }
        Date() : m_year(2000), m_month(1), m_day(1)
        {
        }
        Date(int year, int month, int day) : m_year(year), m_month(month), m_day(day)
        {

            cout << "构造了一个 Date" << endl;
        }
        ~Date()
        {
            cout << "析构了一个 Date" << endl;
        }
    } m_birthday;

public:
    void GetNumber()
    {
        cout << "Number: " << m_number << endl;
    }
    void GetId()
    {
        cout << "ID: " << m_id << endl;
    }
    void GetSEX()
    {
        cout << "SEX: " << ((static_cast<int>(m_sex) == 0) ? "MALE" : "FEMALE") << endl;
    }
    void GetBirthday()
    {
        m_birthday.GetDate();
    }
    void GetData();
    // 构造函数
    People(int number, int id, SEX sex, int year, int month, int day) : m_number(number), m_id(id), m_sex(sex)
    {
        m_birthday = Date(year, month, day);
        cout << "构造了一个 People" << endl;
    }
    // 复制构造函数
    People(const People &people)
    {
        cout << "析构了一个 People" << endl;
    }
    // 析构函数
    ~People()
    {
        cout << "析构了一个 People" << endl;
    }
};

// 内联成员函数

void inline People::GetData()
{
    GetNumber();
    GetId();
    GetSEX();
    GetBirthday();
}

int main(void)
{
    // 录入
    cout << "e.g.: 1 123456 MALE 2000 12 12\n";
    int number = 0, id = 0, year = 0, month = 0, day = 0;
    string sex_input;
    cin >> number >> id >> sex_input >> year >> month >> day;
    SEX sex = sex_input == "MALE" ? MALE : FEMALE;
    People people = People(number, id, sex, year, month, day);

    // 显示
    people.GetData();
    return 0;
}