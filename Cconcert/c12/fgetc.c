#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp = NULL;
    int c;
    fp = fopen("alphabet.txt", "r");
    if(fp == NULL){
        fprintf(stderr, "원본 파일 alphabet.txt 를 열 수 없습니다.\n");
        exit(1);
    }
    //읽기 모드로 파일에서 문자 하나씩 읽어오는데 개행문자를 만나면 끝난다
    while((c = fgetc(fp)) != EOF){
        putchar(c);//읽어오는 문자 하나씩 출력
                   //단일 문자를 출력
    }
    fclose(fp);
    return 0;
}