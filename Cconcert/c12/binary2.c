#include <stdio.h>
#define size 10

int main(void){
    int buffer[size];
    FILE *fp = NULL;
    int i;

    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\binary.bin", "rb");
    if(fp == NULL){
        fprintf(stderr, "binary.bin 파일을 열 수 없습니다.\n");
        return 1;
    }
    fread(buffer, sizeof(int), size, fp);
    for (i = 0; i < size; i++){
        printf("%d ", buffer[i]);
    }
    fclose(fp);
    return 0;
}