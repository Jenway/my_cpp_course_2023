// 这个程序将输出一个心形图案

#include <stdio.h>
#include <math.h>
#include <omp.h>
#define LEN 100

int main(void)
{
    // 心形公式 x^2+(5/4)y^2-1=0
    // 1.0/LEN 为步长
    // 1.0/LEN*i 为x
    // 1.0/LEN*j 为y
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            if (pow(1.0 / LEN * i, 2) + pow(1.0 / LEN * j, 2) - 1 <= 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}