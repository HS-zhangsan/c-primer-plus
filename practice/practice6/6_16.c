#include <stdio.h>
int main(void)
{
	const  double simple_interest = 0.10;
	const  double compound_interest = 0.05;
	double sist =  100, cist = 100;
	int year;

	for (year = 1; sist >= cist; year++)
	{
		sist += simple_interest * 100;
		cist *= (compound_interest + 1);
	}

	printf("Deirdre  takes %d years the amount of"
		" investment will be more than Daphne.\n", year -1);
	printf("At this time, Daphne¡¯s investment is $%.2lf,", sist);
	printf("\nand Deirdre¡¯s investment is $%.2lf.", cist);

	return 0;
}