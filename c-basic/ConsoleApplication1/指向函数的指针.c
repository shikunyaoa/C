#include <stdio.h>
//声明函数原型
int max(int, int);

int main(void) {

	//定义指向函数的指针变量p
	//返回值类型和参数类型及个数需要和被指向的函数保持一致
	int(*p)(int, int);
	int a, b, c;
	p = max;
	printf("please enter a and b:");
	scanf("%d, %d", &a, &b);
	c = (*p)(a, b); //通过指针变量调用max函数
	printf("a=%d\nb=%d\nmax=%d\n", a, b, c);
	return 0;
}

//定义max函数
int max(int x, int y) {
	int z;
	if (x > y) {
		z = x;
	}
	else {
		z = y;
	}
	return(z);
}


/*
在Visual Stadio 2015中输出结果为：
***********************************
please enter a and b:1,2
a=1
b=2
max=2
***********************************
结论：可以通过指针调用函数
*/				