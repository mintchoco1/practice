#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 100

void capitalize(char s[]){
    s[0] = toupper(s[0]);
    printf("결과 텍스트 출력: %s", s);
}
int main(void){
    char s[size] = {0};
    printf("텍스트를 입력하세요: ");
    fgets(s, size, stdin);
    capitalize(s);
    return 0;
}