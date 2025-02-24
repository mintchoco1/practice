#include <stdio.h>
#include <stdlib.h>

int main(void){
    int line_cnt = 0;
    int c = 0;
    char index[100];

    FILE *fp;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\file.txt", "rt");
    //파일에서부터 문장을 하나씩 읽는다
    //fgets 함수는 파일에서 한 줄을 읽어서 지정된 배열에 저장한다
    //index 는 데이터를 저장할 문자 배열의 주소
    //100 은 읽을 문자 수. 이 값에 널 문자(\0) 문자를 포함
    //읽기를 성공적으로 완료하면 읽은 문자열의 주소를 반환. 파일 끝에 도달하거나 오류 생기면 null 반환
    //fgets 함수는 줄바꿈 개행문자를 기준으로 데이터를 읽는다
    while(fgets(index,100,fp) != NULL){
        line_cnt++;
        printf("%s", index);
    }
    printf("\n라인 개수: %d", line_cnt);
    fclose(fp);
    return 0;
}