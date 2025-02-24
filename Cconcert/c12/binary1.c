#include <stdio.h>
#define size 10
int main(void){
    int buffer[size] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    FILE *fp = NULL;
    fp = fopen("C:\\Users\\ldj23\\Desktop\\project\\Cconcert\\c12\\binary.bin", "wb");
    if(fp == NULL){
        fprintf(stderr, "binary.bin 파일을 열 수 없습니다");
        return 1;
    }
    fwrite(buffer, sizeof(int), size, fp);
    //buffer 의 내용을 파일에 이진 형태로 저장
    //첫 번째 인자는 데이터를 저장하고 있는 배열의 주소. 이 배열의 데이터를 읽어서 파일에 쓴다
    //두 번째 인자는 배열의 요소 크기. fwrite에 각 요소가 몇 바이트인지 알려준다
    //sizeof(int)는 배열의 요소가 메모리에서 차지하는 바이트 수
    //네 번째 인자는 데이터를 쓸 파일을 가리키는 파일 포인터
    fclose(fp);
    return 0;
    //이 파일은 텍스트 에디터로  읽을 수 없다
    //이 파일을 읽어서 화면에 표시하는 프로그램을 작성할 것
}