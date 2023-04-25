// lab9_2.cpp
#include "LinkedList.h"
#include <iostream>

using namespace std;

int main(void)
{

    LinkedList<int> listA, listB;

    for (int i = 0; i < 5; i++)
    {
        int item;
        cin >> item;
        listA.insertRear(item);
    }
    for (int i = 0; i < 5; i++)
    {
        int item;
        cin >> item;
        listB.insertRear(item);
    }

    listB.reset();
    for (int i = 0; i < 5; i++)
    {
        listA.insertAfter(listB.data());
        listB.next();
    }

    listA.reset();
    for (int i = 0; i < 10; i++)
    {
        cout << listA.data() << " ";
        listA.next();
    }
    cout << endl;
    return 0;
}