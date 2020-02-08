#include <stdio.h>

int main(void) {
	
	int i;
	//定义一维数组
	int a[10]; 
	//向一位数组中赋值
	for (i = 0; i <= 9; i++) {
		a[i] = i;
	}
	//倒序打印数组中的值
	for (i = 9; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

/*
在Visual Stadio 2015中输出结果为：9 8 7 6 5 4 3 2 1 0
结论：可以通过数组名[下标]的方式访问数组中的元素
*/