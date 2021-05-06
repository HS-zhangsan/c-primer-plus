//编写一个名为is_within()的函数，接受一个字符和一个指向字符串的指针作为两个函数形参。
//如果指定字符在字符串中，该函数返回一个非零值（即为真)。否则，返回0(即为假)。
//在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。

#include <stdio.h>
#include <string.h>

int is_within(char* ctr, char ch);

int main(void)
{
	char input[50];
	char ch;
	int result;

	printf("Enter some characters:\n");
	
	while (gets_s(input, 50))
	{
		printf("Enter the character to be checked: ");

		ch = getchar();
		while (getchar() != '\n')
		{
			continue;
		}

		if (result = is_within(input, ch))
		{
			printf("There are %d \'%c\' in the string\n", result, ch);
		}
		else
		{
			printf("The string has no '%c'.\n", ch);
		}

		printf("You can enter another string:\n");
	}

	return 0;
}

int is_within(char* ctr, char ch)
{
	int result = 0;

	while (*ctr)
	{
		if (ch = *ctr)
		{
			result += 1;
		}
		ctr++;
	}

	return result;
}