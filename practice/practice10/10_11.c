//��дһ����������һ��int���͵�3��5��ά���飬���ú��ʵ�ֵ��ʼ������
//�ó����ӡ�����е�ֵ��Ȼ���ֵ����������ԭֵ��2��)������ʾ����Ԫ�ص���ֵ��
//��дһ��������ʾ��������ݣ��ٱ�дһ�������Ѹ�Ԫ�ص�ֵ������
//�������������Ժ�������������Ϊ������

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