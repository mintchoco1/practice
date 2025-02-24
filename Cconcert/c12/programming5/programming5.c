/*
사용자로부터 직원에 대한 정보를 받아서 employee.txt 파일에 저장하는 프로그램 직성
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char input[100];
    FILE *fp;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming5\\emp.txt", "wt");
    if(fp == NULL){
        printf("파일 오픈 실패");
        exit(1);
    }
    while(1){
        rewind(stdin);
        fgets(input, 100, stdin);//입력을 받을 때 개행문자(\n)도 함께 읽는다

        // 입력받은 문자열의 마지막에 있는 개행 문자 제거
        //hello\n 이라고 되어 있는걸 마지막 개행문자를 널문자로 바꾼다
        //매 입력마다 개행문자 삭제
        input[strcspn(input, "\n")] = '\0';

        // 종료 조건 검사
        if (strcmp(input, "quit") == 0) {
            break; // "quit" 입력 시 반복문 종료
        }
        fputs(input, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}