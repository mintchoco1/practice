#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\alphabeta.txt", "wt");
    char c;
    if(fp == NULL){
        printf("파일 출력 실패");
        exit(1);
    }
    fputs("C is so difficult", fp);
    fseek(fp, 0, SEEK_SET);
    fputs("is C is C", fp);
    fclose(fp);
    return 0;
}