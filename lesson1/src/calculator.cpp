#include <iostream>
using namespace std;

void outAns(float x, char method, float y, float ans);
int main(void)
{
    float x = 0, y = 0;
    char method = 0;
    cin >> x >> method >> y;
    switch (method)
    {
    case '+':
        outAns(x, method, y, x + y);

        break;
    case '-':
        outAns(x, method, y, x - y);

        break;
    case '*':
        outAns(x, method, y, x * y);
        break;
    case '/':
        if (y == 0)
        {
            cout << "除数不能为 0 " << endl;
        }
        else
        {
            outAns(x, method, y, x / y);
        }
        break;
    default:
        outAns(x, method, y, x * y);
        break;
    }
    cout << "End" << endl;
    return 0;
}
inline void outAns(float x, char method, float y, float ans)
{
    cout << x << " " << method << " " << y << " = " << ans << endl;
}
