#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int ch;                   //�����ַ�
	long num_chars = 0L;      //�ַ���
	long num_words = 0L;      //������
	bool inword = false;      //��� ch �ڵ����У�inword = true

	printf("Enter text to be analyzed: \n");

	while ((ch = getchar()) != EOF)
	{
		//ͳ����ĸ�������ַ�
		if (!ispunct(ch) && !isspace(ch))
		{
			num_chars++;
		}

		if (!isspace(ch) && !inword)
		{
			inword = true;     //��ʼһ���µĵ���
			num_words++;       //ͳ�Ƶ���
		}

		if (isspace(ch) && inword)
		{
			inword = false;    //���ﵥ�ʵĽ�β
		}
	}

	printf("Every word of the text has %.2lf letters.\n",
		(double)num_chars / (double)num_words);
	printf("Done.");

	return 0;
}