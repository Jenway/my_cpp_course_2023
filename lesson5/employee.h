#include <cstring>
#include <iostream>
using namespace std;
class Employee
{
private:
    // 姓名，街道地址，城市、邮编
    char m_name[20], m_street[20], m_city[20], m_postcode[20];
    /* data */
public:
    void display();
    void change_name(char *name);
    Employee(char *name, char *street, char *city, char *postcode);
    ~Employee() {}
};

inline Employee::Employee(char *name, char *street, char *city, char *postcode)
{
    strcpy(m_name, name);
    strcpy(m_street, street);
    strcpy(m_city, city);
    strcpy(m_postcode, postcode);
}

inline void Employee::display()
{
    cout << "Name: " << m_name << endl;
    cout << "Street: " << m_street << endl;
    cout << "City: " << m_city << endl;
    cout << "Postcode: " << m_postcode << endl;
}

inline void Employee::change_name(char *name)
{
    strcpy(m_name, name);
}