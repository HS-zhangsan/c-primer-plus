//编写一个函数，把两个数组中相对应的元素相加，然后把结果储存到第3个数组中。
//也就是说，如果数组1中包含的值是2、4、5、8，数组2中包含的值是1、0、4、6，
//那么该函数把3、4,9、14赋给第3个数组。函数接受3个数组名和一个数组大小。

#include <stdio.h>

void add(double ar1[], double ar2[], double  sum[], int n);
void show(double ar[], int n);

int main(void)
{
	double arr1[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double arr2[5] = { 5.5, 4.4, 3.3, 2.2, 1.1 };
	double sum[5];

	add(arr1, arr2, sum, 5);

	printf("arr1[5] = ");
	show(arr1, 5);
	printf("arr2[5] = ");
	show(arr2, 5);
	printf("sum[5] = ");
	show(sum, 5);
	printf("Done.\n");

	return 0;
}

void add(double ar1[], double ar2[], double  sum[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		sum[i] = ar1[i] + ar2[i];
	}
}

void show(double ar[], int n)
{
	int i;

	printf("{ ");
	for (i = 0; i < n; i++)
	{
		printf("%.1lf ", ar[i]);
	}
	printf("}\n");
}