#include <stdio.h>
//��������ԭ��
int max(int, int);

int main(void) {

	//����ָ������ָ�����p
	//����ֵ���ͺͲ������ͼ�������Ҫ�ͱ�ָ��ĺ�������һ��
	int(*p)(int, int);
	int a, b, c;
	p = max;
	printf("please enter a and b:");
	scanf("%d, %d", &a, &b);
	c = (*p)(a, b); //ͨ��ָ���������max����
	printf("a=%d\nb=%d\nmax=%d\n", a, b, c);
	return 0;
}

//����max����
int max(int x, int y) {
	int z;
	if (x > y) {
		z = x;
	}
	else {
		z = y;
	}
	return(z);
}


/*
��Visual Stadio 2015��������Ϊ��
***********************************
please enter a and b:1,2
a=1
b=2
max=2
***********************************
���ۣ�����ͨ��ָ����ú���
*/				