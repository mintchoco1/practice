/*
다음의 매크로를 테스트하는 프로그램을 작성하라.
SETBIT(x, n)는 변수 x의 비트 위치 n을 1로 만든다.
CLEARBIT(x, n)는 변수 x의 비트 위치 n을 0로 만든다.
TESTBIT(x, n)는 변수 x의 비트 위치 n을 검사한다.
#define SETBIT(x, n) ((x) |= (1<<(n)))
#define CLEARBIT(x, n) ((x) &= ~(1<<(n)))
#define TESTBIT(x, n) ((x) & (1<<(n)))
*/
#include <stdio.h>
//변수 x의 n비트 이동시키는 연산
#define SETBIT(x, n) ((x) |= (1<<(n)))

#define CLEARBIT(x, n) ((x) &= ~(1<<(n)))

#define TESTBIT(x, n) ((x) & (1<<(n)))

int main(void){
    int x = 0x1011;

    printf("SETBIT(x,8)전 변수 x = %x\n", x);
    SETBIT(x, 8);
    printf("SETBIT(x,8)후 변수 x = %x\n", x);

    printf("CLEARBIT(x,8)전 변수 x = %x\n", x);
    CLEARBIT(x, 8);
    printf("CLEARBIT(x,8)후 변수 x = %x\n", x);
    return 0;
}