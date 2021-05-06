/*
* ��дһ����������һ���ַ�����Ϊ��������ɾ���ַ����еĿո�
* ��һ�������в��Ըú�����ʹ��ѭ����ȡ�����У�ֱ���û�����һ�п��С�
* �ó���Ӧ��Ӧ�øú���ֻÿ��������ַ���������ʾ�������ַ�����
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
			//�޸�ptָ������ݾ��൱���޸���strָ�������
		}
		else
		{
			str++;
			//���ǿո���ͳ�ƿո�����ָ����һ���ڴ�ռ�
		}
	}

	*pt = '\0';
}