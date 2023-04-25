// lab9_1.cpp
#include <iostream>
#include "LinkedList.h"
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

int main()
{
    LinkedList<int> list;

    for (int i = 0; i < 10; i++)
    {
        int item;
        cin >> item;
        list.insertRear(item);
    }

    show(list);

    int key;
    cout << "Integer to delete: ";
    cin >> key;

    list.reset();
    while (!list.endOfList())
    {
        if (list.data() == key)
            list.deleteCurrent();
        list.next();
    }
    show(list);

    return 0;
}
