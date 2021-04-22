#include <stdio.h>

void copy_arr(double[], double[], int);
void copy_ptr(double*, double*, int);
void copy_ptrs(double[], double[], double*);

int main(void)
{
	int i;
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);

	printf("source[5] = {");
	for (i = 0; i < 5; i++)
	{
		printf("%.1lf, ", source[i]);
	}
	printf("\b\b};\n");

	printf("target1[5] = {");
	for (i = 0; i < 5; i++)
	{
		printf("%.1lf, ", target1[i]);
	}
	printf("\b\b};\n");

	printf("target2[5] = {");
	for (i = 0; i < 5; i++)
	{
		printf("%.1lf, ", target2[i]);
	}
	printf("\b\b};\n");

	printf("target3[5] = {");
	for (i = 0; i < 5; i++)
	{
		printf("%.1lf, ", target3[i]);
	}
	printf("\b\b};\n");

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

void copy_ptr(double* target, double* source, int n)
{
	int i = 0;

	while (i < n)
	{
		*(target + i) = *(source + i);
		i++;
	}
}

void copy_ptrs(double target[], double source[], double* last)
{
	while (source != last)
	{
		*target++ = *source++;
	}
}