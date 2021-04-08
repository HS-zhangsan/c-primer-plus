#include <stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();

	return 0;
}

void jolly(void)
{
	puts("For he's a jolly good fellow!");
}

void deny(void)
{
	puts("Which nobody can deny!");
}
