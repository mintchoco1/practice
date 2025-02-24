#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE	1//참을 표현하기 위한 매크로 정의
#define FALSE	0//거짓을 표현하기 위한 매크로 정의
#define LIST_LEN	100

typedef int LData;//저장할 대상의 자료형을 변경을 위한 typedef 선언

typedef struct __ArrayList
{
	LData arr[LIST_LEN];//리스트의 저장소인 배열
	int numOfData;//저장된 데이터의 수
	int curPosition;//데이터 참조위치를 기록
} ArrayList;

typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif