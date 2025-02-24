#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define size 100

void add_name(char base[], char png[], int index) {
    char filename[size] = {0}; // 임시로 파일 이름을 저장할 배열
    sprintf(filename, "%s%d%s", base, index, png); // 기본 이름, 숫자, 확장자를 합칩니다.
    printf("생성된 파일 이름: %s\n", filename); // 생성된 파일 이름을 출력합니다.
}

int main(void) {
    char base[size] = {0}; // 기본 파일 이름을 저장할 배열
    char png[] = ".png"; // 확장자

    printf("파일의 이름의 첫 부분을 입력하세요: ");
    fgets(base, size, stdin);

    // fgets로 입력 받은 문자열에서 개행 문자 제거
    size_t len = strlen(base);
    if (len > 0 && base[len - 1] == '\n') {
        base[len - 1] = '\0';
    }

    // 5개의 파일 이름 생성
    for (int i = 0; i < 5; i++) {
        add_name(base, png, i); // 각 파일 이름을 생성하는 함수 호출
    }
    return 0;
}
