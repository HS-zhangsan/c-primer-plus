//дһ����������ѭ��������ӡ쳲�������
//����һ��������Ϊ��ӡ�ĸ���

#include <stdio.h>

void Fibonacci(int time);

int main(void)
{
	int number;

	printf("Enter an integer number: ");

	while (scanf_s("%d", &number) == 1)
	{
		printf("The first %d Fibonacci numbers are as follows:\n", number);

		Fibonacci(number);

		printf("\nEnter next number (q to quit): ");
	}

	printf("Bye~");

	return 0;
}

void Fibonacci(int time)
{
	unsigned long long x, y, z;
	int count = 0;

	x = 0;
	y = 1;

	while (count++ < time)
	{
		printf(" | %llu\n", x);

		z = x + y;
		x = y;
		y = z;
	}
}