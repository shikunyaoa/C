#include <stdio.h>

int main(void) {

	if (3 > 2) {
		printf("AAA\n"); //语句A
	}
	else {
		printf("BBB\n"); //语句B
	}
	return 0;
}
/*
在Visual Stadio 2015中输出结果为：AAA
结论：如果表达式结果为真则执行语句A，否则执行语句B
*/