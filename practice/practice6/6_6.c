#include <stdio.h>
int main(void)
{
	int upper, lower;
	int square, cube;

	printf("Please enter two integers "
		"as the lower and upper limits:");
	scanf_s("%d %d", &lower, &upper);
	printf("    number         square           cube\n");

	for (; lower <= upper; lower++)
	{
		square = lower * lower;
		cube = square * lower;

		printf("%10d%15d%15d\n",lower,square,cube);
	}

	return 0;
}