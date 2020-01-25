#include <stdio.h>
#define NULL 0
typedef struct node
{
	int info;
	struct node * next;
} LINKLIST;

//创建一个单向链表
main() {
	LINKLIST *head, *p, x, y, z; //定义结构体类型的变量
	x.info = 13;
	y.info = 20;
	z.info = 30;
	head = &x;
	x.next = &y;
	y.next = &z;
	z.next = NULL;
	p = head;
	while (p != NULL) {
		printf("%d\n", p->info);
		p = p->next; //使指针p指向下一个节点
	}
}

