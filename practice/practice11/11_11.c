/*
* ��дһ������������10���ַ������߶���EOFʱֹͣ��
* �ó���Ϊ�û��ṩһ����5��ѡ��Ĳ˵�:��ӡԴ�ַ����б���ASCII�е�˳���ӡ�ַ�����
* �����ȵ���˳���ӡ�ַ��������ַ����е�1�����ʵĳ��ȴ�ӡ�ַ������˳���
* �˵�����ѭ����ʾ�������û�ѡ���˳�ѡ���Ȼ���ó���Ҫ��������ɲ˵��и�ѡ��Ĺ��ܡ�
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
void origin_output(char(*str)[COLUMNS], int n); //��ӡԴ�ַ����б�
void ascii_output(char** str, int n);           //��ASCII�е�˳���ӡ�ַ���
void length_up_output(char** str, int n);       //�����ȵ���˳���ӡ�ַ���
void first_word_output(char** str, int n);      //���ַ����е�1�����ʵĳ��ȴ�ӡ�ַ���

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

	//ͳ���ַ�����һ���ǿհ��ַ��ĵ��ʳ��Ȳ���Ϊ����ֵ���ݸ����ú���
	while (*str)
	{
		if (!isspace(*str) && !inword)  //�ӵ�һ���ǿհ��ַ���ʼͳ�Ƶ��ʳ���
		{
			inword = true;
			length++;
		}
		else if (!isspace(*str) && inword)
		{
			length++;
		}
		else if (isspace(*str) && inword) //��������һ������֮��Ŀհ׷����˳�ѭ��
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
			//��ASCII��˳���������
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
			//���ַ������ַ����Ķ��ٽ�������
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
			//����һ�����ʳ��Ƚ�������
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