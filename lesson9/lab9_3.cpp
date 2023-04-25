#include "stack.h"

#include <iostream>
using namespace std;

int main(void)
{

    Stack<int> s1(5);
    int temp;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        s1.push(temp);
    }
    while (!s1.isEmpty())
    {
        cout << s1.show() << " ";
        s1.pop();
    }
    cout << endl;

    return 0;
}