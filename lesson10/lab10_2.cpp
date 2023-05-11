// lab10_2

#include <algorithm>
#include <array>
#include <iostream>
#include <functional>

using namespace std;

int main(void)
{

    array<int, 8> arr = {3,7,1,4,2,6,9,5};
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    // 使用 STL 中的算法 find 进行数据的查找,输出 indice
    auto indice = find(arr.begin(), arr.end(), 2);
    cout << "find 2 at "<< indice - arr.begin() << endl;
    // 使用 sort 和标准函数对象 Greater进行升序和降序排序
    // 升序排序
    sort(arr.begin(), arr.end());
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    // 降序排序
    sort(arr.begin(), arr.end(), greater<int>());
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}