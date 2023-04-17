#include "employee.h"

int main(void)
{
    // ISO C++ 11 does not allow conversion from string literal to 'char *'
    Employee emp1((char *)"John", (char *)"Street 1", (char *)"City 1", (char *)"100001");
    emp1.display();
    emp1.change_name((char *)"Jack");
    emp1.display();
    return 0;
}