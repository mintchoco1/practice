/*
a.txt에 어떠한 긴 글이 들어 있는데 
이 글을 입력 받아서 특정한 문자열을 검색하는 프로그램을 만들어보세요 (난이도 : 中)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\a.txt", "rt");
    char c;
    int i = 0, k = 1;
    if(fp == NULL){
        printf("파일 오픈 실패");
        exit(1);
    }
    while((c = fgetc(fp)) != EOF){
        i++;//파일에 적혀있는 긴 글
    }
    fseek(fp, 0, SEEK_SET);
    char fnd[3];
    while(k != 30){
        //최대 30번 돌린다
        fgets(fnd, 3, fp);//파일에서 2글자를 읽어서 배열 fnd 에 저장
                          //2글자인 이유는 마지막에 널문자가 포함되어있기 때문 \0
        fseek(fp, k++, SEEK_SET);//루프를 돌릴 때 마다 k의 값을 1씩 증가 시켜서 다음 검색 시작 위치를 한 글자 씩 옮긴다
        if(strcmp(fnd,"is") == 0){
            printf("%d 위치에 is가 있습니다.", k);
            return 0;
        }
        printf("%s\n", fnd);
    }
    return 0;
}