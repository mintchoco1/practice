#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num;
    double big;
    double *array;
    array = (double *)malloc(sizeof(double) * num);
    printf("요소의 개수: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("요소 %d: ", i + 1);
        scanf("%lf", &array[i]);
    }
    for (int i = 0; i < num - 1; i++){
        if(array[i] < array[i+1]){
            big = array[i + 1];
        }
    }
    printf("최댓값: %.2lf\n", big);
    free(array);
    return 0;
}