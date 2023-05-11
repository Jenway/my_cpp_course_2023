// lab10_1

#include <deque>
#include <iostream>
// 要求使用deque 类的方法 push_back(),pop_front(), empty()
using namespace std;
int main(void) {
  // 实现链表类，然后把分别把输入5个整数的链表B的元素插到链表A的后面
  deque<int> A, B;
  int temp;
  for (int i = 0; i < 5; i++) {
    cin >> temp;
    A.push_back(temp);
  }
  for (int i = 0; i < 5; i++) {
    cin >> temp;
    B.push_back(temp);
  }
  while (!B.empty()) {
    A.push_back(B.front());
    B.pop_front();
  }
  for (int i = 0; i < 10; i++) {
    cout << A.front() << " ";
    A.pop_front();
  }
}