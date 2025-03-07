#include <stdio.h>
#include <stdlib.h>
//문제 4-2 답안
//더미 노드가 추가되면 코드가 간결해진다
typedef struct _node
{
	int data;
	struct _node * next;
} Node;

int main(void)
{
	Node * head = NULL;
	Node * tail = NULL;
	Node * cur = NULL;

	Node * newNode = NULL;
	int readData;

	head = (Node*)malloc(sizeof(Node));    // 추가 된 문장. 더미 노드 추가. 더미 노드를 헤드가 가리킴
	tail = head;	

	/*데이터를 입력받는 과정*/
	while(1)
	{
		printf("자연수 입력: ");
		scanf("%d", &readData);
		if(readData < 1)
			break;

		/*** 노드의 추가 과정 ***/
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		/*
		if(head == NULL)
			head = newNode;
		else
			tail->next = newNode; 
		*/
		tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	/**** 입력 받은 데이터의 출력 과정 ****/
	printf("입력 받은 데이터의 전체 출력! \n");
	if(head == NULL) 
	{
		printf("저장된 자연수가 존재하지 않습니다. \n");
	}
	else 
	{
		cur = head; 
	//	printf("%d  ", cur->data);   // 첫 번째 데이터 출력
		
		while(cur->next != NULL)    // 두 번째 이후의 데이터 출력 위한 반복문
		{
			cur = cur->next;
			printf("%d  ", cur->data);
		}
	}
	printf("\n\n");

	/**** 메모리 해제 과정****/
	if(head == NULL) 
	{
		return 0;    // 해제할 노드가 존재하지 않는다
	}
	else 
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

	//	printf("%d를 삭제합니다. \n", head->data);
	//	free(delNode);    // 첫 번째 노드의 삭제
		
		while(delNextNode != NULL)    // 두 번째 이후의 노드 삭제 위한 반복문
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d를 삭제합니다. \n", delNode->data);
			free(delNode);    // 두 번째 이후의 노드 삭제
		}
	}

	return 0;
}