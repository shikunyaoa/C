#include <stdio.h>

int main() {

	int ch;
	printf("�������ַ���:");
	//EOF(end of file)����־�ż�⵽�ļ���β
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}

	return 0;
}