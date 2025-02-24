#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define size 100

int main(void){
    char s[size] = {0};
    char upper[size] = {0};
    printf("문자를 입력하세요 : ");
    fgets(s, size, stdin);
    for (int i = 0; i < strlen(s); i++){
        upper[i] = toupper(s[i]);
    }
    printf("대문자 출력: %s\n", upper);
    return 0;
}