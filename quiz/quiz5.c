/*
제13장 동적메모리(강의) ppt 25/26페이지에  "Mini Project: 연결 리스트 만들어보기"가 있다.

26페이지의 struct NODE에서 link를 두 개 만들어서, 1) 임의의 binary tree를 표현 할 수 있는 code를 작성해 보자.

binary tree가 무엇인지 검색 해 볼 것, it's simple. 

사용자가 data를 입력하는대로 받아가면서, list로 연결된 binary tree를 구성하는 code이다. 

만들어진 binary tree를 image로 출력하려면 유료계정이 필요하므로, 챗GPT에게 알아서 2) 출력해 보라고 하면 된다. 

아직 공부하지 않은 내용이 필요하고, 설명되지 않은 부분이 있지만, 챗GPT가 알아서 잘 작성해 준다. 챗GPT가 작성한 code를 보면서 내용을 이해하기 바란다. 

제출할 것: 1) and 2)
*/
#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE* left;
    struct NODE* right;
};

// 새 노드를 생성하고 초기화하는 함수
struct NODE* createNode(int data) {
    struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// 이진 트리에 노드를 재귀적으로 삽입하는 함수
struct NODE* insert(struct NODE* root, int data) {
    if (root == NULL) { // 트리가 비어있는 경우
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// 이진 트리를 출력하는 함수 (중위 순회)
void inorderPrint(struct NODE* root) {
    if (root != NULL) {
        inorderPrint(root->left);
        printf("%d ", root->data);
        inorderPrint(root->right);
    }
}

// 모든 노드의 메모리를 해제하는 함수
void freeTree(struct NODE* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    struct NODE* root = NULL; // 이진 트리의 루트
    int data;

    printf("Enter node values to insert into the Binary Tree (end with -1):\n");
    while (scanf("%d", &data) && data != -1) {
        root = insert(root, data);
    }

    printf("The inorder traversal of the Binary Tree is:\n");
    inorderPrint(root);
    printf("\n");

    freeTree(root); // 트리의 모든 노드에 대한 메모리 해제
    return 0;
}
