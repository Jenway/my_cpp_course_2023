#include "employee.h"

int main(void)
{

    Employee emp[5] = {
        Employee((char *)"John", (char *)"Street 1", (char *)"City 1", (char *)"100001"),
        Employee((char *)"Jack", (char *)"Street 2", (char *)"City 2", (char *)"100002"),
        Employee((char *)"Mary", (char *)"Street 3", (char *)"City 3", (char *)"100003"),
        Employee((char *)"Tom", (char *)"Street 4", (char *)"City 4", (char *)"100004"),
        Employee((char *)"Jerry", (char *)"Street 5", (char *)"City 5", (char *)"100005")};

    for (int i = 0; i < 5; i++)
    {
        emp[i].display();
    }

}