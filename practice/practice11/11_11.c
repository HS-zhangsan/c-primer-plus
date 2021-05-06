/*
* 编写一个函数，读入10个字符串或者读到EOF时停止。
* 该程序为用户提供一个有5个选项的菜单:打印源字符串列表、以ASCII中的顺序打印字符串、
* 按长度递增顺序打印字符串、按字符串中第1个单词的长度打印字符串、退出。
* 菜单可以循环显示，除非用户选择退出选项。当然，该程序要能真正完成菜单中各选项的功能。
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#define ROWS 10
#define COLUMNS 20

int get_string(char(*string)[COLUMNS], char** str, int n);
int get_first(void);
int show_menu(void);
int word(char* str);
char* s_gets(char* st, int n);
void origin_output(char(*str)[COLUMNS], int n); //打印源字符串列表
void ascii_output(char** str, int n);           //以ASCII中的顺序打印字符串
void length_up_output(char** str, int n);       //按长度递增顺序打印字符串
void first_word_output(char** str, int n);      //按字符串中第1个单词的长度打印字符串

int main(void)
{
	int n, choice;
	char* str[ROWS];
	char strings[ROWS][COLUMNS];

	printf("Please enter %d strings (EOF to quit):\n", ROWS);
	if ((n = get_string(strings, str, ROWS)) != 0)
	{
		while ((choice = show_menu()) != 'q')
		{
			switch (choice)
			{
			case 'a':
				origin_output(strings, n);
				break;
			case 'b':
				ascii_output(str, n);
				break;
			case 'c':
				length_up_output(str, n);
				break;
			case 'd':
				first_word_output(str, n);
				break;
			}
		}
	}
	printf("Done.\n");

	return 0;
}

int get_string(char(*string)[COLUMNS], char** str, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (s_gets(string[i], COLUMNS) != NULL)
		{
			str[i] = string[i];
		}
		else
		{
			break;
		}
	}

	return i;
}

int get_first(void)
{
	int ch;

	do
	{
		ch = tolower(getchar());
	} while (isspace(ch));

	while (getchar() != '\n')
	{
		continue;
	}

	return ch;
}

int show_menu(void)
{
	int ch;

	printf("********************************************\n");
	printf(" a) Print source string\n");
	printf(" b) Print source string for ASCII\n");
	printf(" c) Print source string for length\n");
	printf(" d) Print source string for the first word\n");
	printf(" q) Quit\n");
	printf("********************************************\n");
	printf("Enter your choice: ");

	ch = get_first();

	while ((ch < 'a' || ch > 'd') && ch != 'q')
	{
		printf("Please enter a, b, c, d, or q: ");
		ch = get_first();
	}

	return ch;
}

int word(char* str)
{
	int length = 0;
	bool inword = false;

	//统计字符串第一个非空白字符的单词长度并作为返回值传递给调用函数
	while (*str)
	{
		if (!isspace(*str) && !inword)  //从第一个非空白字符开始统计单词长度
		{
			inword = true;
			length++;
		}
		else if (!isspace(*str) && inword)
		{
			length++;
		}
		else if (isspace(*str) && inword) //若遇到第一个单词之后的空白符则退出循环
		{
			break;
		}

		str++;
	}

	return length;
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(ret_val, '\n');
		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}

	return ret_val;
}

void origin_output(char(*str)[COLUMNS], int n)
{
	int i;

	printf("Source string:\n");
	for (i = 0; i < n; i++)
	{
		puts(str[i]);
	}
	putchar('\n');
}

void ascii_output(char** str, int n)
{
	int i, j;
	char* temp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			//按ASCII码顺序进行排序
			if (strcmp(str[i], str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	printf("Print source strings for ASCII:\n");
	for (i = 0; i < n; i++)
	{
		puts(str[i]);
	}
	putchar('\n');
}

void length_up_output(char** str, int n)
{
	int i, j;
	char* temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			//按字符串中字符数的多少进行排序
			if (strlen(str[i]) > strlen(str[j]))
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	printf("Print source strings for length:\n");
	for (i = 0; i < n; i++)
	{
		puts(str[i]);
	}
	putchar('\n');
}

void first_word_output(char** str, int n)
{
	int i, j;
	char* temp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			//按第一个单词长度进行排序
			if (word(str[i]) > word(str[j]))
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	printf("Print source strings for the first word:\n");
	for (i = 0; i < n; i++)
	{
		puts(str[i]);
	}
	putchar('\n');
}