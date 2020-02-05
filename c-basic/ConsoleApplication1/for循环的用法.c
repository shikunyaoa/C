#include <stdio.h>

int main(void) {

	int i;
	int sum = 0;
	//求10以内的奇数之和
	for (i = 1; i < 10; i += 2) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}

/*
在Visual Stadio 2015中输出结果为：25
结论：循环简化了程序
*/