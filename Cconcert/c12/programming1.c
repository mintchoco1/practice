/*
텍스트 파일의 내용을 읽어서 그대로 화면에 출력하여 주는 프로그램 작성
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char name[100];
    int c;
    int i = 0;

    printf("파일명을 입력하세요: ");
    fgets(name, 100, stdin);//개행문자 제거 필요

    FILE *fp = NULL;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\good.txt", "rt");
    if(fp == NULL){
        printf("파일 열기 실패\n");
        exit(1);
    }

    printf("%d", i++);
    while((c = fgetc(fp)) != EOF){
        if(ftell(fp) == 17){
            printf("%d", i);
        }
        putchar(c);
    }
    fclose(fp);
    return 0;
}