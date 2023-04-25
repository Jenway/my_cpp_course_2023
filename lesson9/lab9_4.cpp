#include "Array.h"

#include <iostream>
#include <random>

using namespace std;

void initArray(Array<int> &a)
{

    // 用C++11的随机数生成器,生成随机数据 10 个
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100);
    for (int i = 0; i < a.getSize(); i++)
    {
        a[i] = dis(gen);
    }
}

void show(Array<int> &a)
{
    for (int i = 0; i < a.getSize(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    // 将直接插入排序、直接选择排序、冒泡排序、顺序查找函数封装成成员函数，并在main函数中测试
    Array<int> a(10);

    cout << "insertSort: " << endl;
    initArray(a);
    show(a);
    a.insertSort();
    show(a);

    cout << "selectSort: " << endl;
    initArray(a);
    show(a);
    a.selectSort();
    show(a);

    cout << "bubbleSort: " << endl;
    initArray(a);
    show(a);
    a.bubbleSort();
    show(a);

    cout << "search: " << endl;
    initArray(a);
    show(a);
    int temp;
    cin >> temp;
    cout << a.search(temp) + 1 << endl;

    return 0;
}
