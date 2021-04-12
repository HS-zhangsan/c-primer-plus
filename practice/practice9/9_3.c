#include <stdio.h>
void chline(char, int, int);
int get_int(void);

int main(void)
{
	int i, j;
	char ch;

	printf("please enter the charcter you want: ");

	ch = getchar();
	rewind(stdin);

	printf("Please enter the number of rows you want to print: ");
	i = get_int();
	printf("Please enter the number of columns you want to print: ");
	j = get_int();

	chline(ch, i, j);

	printf("Done.\n");

	return 0;
}

void chline(char ch, int i, int j)
{
	int count1, count2;

	for (count1 = 0; count1 < j; count1++)
	{
		for (count2 = 0; count2 < i; count2++)
		{
			printf("%c", ch);
		}

		printf("\n");
	}
}

int get_int(void)
{
	int input;
	char ch;

	while (scanf_s("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}

		printf(" is not integer, please re-enter: ");
	}

	rewind(stdin);

	return input;
}
////////没看出和9_2有什么区别？？？？