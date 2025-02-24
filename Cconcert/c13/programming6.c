/*
사용자에게 구조체의 개수를 입력하도록 요청하고 개수만큼의 동적 메모리를 할당 받은 후에 구조체에
값을 저장한다. 입력이 끝나면 구조체에 저장된 값을 화면에 출력
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct course{
    char subject[30];
    double marks;
};
int main(void){
    int num = 0;
    struct course *p;
    p = (struct course *)malloc(sizeof(struct course));
    printf("구조체 개수: ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 0; i < num; i++){
        rewind(stdin);
        printf("과목명을 입력하세요: ");
        fgets(p[i].subject, 30, stdin);
        //fgets 함수는 입력 받은 문자열에 개행문자 \n 을 포함시킴
        //사용자가 입력을 마치고 엔터 키를 누를 때 발생하는 개행문자를 문자열의 일부로 취급
        p[i].subject[strcspn(p[i].subject, "\n")] = '\0';
        printf("성적을 입력하세요: ");
        scanf("%lf", &p[i].marks);
        getchar();
    }
    printf("\n=============정보 출력================\n");
    for (int i = 0; i < num; i++){
        printf("%s : %lf\n", p[i].subject, p[i].marks);
    }
    free(p);
    return 0;
}