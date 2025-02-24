#include <stdio.h>
#define debug

void calc_array_avg(int *ptr){
    int sum = 0;
#ifdef debug
    printf("배열의 평균을 계산합니다.\n");
    printf("calc_array_avg()\n");
    for (int j = 0; j < 9; j++){
        printf("%d ", j + 1);
    }
    printf("\n");
    for (int i = 0; i < 10; i++){
         printf("%d를 더하는중\n", i + 1);
         sum += ptr[i];
    }
    printf("평균 = %d", sum/10);
#endif
}

int main(void){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    calc_array_avg(array);
    return 0;
}