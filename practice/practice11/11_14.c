//编写一个通过命令行运行的程序计算幂。
//第 1 个命令行参数是 double 类型的数，
//作为幂的底数，第2个参数是整数，作为幂的指数。

#include <stdio.h>
double mypower(double base, int exp);
int main()
{
    double base;
    int exp;

    printf("input base number and exp:");
    scanf_s("%lf%d", &base, &exp);
    printf("%g^%d = %g\n", base, exp, mypower(base, exp));
    return 0;
}

double mypower(double base, int exp)
{
    double power = 1;
    if (exp < 0)
        power = 1 / mypower(base, -exp);
    else if (exp > 0)
        while (exp-- > 0)
            power *= base;
    else if (base != 0)
        power = 1;
    else
        power = 1 / base;  //0的0次幂是一个无意义的数

    return power;
}