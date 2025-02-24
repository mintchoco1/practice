#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    double sum;
    double *array;

    printf("요소의 개수: ");
    scanf("%d", &num);

    array = (double *)malloc(sizeof(double) * num);
    for (int i = 0; i < num; i++){
        printf("배열의 요소를 입력하세요: ");
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    printf("합: %.2lf\n", sum);
    free(array);
    return 0;
}