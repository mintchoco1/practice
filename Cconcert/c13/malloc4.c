#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book{
    int number;
    char title[100];
};
int main(void){
    struct book *p;
    p = (struct book *)malloc(2 * sizeof(struct book));
    if(p == NULL){
        printf("메모리 할당 실패\n");
        exit(1);
    }
    p[0].number = 1;
    strcpy(p[0].title, "c programming");

    p[1].number = 2;
    strcpy(p[1].title, "data structure");
    
    for (int i = 0; i < 2; i++){
        printf("Book: %d\n", i + 1);
        printf("Number: %d\n", p[i].number);
        printf("Title: %s\n", p[i].title);
        printf("\n"); // 각 책 정보 사이에 공백 줄 추가
    }
    free(p);
    return 0;
}