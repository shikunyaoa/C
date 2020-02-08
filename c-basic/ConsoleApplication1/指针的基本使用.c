#include <stdio.h>

int main(void) {

	//定义指针变量： 类型名 * 指针变量名
	//用来存放存储单元的地址
	int * p1, *p2, *p;
	int a, b;

	printf("please enter two integer numbers:");
	//&是取址运算符，获取存储单元的地址
	scanf("%d, %d", &a, &b);
	p1 = &a;
	p2 = &b;
	if (a < b) {
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("a=%d, b=%d\n", a, b);
	//这里的*是取值运算符,用来获取指针变量指向的对象
	printf("max=%d, min=%d\n", *p1, *p2);
	return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
please enter two integer numbers:1,2
a=1, b=2
max=2, min=1
***********************************
结论：可以通过指针操作变量
*/