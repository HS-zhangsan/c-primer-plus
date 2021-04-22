//编写一个函数，返回储存在double类型数组中最大值和最小值的差值

#include <stdio.h>

double difference(double ar[], int n);

int main(void)
{
	int i;
	double arr[8];

	printf("Enter eight number:\n");

	for (i = 0; i < 8; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%lf", &arr[i]);
	}

	printf("The difference between the largest number and "
		"the smallest number is %.2lf.", difference(arr, 8));

	return 0;
}

double difference(double ar[], int n)
{
	int i;
	double max = ar[0], min = ar[0];

	for (i = 1; i < n; i++)
	{
		if (max < ar[i])
		{
			max = ar[i];
		}

		if (min > ar[i])
		{
			min = ar[i];
		}
	}

	return (max - min);
}