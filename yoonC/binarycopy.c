#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *src = fopen("src.bin", "wb");
    FILE *des = fopen("des.bin", "rb");
    char buf[20];
    int readcnt;
    if(src == NULL || des == NULL){
        puts("파일 오픈 실패");
        exit(1);
    }
    while(1){
        readcnt = fread((void *)buf, 1, sizeof(buf), src); // 20 바이트 src 에서 읽어서 buf에 저장
        if(readcnt < sizeof(buf)){
            if(feof(src) != 0){
                fwrite((void *)buf, 1, readcnt, des);
                puts("파일 복사 완료");
                break;
            }
            else{
                puts("파일 복사 실패");
            }
            break;
        }
        fwrite((void *)buf, 1, sizeof(buf), des);
    }
    fclose(src);
    fclose(des);
    return 0;
}