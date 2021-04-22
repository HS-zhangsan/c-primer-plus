//编写一个函数，
//返回储存在double类型数组中的最大值的下标

#include <stdio.h>
int index_of_max(int ar[], int n);


int main(void)
{
	int i;
	double arr[8];

	printf("Enter eight number:\Sn");

	for (i = 0; i < 8; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%lf", &arr[i]);
	}

	printf("The index of maximum number is %d.", index_of_max(arr, 8));


	return 0;
}

int index_of_max(double ar[], int n)
{
	int i, index;
	double max = ar[0];

	for (i = 0; i < n; i++)
	{
		if (max < ar[i])
		{
			max = ar[i];
			index = i;
		}
	}

	return index;
}