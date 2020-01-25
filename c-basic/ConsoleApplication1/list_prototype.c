#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
	int element;
	struct Node * next;
} Node;

//1.初始化线性表
void initList(Node **pNode) {
	*pNode = NULL;
	printf("initList函数执行，初始化成功\n");
}

//2.创建线性表
Node *createList(Node *pHead) {
	Node *p1;
	Node *p2;

	p1 = p2 = (Node *)malloc(sizeof(Node));
	if (p1 == NULL || p2 == NULL) {
		printf("内存分配失败\n");
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
			printf("内存分配失败\n");
			exit(0);
		}
		memset(p1, 0, sizeof(Node));
		scanf("%d", &p1->element);
		p1->next = NULL;
	}
	printf("creatList函数执行，链表创建成功\n");
	return pHead; 
}


//3.打印链表,链表的遍历
void printList(Node *pHead) {
	if (NULL == pHead) {
		printf("PrintList函数执行,链表为空\n");
	}
	else {
		while (NULL != pHead) {
			printf("%d", pHead->element);
			pHead = pHead->next;
		}
		printf("\n");
	}
}


//4.清除线性表L中的所有元素
void clearList(Node * pHead) {
	Node *pNext;
	if (pHead == NULL) {
		printf("clearList函数执行，链表为空\n");
		return;
	}
	while (pHead->next != NULL) {
		pNext = pHead->next; 
		free(pHead);
		pHead = pNext;
	}
	printf("clearList函数执行，链表已经清除\n");

}


//5.返回单链表的长度
int sizeList(Node *pHead) {
	int size = 0;
	while (pHead != NULL) {
		size++;
		pHead = pHead->next;
	}
	printf("sizeList函数执行,链表长度%d\n", size);
	return size;
}

//6.检查链表是否为空
int isEmptyList(Node *pHead) {
	if (pHead == NULL) {
		printf("isEmptyList函数执行,链表为空\n");
		return 1;
	}
	printf("isEmptyList函数执行，链表不为空\n");
	return 0;
}


//7.返回单链表宏的第pos个节点中的元素，若pos超出范围，则停止程序运行
int getElement(Node *pHead, int pos) {
	int i = 0;
	if (pos < 1) {
		printf("getElement函数执行,pos值非法\n");
		return 0;
	}
	if (pHead == NULL) {
		printf("getElement函数执行,链表为空\n");
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
		printf("getElement函数执行, pos值超出链表长度\n");
		return 0;
	}
	return pHead->element;
}

//8.从单链表中查找具有给定值x的第一个元素,若查找成功则返回该节点data域的存储地址
int *getElemAddr(Node * pHead, int x) {
	if (NULL == pHead) {
		printf("getElemAddr函数执行,链表为空\n");
		return NULL;
	}
	if (x < 0) {
		printf("getElemAddr函数执行,给定值X不合法\n");
		return NULL;
	}
	while ((pHead->element != x) && (NULL != pHead->next)) {
		pHead = pHead->next;
	}
	if ((pHead->element != x) && (pHead != NULL)) {
		printf("getElemAddr函数执行,在链表中未找到x值");
		return NULL;
	}
	if (pHead->element == x) {
		printf("getElemAddr函数执行,元素%d的地址0X%x\n", x, &(pHead->element));
	}

	return &(pHead->element); 
}

//9.把链表中第pos个节点修改为x的值
int modifyElem(Node *pNode, int pos, int x) {
	Node *pHead;
	pHead = pNode;
	int i = 0;

	if (NULL == pHead) {
		printf("modifyElem函数执行,链表为空\n");
	}
	if (pos < 1) {
		printf("modifyElem函数执行,pos值为空\n");
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
		printf("modifyElem函数执行,pos值超出链表长度\n");
		return 0;
	}
	pNode = pHead;
	pNode->element = x;
	printf("modifyElem函数执行\n");
	return 1;
}

//10.向链表的表头插入一个元素
int insertHeadList(Node **pNode, int insertElem) {
	Node *pInsert;
	pInsert = (Node *)malloc(sizeof(Node));
	memset(pInsert, 0, sizeof(Node));
	pInsert->element = insertElem;
	pInsert->next = *pNode;
	*pNode = pInsert;
	printf("insertHeadList函数执行,向表头插入元素成功\n");
	return 1;
}

//11.向单链表的末尾添加一个元素
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
	printf("insertLastList函数执行, 向表尾插入元素成功\n");
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