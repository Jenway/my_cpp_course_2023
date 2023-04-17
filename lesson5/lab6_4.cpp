#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str1, str2;
    cout << "Please input two strings: ";
    cin >> str1 >> str2;
    str1 += str2;
    cout << str1 << endl;
    return 0;
}