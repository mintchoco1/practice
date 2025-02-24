#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist){
	(plist->numOfData) = 0;//다음 데이터는 0 번 째 인덱스에 저장
	(plist->curPosition) = -1;//-1 은 아무런 위치도 참조하지 않았음을 의미. 
}

void LInsert(List * plist, LData data){
	if(plist->numOfData > LIST_LEN) {
		//더 이상 저장할 공간이 없다면
		puts("저장이 불가능합니다.");
		return;
	}
	plist->arr[plist->numOfData] = data;//데이터 저장
	(plist->numOfData)++;// 1 2 3 점점 증가해서 다음 인덱스로 이동
}

int LFirst(List * plist, LData * pdata){
	if(plist->numOfData == 0)
		return FALSE;

	(plist->curPosition) = 0;//참조 위치 초기화! 첫 번째 데이터의 참조를 의미//
	*pdata = plist->arr[0];
	return TRUE;
}

int LNext(List * plist, LData * pdata){
	if(plist->curPosition >= (plist->numOfData)-1)
		return FALSE;

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

LData LRemove(List * plist){
	int rpos = plist->curPosition;
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos];

	//삭제를 위한 데이터의 이동을 진행하는 반복문
	for(i=rpos; i<num-1; i++)
		plist->arr[i] = plist->arr[i+1];

	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}

int LCount(List * plist){
	return plist->numOfData;
}	