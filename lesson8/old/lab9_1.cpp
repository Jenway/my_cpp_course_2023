// lab9_1.cpp
#include <iostream>
#include "node.h"
using namespace std;

void show(Node<int> *head)
{
    Node<int> *p = head;
    while (p != NULL)
    {
        cout << p->getData() << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{

    Node<int> *head = NULL;
    Node<int> *p = NULL;
    int n;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if (head == NULL)
        {
            head = new Node<int>(n);
            p = head;
        }
        else
        {
            p->next = new Node<int>(n);
            p = p->next;
        }
    }
    p = head;
    show(p);

    cin >> n;
    p = head;
    Node<int> *q = NULL;
    while (p != NULL)
    {
        if (p->getData() == n)
        {
            if (p == head)
            {
                head = p->next;
                delete p;
                p = head;
            }
            else
            {
                q->next = p->next;
                delete p;
                p = q->next;
            }
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    p = head;
    show(p);
    // clear
    p = head;
    while (p != NULL)
    {
        q = p;
        p = p->next;
        delete q;
    }
    return 0;
}
