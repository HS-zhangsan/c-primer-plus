//设计并测试一个函数，从输入中获取下n个字符（包括空白、制表符、换行符)，
//把结果储存在一个数组里，它的地址被传递作为一个参数。

#include <stdio.h>
#define LEN 10

void getnchar(char str[], int n);

int main(int argc, char* argv[])
{
    char input[LEN];

    printf("Please enter %d characters:\n", LEN - 1);
    getnchar(input, LEN);
    printf("Result:\n");
    puts(input);
    printf("Done.\n");

    return 0;
}

void getnchar(char str[], int n)
{
    int i = 0;

    while (i < n - 1)
    {
        str[i++] = getchar();
    }
    str[i] = '\0';

    return;
}