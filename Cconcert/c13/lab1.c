#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p;
    int i, item;
    printf("항목의 개수는 몇개 입니까?\n");
    scanf("%d", &item);
    p = (int *)malloc(sizeof(int) * item);
    for (i = 0; i < item; i++){
        printf("\n입력된 값은 다음과 같습니다: \n");
        scanf("%d", &p[i]);
    }
    printf("\n입력된 값은 다음과 같습니다: \n");
    for (i = 0; i < item; i++) {
        printf("%d", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}