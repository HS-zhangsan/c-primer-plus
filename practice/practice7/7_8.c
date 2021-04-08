#include <stdio.h>
#define OVERTIME 40.00
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define TAXES1 300
#define TAXES2 450
double menu(void);      //菜单函数，根据选择函数返回值返回相应basic_wage或5(结束程序)。
int get_choice(void);   //展示菜单，获取用户正确输入并返回。
int get_int(void);      //处理非int类型值的输入。

int main(void)
{
	double basic_wage, wage, taxes, net_income, time;

	while ((basic_wage = menu()) != 5)
	{

		printf("Please enter the number of hours you worked this week:");
		scanf_s("%lf", &time);

		//先处理总收入。
		if (time < OVERTIME)
		{
			wage = time * basic_wage;
		}
		else
		{
			wage = (OVERTIME * basic_wage) + ((time - OVERTIME) * basic_wage * 1.5);
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
		printf("Net income is $%.2lf.\n\n", net_income);
	}

	printf("Bye~\n");

	return 0;
}

double menu(void)
{
	int choice;
	char ch = 0;
	double basic_wage = 0;

	choice = get_choice();
	switch (choice)
	{
	case 1:  basic_wage = 8.75;
		break;
	case 2:  basic_wage = 9.33;
		break;
	case 3:  basic_wage = 10.00;
		break;
	case 4:  basic_wage = 11.20;
		break;
	default: return choice;
	}

	if (ch != 0)                 //测试输入流是否有残留字符
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);         //处理数字加字符输入的字符
		}
	}

	return basic_wage;
}

int get_choice(void)
{
	int integer;

	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1）$8.75/hr                      2）$9.33/hr\n");
	printf("3）$10.00/hr                     4）$11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");

	while ((integer = get_int()) && (integer < 1 || integer > 5))
	{
		printf("Please respond with 1-5.\n");
	}

	return integer;
}

int get_int(void)
{
	int input;
	char ch;

	while (scanf_s("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);     //处理错误输出(处理字符和字符加数字)
		}

		printf(" is not an integer.\n");
		printf("please enter again: ");
	}

	return input;
}