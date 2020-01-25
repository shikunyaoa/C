#include <stdio.h>
#include <stdlib.h>

struct Node {
	struct Node * Next; //下一对象的位置
};

//创建一个链表
struct Node *Create(unsigned int Size) {
	struct Node *pHead = NULL;
	struct Node *pOne = NULL;
	struct Node *pPrevOne = NULL;
	int i;
	pOne = malloc(sizeof(struct Node));
	pOne->Next = NULL;
	pPrevOne = pHead = pOne;
	for (i = 0; i < Size; i++) {
		pPrevOne = pOne;
		pOne = (struct Node *)malloc(sizeof(struct Node));
		pPrevOne->Next = pOne;
	}

	return pHead;
}

//删除整个链表
void RemoveAll(struct Node *List) {
	struct Node *pPrevOne = NULL;
	struct Node *pOne = NULL;
	pOne = List;
	while (pOne->Next != NULL) {
		pPrevOne = pOne;
		pOne = pOne->Next;
		free(pPrevOne);
	}
}

//在链表中插入节点
int InsertElement(struct Node *List, int i, struct Node *Node) {
	struct Node *pOne = NULL;
	struct Node *pNewOne = NULL;
	int j = 0;
	pOne = List;
	while (pOne != NULL && (j < i - 1)) {
		pOne = pOne->Next;
		j++;
	}
	if ((pOne->Next == NULL) || (j > i - 1)) {
		return 0;  //第i个元素不存在
		
	}
	pNewOne = (struct Node *)malloc(sizeof(struct Node));
	pNewOne->Next = Node->Next;
	pNewOne->Next = pOne->Next;
	pOne->Next = pNewOne;
	return j;
}

//在链表中删除节点
int RemoveElement(struct Node *List, int i) {
	struct Node *pOne = NULL;
	struct Node *pDeleteOne = NULL;
	int j = 0;
	pOne = List; //指向数组的第一个节点
	while ((pOne != NULL) && (j < i - 1)) {
		pOne = pOne->Next;
		j++;
	}
	if ((pOne->Next == NULL) || (j > i - 1)) {
		return 0;
	}
	pDeleteOne = pOne->Next;
	pOne->Next = pDeleteOne->Next;
	free(pDeleteOne);
	return j;
}