#include <stdio.h>
double cube(double);

int main(void)
{
	double n;

	printf("Enter a double type number:\n");
	scanf_s("%lf",&n);
	printf("The cube of %.4lf is %.4lf\n",n,cube(n));

	return 0;
}

double cube(double x)
{
	return x * x * x;
}