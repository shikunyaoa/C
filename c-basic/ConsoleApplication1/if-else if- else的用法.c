#include <stdio.h>

int main(void) {

	int a = 3;
	if (a > 2) {
		printf("AAA\n");
	}
	else if (a == 0) {
		printf("BBB\n");
	}
	else {
		printf("CCC\n");
	}

	return 0;
}

/*
在Visual Stadio 2015中输出结果为：AAA
结论：在if else的基础上增加了一个条件的判断
*/