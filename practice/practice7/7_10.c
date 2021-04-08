#include <stdio.h>
#define TAX_RATE1 0.15
#define TAX_RATE2 0.28
int menu(void);          //展示菜单，根据用户输入返回相应纳税标准。
int get_int(void);       //处理错误输入

int main(void)
{
	int tax_standard;
	double taxable_income, taxes;

	while ((tax_standard = menu()) && (tax_standard != 0))
	{
		printf("Please enter the taxable income: ");

		taxable_income = get_int();

		if (taxable_income <= tax_standard)
		{
			taxes = taxable_income * TAX_RATE1;
		}
		else
		{
			taxes = (tax_standard * TAX_RATE1) + ((taxable_income - tax_standard) * TAX_RATE2);
		}

		printf("The taxes is %.2lf.\n\n", taxes);
	}

	printf("Bye~\n");

	return 0;
}

int  menu(void)
{
	int choice = 0;
	int tax_standard;
	char ch;

	while (choice < 1 || choice > 5)
	{
		printf("**********************************************************\n");
		printf("Please select your tax payable category (5 to quit): \n");
		printf("1）Single                             2）Head of household\n");
		printf("3）Married, Shared                    4）Married, Divorced\n");
		printf("5）Quit\n");
		printf("**********************************************************\n");

		switch (choice = get_int())
		{
		case  1: tax_standard = 17850;
			break;
		case  2: tax_standard = 23900;
			break;
		case  3: tax_standard = 29750;
			break;
		case  4: tax_standard = 14875;
			break;
		case  5: return 0;
		default: printf("error: your input is invalid.\n");  //处理错误输入
			printf("Please enter 1-5:\n");
			break;
		}
	}

	return tax_standard;
}

int get_int(void)
{
	int input;
	char ch;

	while (scanf_s("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}

		printf(" is not integer.\n");
		printf("Plaese enter again: ");
	}

	return input;
}