/*
두개의 텍스트 파일을 하나의 파일로 합치는 프로그램
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp1;
    fp1 = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming8\\a.txt", "rt");
    FILE *fp2;
    fp2 = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming8\\b.txt", "rt");
    FILE *result;
    result = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming8\\c.txt", "wt");
    int ch1, ch2;
    char str1[50], str2[50];
    while(fgets(str1,100,fp1) != NULL){
        fputs(str1, result);//읽은 문자열을 result 파일에 출력
    }
    while(fgets(str2,100,fp2) != NULL){
        fputs(str2, result);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(result);
    return 0;
}