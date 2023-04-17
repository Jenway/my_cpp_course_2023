#include <iostream>

using namespace std;

void transMatrix(int **p);

int main(void)
{
    int **example = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        example[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            example[i][j] = i * 3 + j + 1;
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

void transMatrix(int **P)
{
    int temp[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i][j] = P[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            P[i][j] = temp[i][j];
        }
    }
}