#include <stdio.h>
#define BASIC_WAGE 10.00
#define OVERTIME 40.00
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define TAXES1 300
#define TAXES2 450

int main(void)
{
	double wage, taxes, net_income, time;

	printf("Please enter the number of hours you worked this week:");
	scanf_s("%lf", &time);

	//先处理总收入。
	if (time < OVERTIME)
	{
		wage = time * BASIC_WAGE;
	}
	else
	{
		wage = (OVERTIME * BASIC_WAGE) + ((time - OVERTIME) * BASIC_WAGE * 1.5);
	}

	//接着处理税金。
	if (wage < TAXES1)
	{
		taxes = wage * TAX1;
	}
	else if (wage > TAXES1 && wage < TAXES2)
	{
		taxes = (TAXES1 * TAX1) + ((wage - TAXES1) * TAX2);
	}
	else
	{
		taxes = (TAXES1 * TAX1) + (150 * TAX2) + ((wage - TAXES2) * TAX3);
	}

	//最后处理净收入。
	net_income = wage - taxes;

	printf("Your salary this week is $%.2lf.\n", wage);
	printf("The tax is $%.2lf.\n", taxes);
	printf("Net income is $%.2lf.\n", net_income);
	printf("Bye~\n");


	return 0;
}

//This procedure took 40 minutes.