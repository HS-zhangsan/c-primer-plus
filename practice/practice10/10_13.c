// 编写一个程序，提示用户输入3组数，每组数包含5个double类型的数
// （假设用户都正确地响应，不会输入非数值数据)。
// 该程序应完成下列任务。
// a．把用户输入的数据储存在3×5的数组中
// b.计算每组(5个)数据的平均值
// c.计算所有数据的平均值
// d.找出这15个数据中的最大值

#include <stdio.h>

int main(void)
{
	int i, j;
	double tot, max;
	double total = 0;
	double number[3][5];

	printf("Enter three sets of numbers, each set of five numbers.\n");

	for (i = 0; i < 3; i++)
	{
		printf("number[%d] = ", i);
		for (j = 0; j < 5; j++)
		{
			scanf_s("%lf", &number[i][j]);
		}
	}

	max = number[0][0];

	for (i = 0; i < 3; i++)
	{
		for (j = 0, tot = 0; j < 5; j++)
		{
			max = (max > number[i][j] ? max : number[i][j]);
			tot += number[i][j];
		}
		total += tot;
		printf("The average of num[%d] is %.2lf.\n", i, tot / 3);
	}
	printf("The average of all numbers is %.2lf.\n", total / 15);
	printf("The largest of all numbers is %.2lf.\n", max);
	printf("Done.\n");

	return 0;
}