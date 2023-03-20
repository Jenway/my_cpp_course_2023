#include <iostream>
#include <cmath>

#define LENGTH 2
#define HEIGHT 2
#define XPACE 0.05
#define YPACE 0.1

bool isHeart(float x, float y);

using namespace std;

int main(void)
{
    for (float y = HEIGHT; y > (0 - HEIGHT); y -= YPACE)
    {
        for (float x = (0 - LENGTH); x < LENGTH; x += XPACE)
        {

            if (isHeart(x, y))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "End" << endl;
    return 0;
}

inline bool isHeart(float x, float y)
{
    // (x^2+y^2-1)^3 =x^2 * y^3
    return pow((x * x + y * y - 1), 3) - x * x * y * y * y <= 0 ? true : false;
}