#include <stdio.h>

int main(void) {
	
	int i;
	//����һά����
	int a[10]; 
	//��һλ�����и�ֵ
	for (i = 0; i <= 9; i++) {
		a[i] = i;
	}
	//�����ӡ�����е�ֵ
	for (i = 9; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

/*
��Visual Stadio 2015��������Ϊ��9 8 7 6 5 4 3 2 1 0
���ۣ�����ͨ��������[�±�]�ķ�ʽ���������е�Ԫ��
*/