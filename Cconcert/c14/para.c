#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("총 인자 개수 : %d\n", argc);
    for (int i = 0; i < argc; i++)
        printf("[%d] %s\n", i, argv[i]);
    return 0;
}