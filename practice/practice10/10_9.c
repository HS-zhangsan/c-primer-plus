/*
* 编写一个程序，初始化一个double类型的3×5二维数组，
使用一个处理变长数组的函数将其拷贝至另一个二维数组中。
还要编写一个以变长数组为形参的函数以显示两个数组的内容。
这两个函数应该能处理任意NXM数组(如果编译器不支持变长数组,
就使用传统C函数处理NX5的数组)。
*/

#include <stdio.h>

void copy_arr(double ar[][5], double tar[][5], int n);
void show_arr(double ar[][5], int n);

int main(void)
{
	const int row = 3, col = 5;
	double source[3][5] = {
		{ 1.1, 1.2, 1.3, 1.4, 1.5 },
		{ 2.1, 2.2, 2.3, 2.4, 2.5 },
		{ 3.1, 3.2, 3.3, 3.4, 3.5 }
	};
	double target[3][5];

	copy_arr(source, target, 3);

	printf("source[3][5]:\n");
	show_arr(source, 3);

	printf("target[3][5]:\n");
	show_arr(target, 3);

	printf("Done.\n");

	return 0;
}

void copy_arr(double ar[][5], double tar[][5], int n)
{
	int row, col;

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < 5; col++)
		{
			tar[row][col] = ar[row][col];
		}
	}
}

void show_arr(double ar[][5], int n)
{
	int row, col;

	for (row = 0; row < n; row++)
	{
		printf("row %d: ", row);
		for (col = 0; col < 5; col++)
		{
			printf("%3.2lf, ", ar[row][col]);
		}
		printf("\b\b.\n");
	}
}