/*
&&를 and 로 바꾸기
어느 학교에서 학생이 졸업하려면 120학점을 따야하고 성적평균이 2.0이상이
어야 한다고 하자. 학점과 성적평균을 물어봐서 졸업여부를 판정하는 프로그램
을 작성하자. 단 &&나 || 대신에 and와 or를 사용한다.
*/
#define _crt_secure_no_warnings
#include <stdio.h>
#define And &&
#define Or ||
int main(void){
    int totalgrade;
    double avggrade;
    printf("지금까지 획득한 총 학점: ");
    scanf("%d", &totalgrade);
    printf("지금까지 획득한 학점평균: ");
    scanf("%lf", &avggrade);
    if(totalgrade>=120 And avggrade>=2.0)
        printf("졸업 가능");
    else
        printf("졸업 불가능");

    return 0;
}