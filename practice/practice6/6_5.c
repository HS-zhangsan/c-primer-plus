#include <stdio.h>
int main(void)
{
	int i, j, k;
	char ch;

	printf("Enter a capital letters:");
	scanf_s("%c", &ch);

   	for (i = 1; i <= ch - 64; i++)
	{
		//�ȴ�ӡÿ�еĿո�����Ϊ����ӡ��ĸascii��ֵ-64-������
		for (j = 65; j <= ch - i; j++)
			printf(" ");

		//�ٴӴ�дA��ʼ�����ӡ��ĸ��ÿ����ĸ����Ϊ������
		for (j = 1, k = 65; j <= i; j++, k++)
			printf("%c", k);

		//����ÿ�������ĸ��ǰһ����ĸ��ʼ�����ӡֱ��A
		for (k -= 2; k >= 65; k--)
			printf("%c", k);
		printf("\n");
	}

	return 0;
}