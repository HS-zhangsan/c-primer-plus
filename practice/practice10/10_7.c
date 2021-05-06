//编写一个程序，初始化一个 double 类型的二维数组，使用一个拷贝函数
//把该数组中的数据拷贝至另一个二维数组中(因为二维数组是数组的数组，
//所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组)。

#include <stdio.h> 

void copy_arr(double[], double[], int);

int main(void)
{
	int i,j;
	double source[4][5] = {
		{1.1, 1.2, 1.3, 1.4, 1.5},
		{2.1, 2.2, 2.3, 2.4, 2.5},
		{3.1, 3.2, 3.3, 3.4, 3.5},
		{4.1, 4.2, 4.3, 4.4, 4.5}
	};
	double target[4][5];

	for (i = 0; i < 4; i++)
	{
		copy_arr(target[i], source[i], 5);
	}

	printf("source[4][5] = {");
	for (i = 0; i < 4; i++)
	{
		printf("\n{");
		for (j = 0; j < 5; j++)
		{
			printf("%3.2lf, ", source[i][j]);
		}
		printf("\b\b},");
	}
	printf("\b\n};\n");

	printf("target[4][5] = {");
	for (i = 0; i < 4; i++)
	{
		printf("\n{");
		for (j = 0; j < 5; j++)
		{
			printf("%3.2lf, ", target[i][j]);
		}
		printf("\b\b},");
	}
	printf("\b\n};\n");

	printf("Done.\n");

	return 0;
}

void copy_arr(double target[], double source[], int n)
{
	int i = 0;

	while (i < n)
	{
		target[i] = source[i];
		i++;
	}
}