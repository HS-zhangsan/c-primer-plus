/*
      �޸�֮ǰ�ļ��㹤�ʵĳ���
      ���ַ��������ֱ�ǲ˵���ѡ��� q ��Ϊ�����ı�־ 
*/

/*
      �ص㴦����һ��������֤�Ĳ���
*/


#include <stdio.h>
#include <ctype.h>
#define OVERTIME 40.00
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define TAXES1 300
#define TAXES2 450

double menu(void);           //���� get_choice() ����ֵ������Ӧ basic_wage �� q (��������)��
int get_choice(void);        //չʾ�˵������� a-d �� q
double get_positive(void);   //����һ������
char get_first(void);        //���ص�һ�������ַ�

int main(void)
{
	double basic_wage, wage, taxes, net_income, time;

	while ((basic_wage = menu()) != 'q')
	{

		printf("Please enter the number of hours you worked this week: ");

		time = get_positive();

		//�ȴ��������롣
		if (time < OVERTIME)
		{
			wage = time * basic_wage;
		}
		else
		{
			wage = (OVERTIME * basic_wage) + ((time - OVERTIME) * basic_wage * 1.5);
		}

		//���Ŵ���˰��
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

		//��������롣
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
	double basic_wage;

	choice = get_choice();

	switch (choice)
	{
	case 'a':  basic_wage = 8.75;
		break;
	case 'b':  basic_wage = 9.33;
		break;
	case 'c':  basic_wage = 10.00;
		break;
	case 'd':  basic_wage = 11.20;
		break;
	default: return choice;
	}

	return basic_wage;
}

int get_choice(void)
{
	int input;

	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a. $8.75/hr                      b. $9.33/hr\n");
	printf("c. $10.00/hr                     d. $11.20/hr\n");
	printf("q. quit\n");
	printf("*****************************************************************\n");

	while ((input = get_first()) && (input < 'a' || input > 'd') && input != 'q')
	{
		printf("Please respond with a, b, c, d, or q.\n");
	}

	return input;
}

double get_positive(void)
{
	double input;
	int  check;
	char ch;

	while (1)
	{
		if (check = scanf_s("%lf", &input) != 1)
		{
			printf("\"");

			while ((ch = getchar()) != '\n')
			{
				putchar(ch);
			}

			printf("\" is not a number, please enter a number: ");
		}
		else
		{
			rewind(stdin);

			if (input < 0)
			{
				printf("%.2lf is a negative number, please enter a number greater than 0: ", input);
			}
			else if (input > 0)
			{
				return input;
			}
			else
			{
					printf("�����͵���ɵ�����⣬�٣� ");
					exit(0);
			}
		}
	}

	return input;
}

char get_first(void)
{
	int ch;

	do
	{
		ch = getchar();
	} while (isspace(ch));

	while (getchar() != '\n')
	{
		continue;
	}

	return ch;
}