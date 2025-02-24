#include <stdio.h>
#include <string.h>
#define size 100

int main(void){
    char password[size] = {0};
    int is_lower, is_upper, is_digit;

    while(1){
        printf("암호를 입력하세요 :");
        fgets(password, size, stdin);
        is_lower = is_upper = is_digit = 0;
        for (int i = 0; i < strlen(password); i++){
            if(password[i]>='a'&&password[i]<='z'){
                is_lower = 1;
            }
            else if(password[i]>='A'&&password[i]<='Z'){
                is_upper = 1;
            }
            else if(password[i]>='0'&&password[i]<='9'){
                is_digit = 1;
            }
        }
        if(is_lower == 1 && is_upper == 1 && is_digit == 1){
            printf("올바른 암호입니다\n");
            break;
        }
        else{
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요\n");
        }
    }
    return 0;
}