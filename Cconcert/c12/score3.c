#include <stdio.h>

int main(void){
    FILE *fp;
    int number;
    char name[30];
    int score;
    char ch;

    //성적 파일을 쓰기 모드로 연다
    fp = fopen("scores.txt", "w");
    if(fp == NULL){
        printf("성적 파일을 열 수 없습니다.\n");
        exit(1);
    }
    do{
        printf("\n학번 : ");
        scanf("%d", number);
        printf("\n이름 : ");
        scanf("%s", name);
        printf("성적 : ");
        scanf("%d", &score);

        fprintf(fp, "%d %s %d \n", number, name, score);
        printf("데이터 추가를 계속? (y/n) : ");
        ch = getchar();
    } while (ch != 'n');
    fclose(fp);
    return 0;
}