#include <stdio.h>

void compare(double*, double*, double*);
double get_double(void);

int main(void)
{
	double num1, num2, num3;

	printf("Please enter three numbers: \n");

	num1 = get_double();
	num2 = get_double();
	num3 = get_double();

	compare(&num1, &num2, &num3);

	printf("The relationship between these three numbers is:\n");
	printf("%.2lf > %.2lf > %.2lf\n", num1, num2, num3);
	printf("Done.\n");

	return 0;
}

void compare(double* px, double* py, double* pz)
{
	double max, min;

	if (*px > *py)
	{
		max = *pz;
		min = *py;
	}
	else
	{
		max = *py;
		min = *px;
	}

	if (max > *pz && min < *pz)
	{
		*px = min;
		*pz = max;
	}
	else if (max < *pz)
	{
		*px = *pz;
		*py = max;
		*pz = min;
	}
	else
	{
		*pz = *px;
		*px = max;
		*py = min;
	}
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


		printf(" is not number, please re-ennter: ");
	}

	rewind(stdin);
	return input;
}