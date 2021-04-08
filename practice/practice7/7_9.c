#include <stdio.h>
#include <math.h>
int get_int(void);

int main(void)
{
    int i, n, number, prime;

    printf("Please enter an integer (<= 0 to quit): ");

    while ((number = get_int()) && (number > 0))
    {
        if (number == 1)
        {
            printf("1 isn't a prime!\n");
            printf("Please enter again (<= 0 to quit): ");
            continue;
        }

        printf("Below are all prime numbers smaller than %d.:\n", number);

        for (i = 2; i <= number; i++)
        {
            prime = 1;

            for (n = 2; n <= sqrt(i); n++)
            {
                if (i % n == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if (prime)
            {
                printf("%-3d", i);
            }
        }

        printf("\nPleasee enter next integer (<= 0 to quit): ");
    }

    printf("Done.\n");

    return 0;
}

int get_int(void)
{
    int input;
    char ch;

    while (scanf_s("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
        }

        printf(" is not an integer.\n");
        printf("please enter again: ");
    }

    return input;
}