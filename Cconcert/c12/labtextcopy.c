#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *text = fopen("C:\\Users\\ldj23\\Desktop\\project\\text.txt", "rt");
    FILE *copy = fopen("copy.txt", "wt");
    char ch;
    if(text == NULL || copy == NULL){
        printf("파일 복사 실패");
        exit(1);
    }
    while((ch = fgetc(text)) != EOF){
        fputc(ch, copy);
    }
    fclose(text);
    fclose(copy);
    return 0;
}