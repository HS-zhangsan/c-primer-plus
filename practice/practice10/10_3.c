//编写一个函数，
//返回储存在int类型数组中的最大值

#include <stdio.h>
int max(int ar[], int n);

int main(void)
{
	int i;
	int arr[8];

	printf("Enter eight integers:\n");

	for (i = 0; i < 8; i++)
	{
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("The max number is %d.", max(arr, 8));


	return 0;
}

int max(int ar[], int n)
{
	int i = 2;
	int max = (ar[0] > ar[1] ? ar[0] : ar[1]);

	while (i < n)
	{
		max = (max > ar[i] ? max : ar[i]);
		i++;
	}

	return max;
}