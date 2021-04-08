#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;

	printf("Enter some charcters:\n");

	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			if ((ch = getchar()) == 'i')
			{
				count++;
			}
		}
	}

	printf("\"ei\" has appeared %d times in total.\n", count);
	printf("Done.");

	return 0;
}