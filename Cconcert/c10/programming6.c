#define _crt_secure_no_warnings
#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#define size 100

int main(void){
    char text[size] = {0};
    printf("문자를 입력하세요: ");
    fgets(text, size, stdin);

    size_t length = strlen(text);
    if (length > 0 && text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }

    text[0] = toupper(text[0]);
    if(text[strlen(text) - 1] != ' ')
        strcat(text, ".");
    printf("결과 텍스트 출력: %s", text);
    return 0;
}