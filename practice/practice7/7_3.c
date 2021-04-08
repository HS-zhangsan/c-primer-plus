#include <stdio.h>
int main(void)
{
	int number;
	int sum1 = 0, sum2 = 0;
	int count1 = 0, count2 = 0;
	double average1, average2;

	printf("Enter an integer(0 to quit):\n");
	
	while ((scanf_s("%d", &number) == 1) && (number != 0))
	{
		
		if ((number % 2) == 1)
		{
			sum1 += number;
			count1++;
		}
		else
		{
			sum2 += number;
			count2++;
		}

		printf("Enter next integer(0 to quit):\n");
	}
	
	average1 = sum1 / count1;
	average2 = sum2 / count2;

		printf("A total of %d odd numbers were entered.\n", count1);
	if (count1 > 0)
	{
		printf("The average of odd is %.2lf.\n", average1);
	}

	printf("A total of %d even numbers were entered.\n", count2);
	if (count2 > 0)
	{
		printf("The average of even is %.2lf.\n", average2);
	}

	printf("Done.\n");

	return 0;
}