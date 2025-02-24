#define _crt_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct movie{
    char title[100];
    double rating;
};
int main(void){
    struct movie *ptr;
    int i, n;
    printf("영화의 개수: ");
    scanf("%d", &n);
    getchar();

    ptr = (struct movie *)malloc(sizeof(struct movie) * n);
    if(ptr == NULL){
        printf("메모리 할당 실패\n");
        exit(1);
    }
    for (i = 0; i < n; i++){
        printf("영화 제목: ");
        fgets(ptr[i].title, 100, stdin);
        ptr[i].title[strcspn(ptr[i].title, "\n")] = '\0';
        //title 문자열에서 처음으로 개행문자가 처음으로 등장하는 부분에서 널문자로 대체한다
        printf("영화 평점: ");
        scanf("%lf", &ptr[i].rating);
        getchar();
    }
    printf("\n=======================================\n");
    for (i = 0; i < n; i++){
        printf("영화 제목: %s\n", ptr[i].title);
        printf("영화 평점: %lf\n", ptr[i].rating);
    }
    printf("\n=======================================\n");
    free(ptr);
    return 0;
}