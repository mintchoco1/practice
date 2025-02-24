#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define _crt_secure_no_warnings
#define size 50
int main(void){
    char s[size] = {0};
    char copy[size] = {0};
    int count = 0;

    printf("텍스트를 입력하세요 : ");
    fgets(s, size, stdin);

    for (int i = 0; i < strlen(s); i++){
        if(s[i] == ' ' && s[i+1] == ' '){
            continue;
        }
        else{
            copy[count++] = s[i];
        }
    }
//contiue 문은 두개의 연속된 공백을 만났을 때 실행
//continue 가 실행되면 for문에서 else 문을 실행하지 않고 다시 처음으로 돌아가 i의 다음 값을 실행
    copy[count] = '\0';
    printf("공백이 제거된 텍스트: ");
    for (int j = 0; j < strlen(copy); j++){
        printf("%c", copy[j]);
    }
    return 0;
}