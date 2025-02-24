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

	/****  ****/
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
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else 
	{
		cur = head; 
	//	printf("%d  ", cur->data);   // ù ��° ������ ���
		
		while(cur->next != NULL)    // �� ��° ������ ������ ���
		{
			cur = cur->next;
			printf("%d  ", cur->data);
		}
	}
	printf("\n\n");

	/**** �޸��� �������� ****/
	if(head == NULL) 
	{
		return 0;    // ������ ��尡 �������� �ʴ´�.
	}
	else 
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

	//	printf("%d��(��) �����մϴ�. \n", head->data);
	//	free(delNode);    // 첫 번째 노드의 삭제
		
		while(delNextNode != NULL)    // 두 번째 이후의 노드 삭제 위한 반복문
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d��(��) �����մϴ�. \n", delNode->data);
			free(delNode);    // 두 번째 이후의 노드 삭제
		}
	}

	return 0;
}