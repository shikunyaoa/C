#include <stdio.h>
//声明函数原型swap
//两个指针变量作为形参
void swap(int * p1, int * p2);

int main(void) {

	int a, b;
	int * p1 = &a;
	int * p2 = &b;
	printf("please enter a  and b:");
	scanf("%d, %d", p1, p2);
	if (a < b) {
		swap(p1, p2);
	}
	printf("max=%d, min=%d\n", a, b);
	return 0;
}

//定义swap函数
void swap(int * p1, int * p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
please enter a  and b:1,2
max=2, min=1
***********************************
结论：指针可以作为参数传递
*/