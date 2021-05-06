#include <stdio.h>
#include <string.h>
#define LEN 20

void eatline(void);
char* mystrncpy(char* dest, char* src, int n);
char* s_gets(char* st, int n);

int main(int argc, char* argv[])
{
    int len;
    char target[LEN];
    char source[LEN];

    printf("Please enter a string (EOF to quit):\n");
    while (s_gets(source, LEN) != NULL)
    {
        printf("Please enter a number for copy (> 0): ");
        while (scanf_s("%d", &len) != 1 || len <= 0)
        {
            eatline();
            printf("Please enter again: ");
        }
        eatline();
        printf("Source string: %s\n", source);
        printf("Target string: %s\n", mystrncpy(target, source, len));
        printf("You can enter a string again (EOF to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

char* s_gets(char* st, int n)
{
    char* ret_val;
    char* find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            eatline();
        }
    }
    return ret_val;
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
    return;
}

char* mystrncpy(char* dest, char* src, int n)
{
    int count = 0;

    while (*src != '\0' && count < n)
    {
        *(dest + count) = *src++;
        //��Դ�ַ�����Ϊ���ҳ���С��nʱ����;
        count++;
    }
    *(dest + count) = '\0';
    //����֤�ַ�������Ч��;
    return dest;
}