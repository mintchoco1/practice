#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

int main(void){
    srand(time(NULL));//실행 할 때 마다 다른 숫자 생성
    int *p = NULL;
    int i = 0;
    p = (int *)malloc(size * sizeof(int));//intrk 100개 총 400바이트가 메모리에 할당
    if(p == NULL){
        printf("메모리 할당 오류\n");
        exit(1);
    }
    for (i = 0; i < size; i++){
        p[i] = rand();//동적 메모리를 난수로 할당
                      //rand 함수는 0 부터 32767까지의난수를 생성
    }
    int max = p[0];//배열의 첫 번째 요소를 최대값으로 초기 설정
                   //배열을 순회 하면서 각 요소가 최대값보다 큰지 비교하고 더 큰 값을 찾으면 최대값을 새로 갱신
                   //왜 i 가 1 부터 시작하는 이유는 0번째 배열을 max에 저장했기 때문에 0 부터 할 이유가 없음
    for (i = 1; i < size; i++){
        if(p[i] > max)
            max = p[i];
    }
    printf("최대값 = %d \n", max);
    free(p);
    return 0;
}