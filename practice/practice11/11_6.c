//��дһ����Ϊis_within()�ĺ���������һ���ַ���һ��ָ���ַ�����ָ����Ϊ���������βΡ�
//���ָ���ַ����ַ����У��ú�������һ������ֵ����Ϊ��)�����򣬷���0(��Ϊ��)��
//��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��

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