//在一个循环中编写并测试一个函数，该函数返回它被调用的次数。

#include <stdio.h>

static int count = 0;

int counter(void);

int main(void)
{
    int i, j, k;
    printf("Please enter a integer: ");
    scanf_s("%d", &i);

    for (j = 1; j <= i; j++)
    {
        printf("count = %d\n", counter());
    }
    printf("The function called %d times.\n", count);

    return 0;
}

int counter(void)
{
    return ++count;
}
