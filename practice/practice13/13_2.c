// ��дһ���ļ��������򣬸ó���ͨ�������л�ȡԭʼ�ļ����Ϳ����ļ�����
// ����ʹ�ñ�׼ I/O �Ͷ�����ģʽ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define BUF 512

int main(int argc, char* argv[])
{
    size_t bytes;
    FILE* source;
    FILE* target;
    static char temp[BUF];

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s sourcefile targetfile\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((source = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((target = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while ((bytes = fread(temp, sizeof(char), BUF, source)) > 0) //�Զ�����ģʽ�����ļ�����;
    {
        fwrite(temp, sizeof(char), bytes, target); //�Զ�����ģʽд�뵽�ļ���;
    }
    if (fclose(source) != 0)
    {
        fprintf(stderr, "Can't close %s\n", argv[1]);
    }
    if (fclose(target) != 0)
    {
        fprintf(stderr, "Can't close %s\n", argv[2]);
    }

    return 0;
}
