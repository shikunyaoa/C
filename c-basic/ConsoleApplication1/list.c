#include <stdio.h>
#define NULL 0
typedef struct node
{
	int info;
	struct node * next;
} LINKLIST;

//����һ����������
main() {
	LINKLIST *head, *p, x, y, z; //����ṹ�����͵ı���
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
		p = p->next; //ʹָ��pָ����һ���ڵ�
	}
}

