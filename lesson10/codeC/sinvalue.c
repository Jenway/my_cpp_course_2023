/**求正弦值*/ 
#include <stdio.h>
#include <math.h>
#define LEN 100000
int main()
{
    //数据初始化
    double src[LEN] = {0};
    double dst1[LEN] = {0};
    double dst2[LEN] = {0};
    for (int i = 0; i < LEN; i++) {
        src[i] = i;
    }

    long t;
    //使用系统数学库对向量中每个元素求正弦值
    for (int i = 0; i < LEN; i++) {
        dst1[i] = sin(src[i]);
    }
    for (int i = 0; i < LEN; i++) {
            printf( "正弦值%d:",dst1[i]);
    }

    return 0;
}