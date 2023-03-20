#include <iostream>
#include <string>
using namespace std;

class DataType
{
private:
    union Data
    {
        char data_char;
        int data_int;
        float data_float;
    } m_data;

    enum Type
    {
        type_char = 0,
        type_int,
        type_float
    } m_type;
    string typeName[3] = {
        "char: ", "int: ", "float: "};

public:
    void
    print();
    DataType(char data);
    DataType(int data);
    DataType(float data);
    ~DataType();
};

void DataType::print()
{

    switch (m_type)
    {
    case type_char:
        cout << typeName[m_type] << m_data.data_char << endl;
        break;
    case type_int:
        cout << typeName[m_type] << m_data.data_int << endl;
        break;
    case type_float:
        cout << typeName[m_type] << m_data.data_float << endl;
        break;
    }
}

DataType::DataType(char data)
{
    m_data.data_char = data;
    m_type = type_char;
}
DataType::DataType(int data)
{
    m_data.data_int = data;
    m_type = type_int;
}
DataType::DataType(float data)
{
    m_data.data_float = data;
    m_type = type_float;
}
DataType::~DataType()
{
}

int main(void)
{
    DataType aa('e'), bb(16), cc(2.56F);
    aa.print();
    bb.print();
    cc.print();
    return 0;
}