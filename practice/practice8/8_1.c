#include <stdio.h>

int main(void)
{
	int ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		count++;
	}

	printf("The file has %d characters.", count);

	return 0;
}
