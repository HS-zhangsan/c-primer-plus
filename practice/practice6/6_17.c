#include <stdio.h>
int main(void)
{
	const interest = 0.08;
	double money = 1000000;
	int year;

	for (year = 1; money >= 100000; year++)
	{
		money = (money + money * interest) - 100000;
	}

	printf("%d years later, Chuckie will finish all the money.\n", year);

	return 0;
}