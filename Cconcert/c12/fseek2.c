#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\data.txt", "wt");
    if(fp == NULL){
        printf("파일 쓰기 실패");
        exit(1);
    }
    fputs("this is an house", fp);
    fseek(fp, 11, SEEK_SET);
    fputs("apple", fp);
    fclose(fp);
    return 0;
}