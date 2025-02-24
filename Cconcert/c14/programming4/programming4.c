#include <stdio.h>
#include "array.h"

int main(void){
    int array[5] = {0, 1, 2, 3, 4};
    printf("배열의 원소: ");
    print_array(array, 5);
    printf("배열의 원소들의 합: %d", sum(array, 5));
    printf("\n");
    return 0;
}