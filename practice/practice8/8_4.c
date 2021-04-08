#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int ch;                   //读入字符
	long num_chars = 0L;      //字符数
	long num_words = 0L;      //单词数
	bool inword = false;      //如果 ch 在单词中，inword = true

	printf("Enter text to be analyzed: \n");

	while ((ch = getchar()) != EOF)
	{
		//统计字母和数字字符
		if (!ispunct(ch) && !isspace(ch))
		{
			num_chars++;
		}

		if (!isspace(ch) && !inword)
		{
			inword = true;     //开始一个新的单词
			num_words++;       //统计单词
		}

		if (isspace(ch) && inword)
		{
			inword = false;    //到达单词的结尾
		}
	}

	printf("Every word of the text has %.2lf letters.\n",
		(double)num_chars / (double)num_words);
	printf("Done.");

	return 0;
}