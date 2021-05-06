#include <stdio.h>

void copy_arr(double[], double[], int);

int main(void)
{
	int i;
	double source[8] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
	double target[3];

	copy_arr(target, &source[2], 3);

	printf("source[8] = {");
	for (i = 0; i < 8; i++)
	{
		printf("%.2lf, ", source[i]);
	}
	printf("\b\b};\n");

	printf("target[3] = {");
	for (i = 0; i < 3; i++)
	{
		printf("%.2lf, ", target[i]);
	}
	printf("\b\b};\n");

	printf("Done.\n");

	return 0;
}

void copy_arr(double target[], double source[], int n)
{
	int i = 0;

	while (i < n)
	{
		target[i] = source[i];
		i++;
	}
}