#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mainv(void){
    int different = 0;
    FILE *fp1;
    FILE *fp2;
    char index1[50], index2[50];
    fp1 = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming7\\one.txt", "rt");
    fp2 = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming7\\two.txt", "rt");
    if(fp1 == NULL){
        printf("파일 오픈 실패");
        exit(1);
    }
    if(fp2 == NULL){
        printf("파일 오픈 실패");
        exit(1);
    }
    while(fgets(index1,50,fp1) && fgets(index2,50,fp2)){
        if(strcmp(index1,index2) != 0){
            printf("\n다른 부분 %s 과 %s \n", index1, index2);
            int different = 1;
        }
    }
    if(!different){
        printf("\n file same");
    }
    if(!feof(fp1) || !feof(fp2)){
        printf("\nfile differnt");
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}