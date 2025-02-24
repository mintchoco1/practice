/* 
정수 100개를 저장할 수 있는 동적 메모리를 할당 받고 여기에 0 부터 99 사이으 난수를 저장한다
 이번에는 난수들 중에서 최대값을 찾아서 출력
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int *p;
    int max = 0;
    p = (int *)malloc(sizeof(int) * 100);

    for (int i = 0; i < 100; i++){
        p[i] = rand() % 100;//p에 난수 0~99 저장
    }
    max = p[0];
    for (int i = 1; i < 100; i++){
        if(max < p[i]){
            max = p[i];
        }
    }
    printf("최대값: %d", max);
    free(p);
    return 0;
}