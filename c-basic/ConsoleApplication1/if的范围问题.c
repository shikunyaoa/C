#include <stdio.h>

int main(void) {

	if (1 > 2)
		printf("AAA\n");  //���A
		printf("BBB\n"); //���B
	
	return 0;
}
/*
��Visual Stadio 2015��������Ϊ��BBB
���ۣ���û����{}ʱ��ifֻ�ܿ������A��Ĭ��ֻ�ܿ���һ�����
*/