#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
	char a, b;

	printf("Enter the first charcter: ");
	scanf_s("%c", &a, 1);
	rewind(stdin);
	printf("Enter the second charcter: ");
	b = get_first();
	printf("a: %c - %d\nb: %c - %d", a, a, b, b);

	return 0;
}

char get_first(void)
{
	int ch;
	
	do
	{
		ch = getchar();
	} while (isspace(ch));

	while (getchar() != '\n')
	{
		continue;
	}

	return ch;
}