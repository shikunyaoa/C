#include <stdio.h>

int main() {

	int count = 0;
	printf("请输入一行英文字符?");
	while (getchar() != '\n') {
		count++; 
	}
	printf("你总共输了%d个字符\n", count);
	return 0;
}