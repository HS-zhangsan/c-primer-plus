//设计并测试一个函数，从一行输入中把一个单词读入一个数组中，
//并丢弃输入行中的其余字符。
//该函数应该跳过第1个非空白字符前面的所有空白。
//将一个单词定义为没有空白、制表符或换行符的字符序列。

#include <stdio.h>
#include <ctype.h>
#define LEN 10

char* getword(char* str);

int main(int argc, char* argv[])
{
    char input[LEN];

    printf("Please enter a word (EOF to quit):\n");
    while (getword(input) != NULL)
    {
        printf("Result:\n");
        puts(input);
        printf("You can enter a word again (EOF to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

char* getword(char* str)
{
    int ch;
    int n = 0;
    char* pt = str;

    //跳过第一个非空白字符前面的所有空白符
    while ((ch = getchar()) != EOF && isspace(ch))
    {
        continue;
    }

    if (ch == EOF)
    {
        return NULL;         //若第一次直接输入Ctrl+Z则返回空指针;
        
    }
    else
    {
        n++;
        *str++ = ch;
        //把第一个非空白字符赋值给str所指向的内存空间内并指向下一个存储空间
    }

    while ((ch = getchar()) != EOF && !isspace(ch) && (n < LEN - 1))
    {
        *str++ = ch;    //从第2个字符开始赋值直到遇见单词后面第一个空白符 
        n++;
    }
    *str = '\0';

    if (ch == EOF)
    {
        return NULL;         //输入Ctrl+Z返回空指针
    }
    else
    {
        while (getchar() != '\n')
        {
            continue;        //从单词后面丢弃输入行中的其它字符;
        }
        return pt;
    }
}