#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;

	printf("Enter some charcters:\n");

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			printf("!");
			count++;
		}
		else if (ch == '!')
		{
			printf("!!");
			count++;
		}
		else
		{
			printf("%c", ch);
		}
	}

	printf("A total of %d replacements were made.\n", count);
	printf("Done.");

	return 0;
}