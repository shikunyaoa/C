#include <stdio.h>
#include <malloc.h>
#define N 13

typedef struct node {
	char name[20];
	struct node *llink, *rlink;
} stud;

stud * creat(int n) {
	stud *p, *h, *s;
	int i;
	if ((h = (stud *)malloc(sizeof(stud))) == NULL) {
		printf("���ܷ����ڴ�ռ�");
		exit(0);
	}
	h->name[0] = '\0';
	h->llink = NULL;
	h->rlink = NULL;
	p = h;
	for (i = 0; i < n; i++) {
		if ((s = (stud *)malloc(sizeof(stud))) == NULL) {
			printf("���ܷ����ڴ�ռ�");
			exit(0);
		}
		p->rlink = s;
		printf("�������%d���˵�����", i + 1);
		scanf("%s", s->name);
		s->llink = p;
		s->rlink = NULL;
		p = s;
	}
	h->llink = s;
	p->rlink = h;
	return (h);
}


stud * search(stud * h, char * x) {
	stud * p;
	char * y;
	p = h->rlink;
	while (p != h) {
		y = p->name;
		if (strcmp(y, x) == 0) {
			return (p);

		}
		else {
			p = p->rlink;
		}

	}
	printf("û���ҵ�����");
}

void print(stud * h) {
	int n;
	stud * p;
	p = h->rlink;
	printf("������Ϣ: \n");
	while (p != h) {
		printf("%s", &*(p->name));
		p = p->rlink;
	}
	printf("\n");
}

main() {
	int number;
	char studname[20];
	stud *head, *searchpoint;
	number = N;
	head = creat(number);
	printf(head);
	printf("��������Ҫ���ҵ�����:");
	scanf("%s", studname);
	searchpoint = search(head, studname);
	printf("����Ҫ���ҵ��˵�������:%s", *&searchpoint->name);
}