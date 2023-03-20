#include <iostream>
using namespace std;

bool isOven(int num);
int main(void)
{
    int num = 0;
    cin >> num;
    while (num != 1)
    {
        if (isOven(num))
        {
            cout << num << "/ 2 = " << (num/2)<<endl;
            num/=2;
        }
        else
        {
            cout << num <<" * 3 + 1 = "<< (num*3+1)<<endl;
            num = num * 3 + 1;
        }
    }
    cout << "End"<<endl;
    return 0;
}

inline bool isOven(int num)
{
    return num % 2 == 0 ? true : false;
}
