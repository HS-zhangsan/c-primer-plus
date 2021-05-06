/*
* 编写一个函数接受一个字符串作为参数，并删除字符串中的空格。
* 在一个程序中测试该函数，使用循环读取输入行，直到用户输入一行空行。
* 该程序应该应用该函数只每个输入的字符串，并显示处理后的字符串。
*/

#include <stdio.h>
#include <string.h>
#define LEN 20
#define SPACE ' '

char* s_gets(char* st, int n);
void cancel(char* str);

int main(void)
{
	char source[LEN];

	printf("Please enter a string (EOF or Enter to quit):\n");
	while (s_gets(source, LEN) != NULL && source[0] != '\0')
	{
		printf("Source string: %s\n", source);
		cancel(source);
		printf("Delete space: %s\n", source);
		printf("Re-enter a string (EOF or or Enter to quit):\n");
	}


	return 0;
}

char* s_gets(char* st, int n) 
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
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

void cancel(char* str)
{
	char* pt = str;

	while (*str)
	{
		if (*str != SPACE)
		{
			*pt++ = *str++;
			//修改pt指向的内容就相当于修改了str指向的内容
		}
		else
		{
			str++;
			//若是空格则统计空格数并指向下一个内存空间
		}
	}

	*pt = '\0';
}