#include <stdio.h>
#define STOP '#'

int main(void)
{
	char ch;
	int count = 0;

	printf("Enter some charcter:\n");

	while ((ch = getchar()) != STOP)
	{
		if (count++ % 8 == 0)
		{
			printf("\n");
		}

		if (ch == '\n')
		{
			printf("'\\n' - %3d|", ch);
		}
		else if (ch == '\t')
		{
			printf("'\\t' - %3d|", ch);
		}
		else
		{
			printf("'%2c' - %3d|", ch, ch);
		}
	}

	printf("Done.");
	return 0;
}