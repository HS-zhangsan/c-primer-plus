#include <stdio.h>
void s(void);

int main(void)
{
	s();
	s();
	s();
	printf("\n");
	s();
	s(); 
	printf("\n");
	s();
}

void s(void)
{
	printf("Smile!");
}