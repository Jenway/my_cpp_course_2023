#include <iostream>

int main() {
    int a =10;
    const int *p = &a;
    int *q=p;
    std::cout << "Hello World!" << std::endl;
    return 0;
}