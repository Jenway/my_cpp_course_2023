// lab9_2.cpp
#include "link.h"
// 这写的什么shit代码
#include <iostream>

using namespace std;

void show(LinkedList<int> &list)
{
    list.reset();
    while (!list.endOfList())
    {
        cout << list.data() << " ";
        list.next();
    }
    cout << endl;
}

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
        listA.insertRear(listB.data());
        listB.next();
    }
    show(listA);
    listA.clear();
    listB.clear();
    return 0;
}