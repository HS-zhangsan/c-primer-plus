#include <stdio.h>
double get_double(void);

int main(void)
{
	const double unit_price_a = 2.05, unit_price_b = 1.15, unit_price_c = 1.09;
	double weight_a = 0, weight_b = 0, weight_c = 0, discount = 0;
	double price_a, price_b, price_c, total_order_cost;
	double s_and_p_fees, total_weight, finally_cost;
	char choice = 0;
	char ch;

	//菜单，选择种类，输入重量。
	while (choice != 'q')
	{
		//展示菜单选择。
		printf("**********************************************************\n");
		printf("* Please select the goods you want to order (q to end):  *\n");
		printf("* a. artichoke                      b. beet              *\n");
		printf("* c. carrot                         q. quit              *\n");
		printf("**********************************************************\n");

		//处理错误输入。
		while (choice = getchar())
		{
			while ((ch = getchar()) != '\n')
			{
				continue;
			}

			if ((choice < 'a' || choice > 'c') && (choice != 'q'))
			{
				printf("The input is invalid, please re-enter: ");
				continue;
			}

			break;
		}

		//根据输入跳转。
		switch (choice)
		{
		case 'a': printf("Please enter the pounds of artichoke (Unit: Pound): ");
			weight_a += get_double();
			break;
		case 'b': printf("Please enter the pounds of beet (Unit: Pound): ");
			weight_b += get_double();
			break;
		case 'c': printf("Please enter the pounds of carrot (Unit: Pound): ");
			weight_c += get_double();
			break;
		default:  break;
		}
	}


	//计算部分。
	//蔬菜费用。
	price_a = unit_price_a * weight_a;
	price_b = unit_price_b * weight_b;
	price_c = unit_price_c * weight_c;

	//订单总费用。
	total_order_cost = price_a + price_b + price_c;

	//折扣。
	if (total_order_cost > 100)
	{
		discount = total_order_cost * 0.05;
	}

	//运费和包装费。
	total_weight = weight_a + weight_b + weight_c;
	if (total_weight <= 5)
	{
		s_and_p_fees = 6.5;
	}
	else if (total_weight > 5 && total_weight <= 20)
	{
		s_and_p_fees = 14;
	}
	else
	{
		s_and_p_fees = 14 + (total_weight - 20) * 0.5;
	}

	//所有的费用总额。
	finally_cost = total_order_cost - discount + s_and_p_fees;


	//显示购买信息。
	printf("============================================================\n");
	printf(" The unit price of artichoke is $2.05.\n");
	printf(" Ordered weight is %.2lf pounds.\n", weight_a);
	printf(" The vegetables ordered cost $%.2lf.                       \n\n", price_a);
	printf(" The unit price of beet is $1.15.\n");
	printf(" Ordered weight is %.2lf pounds.\n", weight_b);
	printf(" The vegetables ordered cost $%.2lf.\n\n", price_b);
	printf(" The unit price of carrot is $1.09.\n");
	printf(" Ordered weight is %.2lf pounds.\n", weight_c);
	printf(" The vegetables ordered cost $%.2lf.\n\n", price_c);
	printf(" The total cost of the order is $%.2lf.\n\n", total_order_cost);
	printf(" The discount is $%.2lf.\n\n", discount);
	printf(" The shipping and packaging fees is $%.2lf.\n\n", s_and_p_fees);
	printf(" The final total cost is $%.2lf.\n\n", finally_cost);
	printf(" Done.\n\n");
	printf("============================================================\n");

	return 0;
}

double get_double(void)
{
	double input;
	char ch;

	while (scanf_s("%lf", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}

		printf(" is not a double type number.\n");
		printf("Please enter again: ");
	}

	return input;
}