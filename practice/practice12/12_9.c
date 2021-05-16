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
            //↑使用malloc分配足够的存储空间来存储单词;
            if (NULL == pt[i])
            {
                printf("Memory allocation failed!\n");
                exit(EXIT_FAILURE);
            }
            strcpy(pt[i], temp);
            //↑从临时数组中把单词拷贝到动态分配的存储空间中;
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
        //↑指针仍然指向malloc分配的存储空间;
        //↑因此令指针指向NULL后防止内存滥用;
    }
    else
    {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}