#include <stdio.h>
int sum(int a[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += a[i];
    }
    return sum;
}
void print_array(int a[], int size){
    for (int k = 0; k < size; k++){
        printf("%d ", a[k]);
    }
    printf("\n");
}