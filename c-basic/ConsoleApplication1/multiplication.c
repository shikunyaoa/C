#include <stdio.h>

int main() {
	//¾Å¾Å³Ë·¨±í
	int i, j;
	
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%-2d  ", i, j, i*j);
		}
		putchar('\n');
	}

	return 0;
}