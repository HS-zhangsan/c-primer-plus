// ��дһ����Ϊstring_in ()�ĺ�������������ָ���ַ�����ָ����Ϊ������
// ����ڢ����ַ����а�����1���ַ������ú��������ص�1���ַ�����ʼ�ĵ�ַ��
// ���磬string_in ("hats", "at")������hats �� a�ĵ�ַ�����򣬸ú������ؿ�ָ�롣
// ��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��

#include <stdio.h>
#include <string.h>
#define LEN 10

char* s_gets(char* st, int n);
char* string_in(char* str, char* pt);

int main(void)
{
	char str1[LEN];
	char str2[LEN];

	printf("Please enter the first string (EOF to quit):\n");
	while (s_gets(str1, LEN) != NULL)
	{
		printf("Please enter the second string:\n");
		if (s_gets(str2, LEN) != NULL)
		{
			if (string_in(str1, str2) != NULL)
			{
				printf("String \"%s\" exist in string \"%s\".\n",
					str2, str1);
			}
			else
			{
				printf("String \"%s\" doesn't exist in string \"%s\".\n",
					str2, str1);
			}
		}

		printf("Enter again (EOF to quit:)\n");
	}

	printf("Done.\n");
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

char* string_in(char* str, char* pt)
{
	int i = 0;
	int j = 0;
	int str_len = strlen(str); //��ȡ��������
	int pt_len = strlen(pt);   //��ȡ�Ӵ�����

	while (i < str_len && j < pt_len)
	{
		if (str[i] == pt[j])
		{
			i++;
			j++;
		}
		else  //�����ַ��������ַ�������ͬ������ƥ��
		{
			i = i - j + 1;
			j = 0;
		}
	}

	return j == pt_len ? str : NULL;
}