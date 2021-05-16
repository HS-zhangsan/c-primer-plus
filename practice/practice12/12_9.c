#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 256

int main(void)
{
    char** pt;
    int i, n, length;
    static char temp[LEN];

    printf("How many words do you wish to enter? ");
    scanf("%d", &n);
    if ((pt = (char**)malloc(n * sizeof(char*))) != NULL)
    {
        printf("Enter %d words now:\n", n);
        for (i = 0; i < n; i++)
        {
            scanf("%255s", temp);
            length = strlen(temp) + 1;
            pt[i] = (char*)malloc(length * sizeof(char));
            //��ʹ��malloc�����㹻�Ĵ洢�ռ����洢����;
            if (NULL == pt[i])
            {
                printf("Memory allocation failed!\n");
                exit(EXIT_FAILURE);
            }
            strcpy(pt[i], temp);
            //������ʱ�����аѵ��ʿ�������̬����Ĵ洢�ռ���;
        }
        printf("Here are your words:\n");
        for (i = 0; i < n; i++)
        {
            puts(pt[i]);
            free(pt[i]);
            pt[i] = NULL;
        }
        free(pt);
        pt = NULL;
        //��ָ����Ȼָ��malloc����Ĵ洢�ռ�;
        //�������ָ��ָ��NULL���ֹ�ڴ�����;
    }
    else
    {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}