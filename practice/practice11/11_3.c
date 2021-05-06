//��Ʋ�����һ����������һ�������а�һ�����ʶ���һ�������У�
//�������������е������ַ���
//�ú���Ӧ��������1���ǿհ��ַ�ǰ������пհס�
//��һ�����ʶ���Ϊû�пհס��Ʊ�����з����ַ����С�

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

    //������һ���ǿհ��ַ�ǰ������пհ׷�
    while ((ch = getchar()) != EOF && isspace(ch))
    {
        continue;
    }

    if (ch == EOF)
    {
        return NULL;         //����һ��ֱ������Ctrl+Z�򷵻ؿ�ָ��;
        
    }
    else
    {
        n++;
        *str++ = ch;
        //�ѵ�һ���ǿհ��ַ���ֵ��str��ָ����ڴ�ռ��ڲ�ָ����һ���洢�ռ�
    }

    while ((ch = getchar()) != EOF && !isspace(ch) && (n < LEN - 1))
    {
        *str++ = ch;    //�ӵ�2���ַ���ʼ��ֱֵ���������ʺ����һ���հ׷� 
        n++;
    }
    *str = '\0';

    if (ch == EOF)
    {
        return NULL;         //����Ctrl+Z���ؿ�ָ��
    }
    else
    {
        while (getchar() != '\n')
        {
            continue;        //�ӵ��ʺ��涪���������е������ַ�;
        }
        return pt;
    }
}