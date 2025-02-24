/*
정수들이 저장된 파일 numbers.txt 에서 모든 정수를 읽어서 정수의 개수 , 합계 평균을 출력
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int c;
    int n = 0;
    int i = 0;//정수의 갯수
    int sum = 0;//총 합
    int average = 0;//평균

    FILE *fp;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\numbers.txt", "rt");//파일 읽기 모드
    if(fp == NULL){
        printf("파일 실패\n");
        exit(1);        
    }
    //fscanf 함수는 scanf와는 다르게 파일에 쓰여있는 데이터를 읽어올뿐이다
    //정수를 하나씩 파일 끝까지 읽는다. 하나씩 읽어서 sum 에 더한다
    while(fscanf(fp,"%d",&n) != EOF){
        sum += n;
        i++;//정수 하나 읽을 때 마다 갯수 늘려주기
    }
    average = sum / i;
    printf("정수 갯수: %d\n", i);
    printf("정수 합: %d\n", sum);
    printf("평균: %d\n", average);
    fclose(fp);
    return 0;
}