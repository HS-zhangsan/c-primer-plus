#include <stdio.h>
int main(void)
{
	int numbers[8];
	int count;

	for (count = 1, numbers[0] = 2; count < 8; count++)
		numbers[count] = 2 * numbers[count - 1];

	count = 0;

	do {
		printf("%d ", numbers[count++]);
	} while (count < 8);

	return 0;
}