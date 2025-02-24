/* 
 두개의 텍스트 파일을 배교하여 같은지 다른지를
 알려주는 프로그램 작성
*/
#include <stdio.h>
#include <stdlib.h> 

int main(void){
    char file1[100];
    char file2[100];
    char ch1, ch2;
    printf("첫 번째 파일 이름: ");
    scanf("%s", &file1);
    printf("첫 번째 파일 이름: ");
    scanf("%s", &file2);
    int pos;
    FILE *fp1;
    fp1 = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming4\\one.txt", "rt");
    if(fp1 == NULL){
        printf("파일 오픈 실패");
        exit(1);
    }
    FILE *fp2;
    fp2 = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\programming4\\two.txt", "rt");
    if(fp2 == NULL){
        printf("파일 오픈 실패");
        exit(1);
    }
    while(((ch1 = fgetc(fp1)) != EOF) && ((ch2 = fgetc(fp2)) != EOF)){
        if(ch1 == ch2){
            printf("문자같음\n");
        }
        else if(ch1 != ch2){
            exit(1);
        }
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}