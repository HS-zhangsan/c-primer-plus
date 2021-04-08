#include <stdio.h>
int main(void)
{
	int root, times;
	int parity = -1;
	double sum1 = 0;
	double sum2 = 0;


	printf("Enter the times:");
	scanf_s("%d", &times);

	while (times > 0)
	{
		for (root = 1; root <= times; root++)
		{
			parity *= -1;
			sum1 += (1.0 / root);
			sum2 += ((1.0 / root) * parity);
		}

		printf("sum1 = %lf  sum2 = %lf.\n", sum1, sum2);
		printf("sum1 + sum2 = %lf.\n", sum1 + sum2);
		printf("Enter the next number(0 to quit):");
		scanf_s("%d", &times);
	}

	printf("OK,I hope you have seen the pattern.\nBye~");

	return 0;
}

//看不出来有什么规律.....