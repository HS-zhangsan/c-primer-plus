#include <stdio.h>
int main(void)
{
	int i, j;

	printf("This program computes moduli.\n"
	    "Enter an integer to serve as the second operand:");
	scanf_s("%d", &i);
	printf("Now enter the first operand:");
	scanf_s("%d", &j);
	printf("%d %% %d is %d\n",j, i, j % i);

	while (j > 0)
	{
		printf("Enter next number for first operate (<= 0 to quit):");
		scanf_s("%d", &j);

		if(j > 0)
		    printf("%d %% %d is %d\n", j, i, j % i);
	}

	puts("Done");
	return 0;
}