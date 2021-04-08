#include <stdio.h>
int main(void)
{
	char ch;
	int i, j;

	printf("Enter a character: ");
	scanf_s("%c", &ch);

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%c", ch);
		printf("\n");
	}
}