#include <stdio.h>
void one_three(void);
void two(void);

int main(void)
{
	puts("starting now:");

	one_three();

	puts("done!");
	return 0;
}

void one_three(void)
{
	puts("one");

	two();

	puts("three");
}

void two(void)
{
	puts("two");
}