#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch;
    char output[255];
    int index = 0;
    int i;

    for (i = 0; (ch = getchar()) != EOF && ch != '\n' && i < 255; i++)
    {
        output[index++] = ch;
    }

    for (i = index - 1; i >= 0; i--)
    {
        putchar(output[i]);
    }

    return 0;
}