#include <stdio.h>
#define DUNBARS_NUMBER 150

int main(void)
{
	int friends, weeks;

	for (friends = 5, weeks = 1; friends <= DUNBARS_NUMBER; weeks++)
	{
		friends = (friends - 1) * 2;

		if (weeks == 1)
			printf("Dr.Rabnud has %d friends after %d week.\n", friends, weeks);
		else
			printf("Dr.Rabnud has %d friends after %d weeks.\n", friends, weeks);
	}

	printf("The Dunbar's number of Dr.Rabnud is %d.\n", friends);

	return 0;
}