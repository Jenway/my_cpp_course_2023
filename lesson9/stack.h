#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack
{
private:
    struct Node
    {
        T data;
        Node *next;
        Node(const T &d, Node *n = nullptr) : data(d), next(n) {}
        Node() : next(nullptr) {}
    };
    Node *top;
    int size;
    int m_max;

public:
    Stack(int max = 10);
    ~Stack();
    bool push(const T &d);
    bool pop();
    bool isEmpty() const;
    bool isFull() const;
    T show() const;
};
#endif

template <typename T>
Stack<T>::Stack(int max)
{
    this->m_max = max;
    top = nullptr;
    size = 0;
}

template <typename T>
Stack<T>::~Stack()
{
    Node *temp;
    while (top != nullptr)
    {
        temp = top;
        top = top->next;
        delete temp;
    }
}

template <typename T>
bool Stack<T>::push(const T &d)
{
    if (isFull())
        return false;
    Node *temp = new Node(d, top);
    top = temp;
    size++;
    return true;
}

template <typename T>
bool Stack<T>::pop()
{
    if (isEmpty())
    {
        return false;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
    size--;
    return true;
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return size == 0 ? true : false;
}

template <typename T>
bool Stack<T>::isFull() const
{
    return size == this->m_max ? true : false;
}

template <typename T>
T Stack<T>::show() const
{
    Node *temp = top;
    return temp->data;
}