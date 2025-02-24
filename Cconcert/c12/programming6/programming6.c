/*
사용자가 입력하는 텍스트를 파일에 저장하여 주는 프로그램 작성
사용자가 공백 문자열을 입력하면 종료하는 것
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char input[100];
    char name[100];
    printf("파일명을 입력하세요: ");
    scanf("%s", name);
    FILE *fp;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming6\\test.txt", "wt");
    if(fp == NULL){
        printf("파일 오픈 실패");
        exit(1);
    }
    while(1){
        rewind(stdin);
        fgets(input, 100, stdin);//개행문자 붙음 끝에
        input[strcspn(input, "\n")] = '\0';
        //strcmp 는 문장 단위로 읽는다. string 은 문장 단위로 읽는다
        if(strcmp(input," ") == 0){
            break;
        }
        fputs(input, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}