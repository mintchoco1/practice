#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fp = fopen("simple.txt", "wt");
    if(fp == NULL){
        puts("파일 오픈 실패");
        exit(1);
    }
    fputc('A', fp);
    fputc('B', fp);
    fputs("MY name id Hong \n", fp);//문자열을 구분하는 기준은 마지막에 저장되는 NULL 문자.
    fputs("Your name is Yoon \n", fp);//문자열을 구분 짓기 위해서 NULL 문자 넣어준다 \n 문자열을 읽어낼 때 의미가 있다
    //\n 은 개행이 목적이 아니라 문자열의 끝을 알려주는 용도
    fclose(fp);
    return 0;
    //파일에 저장된 문자열의 끝에는 널이 존재하지 않는다.
    //때문에 파일을 대상으로 문자열을 입출력 할 때에는 새행을 의미하는 \n을 문자열의 마지막에 넣어줘야 한다.
    //\n 을 기준으로 문자열을 구문하기 때문이다
}