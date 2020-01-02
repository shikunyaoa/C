#include <stdio.h>

int main() {

	int ch;
	printf("请输入字符串:");
	//EOF(end of file)：标志着检测到文件结尾
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}

	return 0;
}