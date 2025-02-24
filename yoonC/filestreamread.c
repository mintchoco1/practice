#include <stdio.h>
#include <stdlib.h>
int main(void){
    char str[30];
    int ch;
    //write 한 순서대로 read 해야한다
    FILE *fp = fopen("simple.txt", "rt");
    if(fp == NULL){
        puts("파일 오픈 실패");
        exit(1);
    }
    ch = fgetc(fp);//문자 하나 읽기
    printf("%c \n", ch);//문자 하나 출력
    ch = fgetc(fp);
    printf("%c \n", ch);
    fgets(str, sizeof(str), fp);// fp로 부터 str 크기만큼 str에 저장
    printf("%s", str);
    fgets(str, sizeof(str), fp);
    //fgets는 문자열의 끝을 개행 문자로 구분한다.
    //만약에 개행문자가 없으면 크기가 허용하는 만큼 쭉 읽는다
    printf("%s", str);
    fclose(fp);
    return 0;
}