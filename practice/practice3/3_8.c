//1pint=2cup,1cup=8ounce,1ounce=2big_spoon,1big_spoon=3tea_spoon
#include <stdio.h>
int main(void)
{
	float pint, cup, ounce, big_spoon, tea_spoon;

	printf("Please enter the number of the cups:");
	scanf_s("%f",&cup);

	pint = cup / 2;
	ounce = cup * 8;
	big_spoon = ounce * 2;
	tea_spoon = big_spoon * 3;

	printf("%.2f cup(s)\n= %.2f pint(s)\n= %.2f ounce(s)\n"
		"= %.2f big_spoon(s)\n= %.2f tea_spoon(s)\n",
		cup,pint,ounce,big_spoon,tea_spoon);
}