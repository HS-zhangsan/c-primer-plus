//��дһ��ͨ�����������еĳ�������ݡ�
//�� 1 �������в����� double ���͵�����
//��Ϊ�ݵĵ�������2����������������Ϊ�ݵ�ָ����

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
        power = 1 / base;  //0��0������һ�����������

    return power;
}