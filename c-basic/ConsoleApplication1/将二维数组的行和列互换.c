#include <stdio.h>

int main(void) {
	//�����ά���鲢��ʼ��
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2], i, j;
	printf("array a:\n");
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 2; j++) {
			printf("%5d", a[i][j]);
			//���к��е�ֵ����
			b[j][i] = a[i][j];
		}
		printf("\n");
	}

	printf("array b:\n");
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 1; j++) {
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
��Visual Stadio 2015��������Ϊ��
array a:
1    2    3
4    5    6
array b:
1    4
2    5
3    6
���ۣ���ά����ֻ��һά������������䣬���÷�ʽһ��
*/