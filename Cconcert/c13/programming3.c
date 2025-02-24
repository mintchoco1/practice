#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int *p;
    int sum = 0;

    p = (int *)malloc(sizeof(int) * 100);
        //p 포인터에 할당된 메모리 블록은 배열과 유사하게 작동
        //p[i] 형식을 사용해서 각 요소에 접근 가능
    for (int i = 0; i < 100; i++){
        p[i] = rand() % 100;//0 부터 99까지 난수 생성
        sum += p[i];
    }
    printf("평균: %d", sum / 100);
    free(p);
    return 0;
}