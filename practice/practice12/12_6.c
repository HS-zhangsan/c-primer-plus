/*
* 编写一个程序，生成1000个1~10范围内的随机数。
* 不用保存或打印这些数字，仅打印每个数出现的次数。
* 用10个不同的种子值运行，生成的数字出现的次数是否相同?
* 可以使用ANSIC的rand()和srand()函数。
* 这是一个测试特定随机数生成器随机性的方法。
*/

#include <stdio.h>
#include <stdlib.h>
#define N 10
#define LEN 1000

int main(void)
{
    int i, temp, a[N + 1];
    unsigned int seeds;

    for (seeds = 1; seeds <= N; seeds++)
    {
        printf("Time #%d:\n", seeds);
        srand(seeds);
        for (i = 0; i < N + 1; i++)
        {
            a[i] = 0;
        }
        for (i = 0; i < LEN; i++)
        {
            temp = rand() % 10 + 1;
            a[temp]++;
        }
        for (i = 1; i < N + 1; i++)
        {
            printf("%-3d appeared %d times.\n", i, a[i]);
        }
        printf("Total random numbers: %d\n\n", LEN);
    }

    return 0;
}