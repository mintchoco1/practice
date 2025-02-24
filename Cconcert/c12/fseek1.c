#include <stdio.h>
#include <stdlib.h>

int main(void){
    long length;
    FILE *fp;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\binary.bin", "rb");
    if(fp == NULL){
        printf("파일 읽기 실패");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);//파일의 위치 지정자를 끝으로 옮긴다
    length = ftell(fp);//현재 파일 위치 지정자의 위치를 
    printf("파일 크기 = %d 바이트", length);
    fclose(fp);
    return 0;
}