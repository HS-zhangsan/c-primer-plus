#include <stdio.h>
int main(void)
{
	int lower, upper, total;

	printf("Enter lower and upper inter limits: ");
	scanf_s("%d %d", &lower, &upper);

	while (lower < upper)
	{
		for (total = 0; lower <= upper; lower++)
			total = total + lower * lower;

		printf("The sums of the square from %d to %d is %d\n",
				lower, upper, total);
		printf("Enter next set of limits: ");
		scanf_s("%d %d", &lower, &upper);
	}

	puts("Done!");
	return 0;
}