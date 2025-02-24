#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strlen 함수를 위해 추가
#include "hello.h"

int main(void) 
{
    char name[10];
    printf("성명을 입력해주세요: ");
    if (fgets(name, sizeof(name), stdin)) {
        // 줄바꿈 문자 제거
        name[strcspn(name, "\n")] = '\0';
    }
    hello(name);
    return 0;
}
/*
이 코드에서 fgets 함수는 stdin에서 최대 sizeof(name)-1 문자를 읽고, 
마지막에 널 문자를 추가합니다. 만약 사용자가 줄바꿈 문자를 입력하기 전에 버퍼가 꽉 차면, 
버퍼에 남은 공간만큼만 읽고 줄바꿈 문자는 남겨둡니다. 
따라서 줄바꿈 문자가 입력된 경우, strcspn 함수를 사용하여 해당 위치를 널 문자로 대체함으로써 문자열의 끝을 정의합니다. 
이렇게 하면 hello 함수에 올바른 문자열이 전달됩니다.
*/