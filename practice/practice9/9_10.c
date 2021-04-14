//��� to_base_n() ������������������
//��һ����ʮ���������ڶ�����ָ���Ľ��ƣ�2-10��
//�����������ת��Ϊָ�����Ƶĵ�Чֵ

#include <stdio.h>

void to_base_n(unsigned long n, int p);

int main(void)
{
	unsigned long number;
	int base;

	printf("Enter an integer (q to quit):\n");

	while (scanf_s("%lu", &number) == 1)
	{
		printf("Enter the base you want to convert to (2 - 10):\n");

		scanf_s("%d", &base);

		printf("%d���Ƶ�Чֵ: ", base);

		to_base_n(number, base);
		printf("\n");
		printf("Enter an integer (q to quit):\n");
	}

	printf("Bye~\n");

	return 0;
}

void to_base_n(unsigned long n, int p)
{
	int r;

	r = n % p;

	if (n >= p)
	{
		to_base_n(n / p, p);
	}
	printf("%d", r == 0 ? 0 : r);

	return;
}