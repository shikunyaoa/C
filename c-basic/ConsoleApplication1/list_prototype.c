#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
	int element;
	struct Node * next;
} Node;

//1.��ʼ�����Ա�
void initList(Node **pNode) {
	*pNode = NULL;
	printf("initList����ִ�У���ʼ���ɹ�\n");
}

//2.�������Ա�
Node *createList(Node *pHead) {
	Node *p1;
	Node *p2;

	p1 = p2 = (Node *)malloc(sizeof(Node));
	if (p1 == NULL || p2 == NULL) {
		printf("�ڴ����ʧ��\n");
		exit(0);
	}
	memset(p1, 0, sizeof(Node));
	
	scanf("%d", &p1->element);
	p1->next = NULL;
	while (p1->element > 0) {
		if (pHead == NULL) {
			pHead = p1;
		}
		else {
			p2->next = p1;
		}
		p2 = p1;
		p1 = (Node *)malloc(sizeof(Node));
		if (p1 == NULL || p2 == NULL) {
			printf("�ڴ����ʧ��\n");
			exit(0);
		}
		memset(p1, 0, sizeof(Node));
		scanf("%d", &p1->element);
		p1->next = NULL;
	}
	printf("creatList����ִ�У��������ɹ�\n");
	return pHead; 
}


//3.��ӡ����,����ı���
void printList(Node *pHead) {
	if (NULL == pHead) {
		printf("PrintList����ִ��,����Ϊ��\n");
	}
	else {
		while (NULL != pHead) {
			printf("%d", pHead->element);
			pHead = pHead->next;
		}
		printf("\n");
	}
}


//4.������Ա�L�е�����Ԫ��
void clearList(Node * pHead) {
	Node *pNext;
	if (pHead == NULL) {
		printf("clearList����ִ�У�����Ϊ��\n");
		return;
	}
	while (pHead->next != NULL) {
		pNext = pHead->next; 
		free(pHead);
		pHead = pNext;
	}
	printf("clearList����ִ�У������Ѿ����\n");

}


//5.���ص�����ĳ���
int sizeList(Node *pHead) {
	int size = 0;
	while (pHead != NULL) {
		size++;
		pHead = pHead->next;
	}
	printf("sizeList����ִ��,������%d\n", size);
	return size;
}

//6.��������Ƿ�Ϊ��
int isEmptyList(Node *pHead) {
	if (pHead == NULL) {
		printf("isEmptyList����ִ��,����Ϊ��\n");
		return 1;
	}
	printf("isEmptyList����ִ�У�����Ϊ��\n");
	return 0;
}


//7.���ص������ĵ�pos���ڵ��е�Ԫ�أ���pos������Χ����ֹͣ��������
int getElement(Node *pHead, int pos) {
	int i = 0;
	if (pos < 1) {
		printf("getElement����ִ��,posֵ�Ƿ�\n");
		return 0;
	}
	if (pHead == NULL) {
		printf("getElement����ִ��,����Ϊ��\n");
		return 0;
	}
	while (pHead != NULL) {
		++i;
		if (i == pos) {
			break;
		}
		pHead = pHead->next;
	}
	if (i < pos) {
		printf("getElement����ִ��, posֵ����������\n");
		return 0;
	}
	return pHead->element;
}

//8.�ӵ������в��Ҿ��и���ֵx�ĵ�һ��Ԫ��,�����ҳɹ��򷵻ظýڵ�data��Ĵ洢��ַ
int *getElemAddr(Node * pHead, int x) {
	if (NULL == pHead) {
		printf("getElemAddr����ִ��,����Ϊ��\n");
		return NULL;
	}
	if (x < 0) {
		printf("getElemAddr����ִ��,����ֵX���Ϸ�\n");
		return NULL;
	}
	while ((pHead->element != x) && (NULL != pHead->next)) {
		pHead = pHead->next;
	}
	if ((pHead->element != x) && (pHead != NULL)) {
		printf("getElemAddr����ִ��,��������δ�ҵ�xֵ");
		return NULL;
	}
	if (pHead->element == x) {
		printf("getElemAddr����ִ��,Ԫ��%d�ĵ�ַ0X%x\n", x, &(pHead->element));
	}

	return &(pHead->element); 
}

//9.�������е�pos���ڵ��޸�Ϊx��ֵ
int modifyElem(Node *pNode, int pos, int x) {
	Node *pHead;
	pHead = pNode;
	int i = 0;

	if (NULL == pHead) {
		printf("modifyElem����ִ��,����Ϊ��\n");
	}
	if (pos < 1) {
		printf("modifyElem����ִ��,posֵΪ��\n");
		return 0;
	}

	while (pHead != NULL) {
		++i;
		if (i == pos) {
			break;
		}
		pHead = pHead->next;
	}
	if (i < pos) {
		printf("modifyElem����ִ��,posֵ����������\n");
		return 0;
	}
	pNode = pHead;
	pNode->element = x;
	printf("modifyElem����ִ��\n");
	return 1;
}

//10.������ı�ͷ����һ��Ԫ��
int insertHeadList(Node **pNode, int insertElem) {
	Node *pInsert;
	pInsert = (Node *)malloc(sizeof(Node));
	memset(pInsert, 0, sizeof(Node));
	pInsert->element = insertElem;
	pInsert->next = *pNode;
	*pNode = pInsert;
	printf("insertHeadList����ִ��,���ͷ����Ԫ�سɹ�\n");
	return 1;
}

//11.�������ĩβ���һ��Ԫ��
int insertLastList(Node **pNode, int insertElem) {
	Node *pInsert;
	Node *pHead;
	Node *pTmp;

	pHead = *pNode;
	pTmp = pHead;
	pInsert = (Node *)malloc(sizeof(Node));
	memset(pInsert, 0, sizeof(Node));
	pInsert->element = insertElem;

	while (pHead->next != NULL) {
		pHead = pHead->next;
	}
	pHead->next = pInsert;
	*pNode = pTmp;
	printf("insertLastList����ִ��, ���β����Ԫ�سɹ�\n");
	return 1;
}


int main() {

	Node *pList = NULL;
	int length = 0;
	
	int posElem;

	initList(&pList);
	printList(pList);

	pList = createList(pList);
	printList(pList);

	sizeList(pList);
	printList(pList);

	isEmptyList(pList);

	posElem = getElement(pList, 3);

	getElemAddr(pList, 5);

	modifyElem(pList, 4, 1);
	printList(pList);

	insertHeadList(&pList, 5);
	printList(pList);

	insertLastList(&pList, 10);
	printList(pList);


	clearList(pList);
	system("pause");
}