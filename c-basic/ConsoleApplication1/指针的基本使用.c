#include <stdio.h>

int main(void) {

	//����ָ������� ������ * ָ�������
	//������Ŵ洢��Ԫ�ĵ�ַ
	int * p1, *p2, *p;
	int a, b;

	printf("please enter two integer numbers:");
	//&��ȡַ���������ȡ�洢��Ԫ�ĵ�ַ
	scanf("%d, %d", &a, &b);
	p1 = &a;
	p2 = &b;
	if (a < b) {
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("a=%d, b=%d\n", a, b);
	//�����*��ȡֵ�����,������ȡָ�����ָ��Ķ���
	printf("max=%d, min=%d\n", *p1, *p2);
	return 0;
}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
please enter two integer numbers:1,2
a=1, b=2
max=2, min=1
***********************************
���ۣ�����ͨ��ָ���������
*/