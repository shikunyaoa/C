#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *ptr = NULL;
	int num;

	printf("�����������ĸ���: ");
	scanf("%d", &num);
	//�Զ����ڴ�ռ�
	ptr = (int *)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++) {
		printf("��¼���%d������: ", i + 1);
		scanf("%d", &ptr[i]);
	}

	printf("��¼���������: ");
	for (int i = 0; i < num; i++) {
		printf("%d", ptr[i]);
	}
	putchar('\n');
	//�ͷŷ�����ڴ�
	free(ptr);

	return 0;
}