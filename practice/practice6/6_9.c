#include <stdio.h>
double calculation(double, double);

int main(main)
{
	double num1, num2, num3;

	printf("Please enter two floating point numbers: ");
	



	while (scanf_s("%lf %lf", &num1, &num2) == 2)
	{
		num3 = calculation(num1, num2);

		printf("(%.2lf - %.2lf) / (%.2lf * %.2lf) = %.2lf\n",
			num1, num2, num1, num2, num3);
		printf("Please enter the next two floating "
			"point numbers(q to quit): ");
	}
	

	puts("Done!");

	return 0;
}

double calculation(double temp1, double temp2)
{
	return (temp1 - temp2) / (temp1 * temp2);
}