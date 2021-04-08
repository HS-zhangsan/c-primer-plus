#include <stdio.h>
char get_choice(void);
char get_first(void);
double get_number(void);

int main(void)
{
	int choice;
	double num1, num2;

	while ((choice = get_choice()) != 'q')
	{
		printf("Enter first number: ");
		num1 = get_number();
		printf("Enter second number: ");
		num2 = get_number();

		if (choice == 'd' && num2 == 0)
		{
			printf("Enter a number other than 0: ");
			num2 = get_number();
		}

		switch (choice)
		{
		case 'a': printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
			break;
		case 's': printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
			break;
		case 'm': printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
			break;
		case 'd': printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
			break;
		default:  printf("Programe error!\n");
			break;
		}
	}

	printf("Bye~\n");

	return 0;
}

char get_choice(void)
{
	int ch;

	printf("Enter the operation of your choice:\n");
	printf("a. add              s. subtract\n");
	printf("m. multiply         d. divide\n");
	printf("q. quit\n");

	ch = get_first();

	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("Please respond with a, s, m, d, or q.\n");
		ch = get_first();
	}

	return ch;
}

char get_first(void)
{
	int ch;

	ch = getchar();

	while (getchar() != '\n')
	{
		continue;
	}

	return ch;
}

double get_number(void)
{
	double input;
	char ch;

	while (scanf_s("%lf", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}

		printf(" is not a number.\nPlease enter a ");
		printf("number, such as 2.5, -1.78E8, or 3: ");
	}

	while (getchar() != '\n')
	{
		continue;
	}

	return input;
}