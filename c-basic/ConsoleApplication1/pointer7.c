#include <stdio.h>

int main() {

	int array[4][5] = { 0 };
	int i, j, k = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			array[i][j] = k++;
		}
	}
	//��ά���������������β��ܻ�ȡԭʼֵ
	//��Ϊ�������洢�����������ĵ�ֵַ
	//*(array + 1) == array[1] ����c���﷨��(�����µĹ���,����һ���µ�д���򻯲���)
	printf("*(array + 1): %p\n", *(array + 1));
	printf("array[1]: %p\n", array[1]);
	printf("&array[1][0]: %p\n", &array[1][0]);
	return 0;
}