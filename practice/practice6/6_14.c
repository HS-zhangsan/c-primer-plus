#include <stdio.h>
int main(void)
{
	double num[8], sum[8];
	int count;

	printf("Enter eight floating point numbers:\n");
	
	for (count = 0; count < 8; count++)
		scanf_s("%lf", &num[count]);
	
	sum[0] = num[0];
	for(count = 1; count < 8; count++)
		sum[count] = num[count] + sum[count - 1];

	for (count = 0; count < 8; count++)
		printf("%10.2lf", num[count]);

	printf("\n");

	for (count = 0; count < 8; count++)
		printf("%10.2lf", sum[count]);

	return 0;
}