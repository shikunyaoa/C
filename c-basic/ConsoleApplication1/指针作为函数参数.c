#include <stdio.h>
//��������ԭ��swap
//����ָ�������Ϊ�β�
void swap(int * p1, int * p2);

int main(void) {

	int a, b;
	int * p1 = &a;
	int * p2 = &b;
	printf("please enter a  and b:");
	scanf("%d, %d", p1, p2);
	if (a < b) {
		swap(p1, p2);
	}
	printf("max=%d, min=%d\n", a, b);
	return 0;
}

//����swap����
void swap(int * p1, int * p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
please enter a  and b:1,2
max=2, min=1
***********************************
���ۣ�ָ�������Ϊ��������
*/