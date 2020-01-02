#include <stdio.h>

int main() {

	//使用指针间接访问变量a的值
	int a;
	int *p = &a; //定义指针p，用来存放a的地址

	printf("请输入一个整数\n");
	scanf("%d", &a);

	printf("a = %d\n", a);

	printf("请再输入一个整数\n");
	scanf("%d", p);
	printf("a = %d\n", a);

	return 0;
}