#include <stdio.h>

int main(void) {

	if (1 > 2)
		printf("AAA\n");  //语句A
		printf("BBB\n"); //语句B
	
	return 0;
}
/*
在Visual Stadio 2015中输出结果为：BBB
结论：当没有用{}时，if只能控制语句A，默认只能控制一条语句
*/