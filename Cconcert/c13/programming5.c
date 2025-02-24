/*
구조체를 통해서 동적 메모리 할당으로 생성하는 프로그램을 작성
동적으로 생성된 구조체에는 {10,3.14,'a'} 를 저장한다
*/
#include <stdio.h>
#include <stdlib.h>
//구조체를 전역 영역에 정의
typedef struct rec{
    int i;
    float pi;
    char a;
} my_record;

int main(void){
    my_record *example;
    example = (my_record *)malloc(sizeof(my_record));
    example->i = 10;
    example->pi = 3.14;
    example->a = 'a';

    printf("%d\n",example->i);
    printf("%2f\n",example->pi);
    printf("%c\n",example->a);
    free(example);
    return 0;
}