#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[20];
	int j;

	printf("Enter a word:");
	scanf_s("%s", &word, 20);

	for (j = strlen(word) - 1; j >= 0; j--)
	{
		printf("%c", word[j]);
	}

	printf("\n");
	return 0;
}