#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi; //pi라는 포인터 변수 선언
    pi = (int *)malloc(5 * sizeof(int));//malloc에 int 5개가 메모리에 저장 총 20바이트 저장
    if(pi == NULL){
        printf("메모리 할당 오류\n");
        exit(1);
    }
    *pi = 1;
    *(pi + 1) = 2; 
    *(pi + 2) = 3;
    *(pi + 3) = 4;
    *(pi + 4) = 5;//총 숫자 5개 저장 int형
    //동적 메모리에 1,2,3,4,5 를 저장하는 for문
    /*
    for(int i = 0; i < 5; i++){
        p[i] = i + 1;
    }
    */
    free(pi);
    return 0;
}