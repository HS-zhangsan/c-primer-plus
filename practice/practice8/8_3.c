#include <stdio.h>

int main(void)
{
	int ch;
	int upper = 0, lower = 0;

	printf("Enter some characters:\n");

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			upper++;
		}		
		if (ch >= 'a' && ch <= 'z')
		{
			lower++;
		}
	}

	printf("Upper case letters: %d\n", upper);
	printf("Lower case letters: %d\n", lower);
	printf("Byes~");

	return 0;
}