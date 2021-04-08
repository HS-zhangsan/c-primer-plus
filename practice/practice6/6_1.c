//创建一个包含26个元素的数组，在其中储存26个小写字母并打印。

#include <stdio.h>
int main(void)
{
	char letter[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		letter[i] = i + 97;
		printf("%c", letter[i]);
	}
}