#include <stdio.h>

void larger_of(double*, double*);
double get_double(void);

int main(void)
{
	double num1, num2;

	printf("Enter two number: \n");

	num1 = get_double();
	num2 = get_double();

	larger_of(&num1, &num2);

	printf("Now, num1 = %.2lf, num2 = %.2lf.\n", num1, num2);
	printf("Done.\n");

	return 0;
}

void larger_of(double* x, double* y)
{
	*x = (*x > *y ? *x : *y);
	*y = (*x > *y ? *x : *y);
}

double get_double(void)
{
	double input;
	char ch;

	while (scanf_s("%lf", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}

		printf(" is not number, please re-enter: ");
	}

	return input;
}