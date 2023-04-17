#include <iostream>
using namespace std;

void transMatrix(int a[3][3]);

int main(void)
{
    int example[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << example[i][j] << " ";
        }
        cout << endl;
    }

    transMatrix(example);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << example[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void transMatrix(int a[3][3])
{
    int temp[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = temp[i][j];
        }
    }
}