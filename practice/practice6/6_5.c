#include <stdio.h>
int main(void)
{
	int i, j, k;
	char ch;

	printf("Enter a capital letters:");
	scanf_s("%c", &ch);

   	for (i = 1; i <= ch - 64; i++)
	{
		//先打印每行的空格，数量为待打印字母ascii码值-64-行数。
		for (j = 65; j <= ch - i; j++)
			printf(" ");

		//再从大写A开始升序打印字母，每行字母数量为行数。
		for (j = 1, k = 65; j <= i; j++, k++)
			printf("%c", k);

		//最后从每行最大字母的前一个字母开始降序打印直到A
		for (k -= 2; k >= 65; k--)
			printf("%c", k);
		printf("\n");
	}

	return 0;
}