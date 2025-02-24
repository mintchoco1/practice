#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fp = NULL;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\alphabet.txt", "wt");
    if(fp==NULL){
        fprintf(stderr, "파일 alphabet.txt 를 열 수 없습니다.\n");
        exit(1);
    }
    char c;//문자를 a 부터 z 까지 입력
    for (c = 'a'; c <= 'z'; c++){
        fputc(c, fp);
    }
    fclose(fp);
    return 0;
}