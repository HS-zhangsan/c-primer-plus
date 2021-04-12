#include <stdio.h>
double min(double x, double y);
double get_double(void);

int main(void)
{
	double x, y;

	printf("Please enter two numbers:\n");
	printf("x = ");
	
	x = get_double();
	
	printf("y = ");
	
	y = get_double();

	printf("The smaller of %.2lf and %.2lf is %.2lf.\n",
		x, y, min(x, y));
	printf("Done.\n");

	return 0;
}

double min(double x, double y)
{
	return (x < y ? x : y);
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

		printf(" is not number, please re-enter:");
	}

	rewind(stdin);

	return input;
}