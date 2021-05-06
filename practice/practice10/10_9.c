/*
* ��дһ�����򣬳�ʼ��һ��double���͵�3��5��ά���飬
ʹ��һ������䳤����ĺ������俽������һ����ά�����С�
��Ҫ��дһ���Ա䳤����Ϊ�βεĺ�������ʾ������������ݡ�
����������Ӧ���ܴ�������NXM����(�����������֧�ֱ䳤����,
��ʹ�ô�ͳC��������NX5������)��
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