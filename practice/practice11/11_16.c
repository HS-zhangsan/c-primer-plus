// 编写一个程序读取输入，直至读到文件结尾，然后把字符串打印出来。
// 该程序识别和实现下面的命令行参数:
// -p		原样打印
// -u		把输入全部转换为大写
// -l		把输入全部转换为小写

#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    int ch;
    int flag = 1;
    char mode = 'p';

    if (argc > 2)
    {
        printf("Usage: %s [-p | -u | -l ]\n", argv[0]);
        flag = 0;
    }
    else if (argc == 2)
    {
        if (argv[1][0] != '-')
        {
            printf("Usage: %s [-p | -u | -l ]\n", argv[0]);
            flag = 0;
        }
        else
        {
            switch (argv[1][1])
            {
            case 'p':
            case 'u':
            case 'l':
            {
                mode = argv[1][1];
                break;
            }
            default:
            {
                printf("The argument isn't p, u or l, the program start to run with -p way.\n");
            }
            }
        }
    }
    if (flag)
    {
        printf("Please enter some characters (EOF to quit):\n");
        while ((ch = getchar()) != EOF)
        {
            if (ch == '\n')
            {
                printf("\n");
                continue;
            }

            switch (mode)
            {
            case 'p':
            {
                putchar(ch);
                break;
            }
            case 'u':
            {
                putchar(_toupper(ch));
                break;
            }
            case 'l':
            {
                putchar(_tolower(ch));
                break;
            }
            }
        }
        printf("\n");
    }
    printf("Done.\n");

    return 0;
}