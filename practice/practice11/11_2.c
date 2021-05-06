#include <stdio.h>
#include <ctype.h>
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
    int i = -1;

    while (++i < n - 1)
    {
        str[i] = getchar();
        if (isspace(str[i]))
        {
            break;
        }
    }
    str[i] = '\0';

    return;
}
