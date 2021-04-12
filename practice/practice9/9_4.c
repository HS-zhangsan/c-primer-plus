#include <stdio.h>

double harmonic_mean(double, double);
double get_double(void);

int main(void)
{
	double num1, num2;

	printf("Enter two non-zero numbers (0 to quit):\n");

	num1 = get_double();
	num2 = get_double();

	while (num1 != 0 && num2 != 0)
	{
		printf("The harmonic mean of %.2lf and %.2lf is %.2lf.\n",
			num1, num2, harmonic_mean(num1, num2));
		break;
	}

	printf("Done.\n");

	return 0;
}

double harmonic_mean(double x, double y)
{
	return (1 / (1 / x + 1 / y));
}

double get_double(void)
{
	double input;
	char ch;

	while ((scanf_s("%lf", &input)) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}

		printf(" is not number, please re-enter: ");
	}

	rewind(stdin);

	return input;
}