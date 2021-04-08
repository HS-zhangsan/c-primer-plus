#include <stdio.h>
#define STOP '#'

int main(void)
{
	int space = 0, enter = 0, others =0;
	char ch = 0;

	printf("Please enter some character:\n");

	while ((ch = getchar()) != STOP)
	{
		if (ch == ' ')
		{
			space++;
		}
		else if (ch == '\n')
		{
			enter++;
		}
		else
			others;
	}

	printf("Enter = %d\n", enter);
	printf("Linefeed = %d\n", space);
	printf("Other = %d\n", others);

	return 0;
}