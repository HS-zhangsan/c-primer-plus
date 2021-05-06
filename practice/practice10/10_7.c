//��дһ�����򣬳�ʼ��һ�� double ���͵Ķ�ά���飬ʹ��һ����������
//�Ѹ������е����ݿ�������һ����ά������(��Ϊ��ά��������������飬
//���Կ���ʹ�ô���һά����Ŀ������������������е�ÿ��������)��

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