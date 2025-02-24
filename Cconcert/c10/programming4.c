#include <stdio.h>
#define size 100

int main(void){
    char s[size] = {0};
    char result[size] = {0};
    int i = 0;
    int j = 0;
    printf("텍스트를 입력하세요: ");
    fgets(s, size, stdin);
    while(s[i] != '\0'){
        if(s[i] != 'a' && s[i] != 'i' && s[i] != 'e' && s[i] != 'o' && s[i] != 'u'){
            result[j] = s[i];//모음이 아닐 때 true
            j++; //모음이 아니면 그냥 저장하고 다음 인덱스로 넘어감
        }
        i++;//만약 모음이면 아무런 행동을 안하고 다음 인덱스호 넘어감
    }
    result[j] = '\0';//문자열 마지막에 null 문자 추가
    printf("최종 텍스트: %s", result);
    return 0;
}