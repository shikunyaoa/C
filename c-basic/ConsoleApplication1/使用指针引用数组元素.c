#include <stdio.h>

int main(void) {

	int a[10];
	int * p ;
	printf("please enter 10 integer numbers:");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	//使用下标法访问数组元素
	for (int i = 0; i < 10; i++) {
		printf("%d", a[i]);
	}
	printf("\n");

	//使用指针法访问数组元素
	//数组名是数组第一个元素的地址
	//对指针变量进行加减操作实际上是(p+1)*d 或(p-1)*d
	//d表示一个数组元素所占的字节数
	//所以p+1是指向同一个数组中的下一个元素
	//p-1指向同艺术组中的上一个元素
	for (p = a; p < (a + 10); p++) {
		printf("%d", *p);
	}
	printf("\n");
	return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
please enter 10 integer numbers:0 1 2 3 4  5 6 7 8 9
0123456789
0123456789
***********************************
结论：数组名是数组第一个元素的地址，可以对指针变量进行加减操作
*/