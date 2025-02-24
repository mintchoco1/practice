#include <stdio.h>
#include <string.h>
#define size 100

void circular(char word[]){
    for (int i = 0; i < strlen(word); i++){
        if(word[i] != word[strlen(word)-1]-i){
            break;
        }
        else{
            printf("%s는 회문입니다", word);
            return;
        }
    }
    printf("%s는 회문이 아닙니다", word);
}
int main(void){
    char word[size] = {0};
    printf("문자열을 입력하세요: ");
    fgets(word, size, stdin);
    circular(word);
    return 0;
}