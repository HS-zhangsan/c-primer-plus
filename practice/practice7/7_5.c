#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;

	printf("Enter some charcters:\n");

	while ((ch = getchar()) != '#')
	{
		switch (ch) {
		case '.':
			printf("!");
			count++;
			continue;
		case '!':
			printf("!!");
			count++;
			continue;
		case '\n':
			break;
		default:
			printf("%c", ch);
			continue;
		}

		printf("\nA total of %d replacements were made.\n", count);
		printf("Done.");
	}

	return 0;
}