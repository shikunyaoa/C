#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *ptr = NULL;
	int num;

	printf("请输入整数的个数: ");
	scanf("%d", &num);
	//自定义内存空间
	ptr = (int *)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++) {
		printf("请录入第%d个整数: ", i + 1);
		scanf("%d", &ptr[i]);
	}

	printf("你录入的整数是: ");
	for (int i = 0; i < num; i++) {
		printf("%d", ptr[i]);
	}
	putchar('\n');
	//释放分配的内存
	free(ptr);

	return 0;
}