#include <stdio.h>
//声明有参函数fac
int fac(int n);

int main(void) {
	int n, y;
	printf("input an integer number:");
	scanf("%d", &n);
	y = fac(n);
	printf("%d!=%d\n", n, y);
	return 0;
}

//定义fac函数
int fac(int n) {
	int f;
	if (n < 0) {
		printf("n < 0, data error!");
	}
	else if (n == 0 || n == 1) {
		f = 1;
	}
	else {
		f = fac(n - 1) * n;
	}
	return (f);
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
input an integer number:3
3!=6
***********************************
结论：递归调用函数必须存在基准情况，否则会陷入死循环
*/