#include <stdio.h>

int main() {
    // 배열 초기화
    int num[] = {1, 12, 34, 56, 78, 90, 11, 22, 33, 44, 55, 66, 77, 88, 99, 21, 31, 41, 51, 61, 71, 81, 91, 19, 29, 39, 49, 59, 69, 79, 89, 18, 28, 38, 48, 58, 68, 78, 88, 98, 17, 27, 37, 47, 57, 67, 77, 87, 97};
    int *p = num;  // 배열의 시작 주소를 포인터 p에 할당
    int v;         // 결과 값을 저장할 변수

    // 작업 1
    p = p + 34;    // 포인터를 34번째 위치로 이동
    v = *p++;      // 현재 포인터 위치의 값을 v에 할당한 후 포인터를 한 위치 증가
    printf("작업 1:\n");
    printf("초기 p[34]의 값: 48\n");
    printf("작업 후 v의 값: %d\n", v);
    printf("작업 후 p[34]의 값: %d\n\n", num[34]);

    // 작업 2
    p = num + 25;  // 포인터를 배열의 시작으로 리셋하고 25번째 위치로 이동
    v = (*p)++;    // 포인터가 가리키는 값을 v에 할당하고 그 위치의 값을 1 증가
    printf("작업 2:\n");
    printf("초기 p[25]의 값: 89\n");
    printf("작업 후 v의 값: %d\n", v);
    printf("작업 후 p[25]의 값: %d\n\n", num[25]);

    // 작업 3
    p = num + 31;  // 포인터를 배열의 시작으로 리셋하고 31번째 위치로 이동
    v = *++p;      // 포인터를 한 위치 증가시킨 후 그 위치의 값을 v에 할당
    printf("작업 3:\n");
    printf("초기 p[32]의 값: 28\n");
    printf("작업 후 v의 값: %d\n", v);
    printf("작업 후 p[32]의 값: %d\n\n", num[32]);

    // 작업 4
    p = num + 41;  // 포인터를 배열의 시작으로 리셋하고 41번째 위치로 이동
    v = ++*p;      // 포인터가 가리키는 위치의 값을 1 증가시킨 후 그 값을 v에 할당
    printf("작업 4:\n");
    printf("초기 p[41]의 값: 27\n");
    printf("작업 후 v의 값: %d\n", v);
    printf("작업 후 p[41]의 값: %d\n", num[41]);

    return 0;
}
