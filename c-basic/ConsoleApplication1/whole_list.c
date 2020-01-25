#include <stdio.h>
#include <stdlib.h>

struct Node {
	struct Node * Next; //��һ�����λ��
};

//����һ������
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

//ɾ����������
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

//�������в���ڵ�
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
		return 0;  //��i��Ԫ�ز�����
		
	}
	pNewOne = (struct Node *)malloc(sizeof(struct Node));
	pNewOne->Next = Node->Next;
	pNewOne->Next = pOne->Next;
	pOne->Next = pNewOne;
	return j;
}

//��������ɾ���ڵ�
int RemoveElement(struct Node *List, int i) {
	struct Node *pOne = NULL;
	struct Node *pDeleteOne = NULL;
	int j = 0;
	pOne = List; //ָ������ĵ�һ���ڵ�
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