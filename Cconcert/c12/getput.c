#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    FILE *fp;
    char str[100];

    fp = fopen("file.txt", "w");
    if(fp == NULL){
        fprintf(stderr, "파일 file.txt 를 열 수 없습니다");
        exit(1);
    }
    do{
        gets_s(str, sizeof(str));
        fputs(str, fp);
    } while (strlen(str) != 0);
    fclose(fp);
    return 0;
}