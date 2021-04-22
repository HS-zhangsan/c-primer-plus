//编写一个函数，把double类型数组中的数据倒序排列
//测试不用理...

#include <stdio.h>
#define N 5

void reverse(double a[], int n);
void show_array(const double a[], int n);

int main(void)
{
    double array[N] = { 1.0, 4.0, 3.0, 2.0, 5.0 };

    printf("Array:\n");
    show_array(array, N);
    reverse(array, N);
    printf("After reversing:\n");
    show_array(array, N);

    return 0;
}

void reverse(double a[], int n)
{
    int i, t;

    for (i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    return;
}

void show_array(const double a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%-5g", a[i]);
    }
    putchar('\n');
    return;
}