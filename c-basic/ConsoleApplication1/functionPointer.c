#include <stdio.h>

int square(int);

int square(int num) {

	return num * num;
}
int main() {

	int num;
	int(*fp)(int);  //定义一个函数指针，一个指向函数的指针

	printf("请输入一个整数：");
	scanf("%d", &num);

	fp = square;

	printf("%d * %d = %d\n", num, num, (*fp)(num));

	return 0;
}	