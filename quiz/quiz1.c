#include <stdio.h>

int main() {
    int numbers[] = {1234, 2456, 3789, 4123, 1578, 4987, 3245, 2876, 1998, 4765, 3344, 4122, 1567, 2678, 3456};
    int n = sizeof(numbers) / sizeof(numbers[0]);  // 배열의 길이 계산
    int sum = 0;  // 합을 저장할 변수 초기화

    for (int i = 0; i < n; i++) {
        sum += *(numbers + i);  // 포인터를 이용해 배열 요소에 접근하여 합산
    }

    printf("Sum of array elements: %d\n", sum);  // 결과 출력
    return 0;
}
