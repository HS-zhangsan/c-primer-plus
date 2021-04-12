#include <stdio.h>

int check_letter(char ch);

int main(void)
{
	int position;
	char ch;

	printf("Enter some charcters:\n");

	while ((ch = getchar()) != EOF)
	{	
		position = check_letter(ch);

		if (position != -1)
		{
			printf("\'%c\' is a letter, and it is in the"
				" %d of the alphabet.\n", ch, position);
		}
	}

	return 0;
}

int check_letter(char ch)
{
	int position;

	if (ch >= 'a' && ch <= 'z')
	{
		position = (int)ch - 96;
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		position = (int)ch - 64;
	}
	else
	{
		position = -1;
	}

	return position;
}