#include <stdio.h>
int main(main)
{
	double num1, num2, num3;
	int ret;

	printf("Please enter two floating point numbers: ");
	ret = scanf_s("%lf %lf", &num1, &num2);

	while (ret == 2)
	{
		printf("(%.2lf - %.2lf) / (%.2lf * %.2lf) = %.2lf\n",
			num1, num2, num1, num2,
			(num1 - num2) / (num1 * num2));
		printf("Please enter the next two floating "
			"point numbers(q to quit): ");
		ret = scanf_s("%lf %lf", &num1, &num2);
	}

	puts("Done!");

	return 0;
}