#include <iostream>
#include <cstring>
using namespace std;


constexpr int MAX = 999;

int main(void)
{

    char str1[MAX], str2[MAX];
    cout << "Please input two strings: ";
    cin >> str1 >> str2;
    int len1 = strlen(str1);
    for (int i = 0; i < strlen(str2); i++)
    {
        str1[i + len1] = str2[i];
    }
    cout << str1 << endl;
    return 0;
}