//��дһ�����������������������Ӧ��Ԫ����ӣ�Ȼ��ѽ�����浽��3�������С�
//Ҳ����˵���������1�а�����ֵ��2��4��5��8������2�а�����ֵ��1��0��4��6��
//��ô�ú�����3��4,9��14������3�����顣��������3����������һ�������С��

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