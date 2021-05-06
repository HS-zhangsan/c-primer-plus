//编写一个程序，声明一个int类型的3×5二维数组，并用合适的值初始化它。
//该程序打印数组中的值，然后各值翻倍（即是原值的2倍)，并显示出各元素的新值。
//编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。
//这两个函数都以函数名和行数作为参数。

#include <stdio.h>

int show(int ar[][5], int n);
int doubling(int ar[][5], int n);

int main(void)
{
	int array[3][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 2, 3, 4, 5, 6 },
		{ 6, 7, 8, 9, 10 }
	};

	printf("The array[3][5] = ");
	show(array, 3);

	doubling(array, 3);
	
	printf("Now the array[3][5] = ");
	show(array, 3);

	printf("Done.Bye~");

	return 0;
}

int show(int ar[][5], int n)
{
	int i, j;

	printf("{");
	for (i = 0; i < n; i++)
	{
		printf("\n    { ");
		for (j = 0; j < 5; j++)
		{
			printf("%3d ", ar[i][j]);
		}
		printf("},");
	}
	printf("\b\n    }.\n");
}

int doubling(int ar[][5], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			ar[i][j] *= 2;
		}
	}
}