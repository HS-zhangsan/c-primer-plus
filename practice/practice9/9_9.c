//编写计算一个数的整数幂的函数
//底数和指数为零时单独讨论
//提示 0 的 0 次方未定义，规定为 1
//使用递归函数
	

#include <stdio.h>
double power(double n, int p);

int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the integer power to which\n");
	printf("the number will be raised (q to quit):\n");

	while (scanf_s("%lf%d", &x, &exp) == 2)
	{
		if (x == 0 && exp == 0)
		{
			printf("The 0th power of 0 is undefined,"
				" and we treat its value as 1.\n");
		}
		else
		{
			xpow = power(x, exp);

			printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		}

		printf("Enter next pair of numbers or q to quit.\n");
	}

	printf("Done.\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1;

	if (p > 0)
	{
		pow = n * power(n, p - 1);
	}
	else if (p < 0)
	{
		pow = power(n, p + 1) / n;
	}
	else
	{
		pow = 1;
	}

	return pow;
}