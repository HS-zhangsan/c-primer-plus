#include <stdio.h>
int main(void)
{
	char ch;
	int i, j;

	for (i = 1; i <= 6; i++)
	{

		for (j = 1, ch = 'F'; j <= i; j++, ch--)
			printf("%c",ch);
		printf("\n");
	}
}