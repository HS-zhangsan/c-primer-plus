// ��дһ��������ʾ�û�����3������ÿ��������5��double���͵���
// �������û�����ȷ����Ӧ�������������ֵ����)��
// �ó���Ӧ�����������
// a�����û���������ݴ�����3��5��������
// b.����ÿ��(5��)���ݵ�ƽ��ֵ
// c.�����������ݵ�ƽ��ֵ
// d.�ҳ���15�������е����ֵ

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