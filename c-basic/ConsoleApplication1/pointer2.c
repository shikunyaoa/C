#include <stdio.h>
#include <string.h>

int main() {

	char *str = "I Love C";
	int i;
	//数组名称就是数组第一个元素的地址值
	//可以通过操作指针来获取数组的值
	for (i = 0; i < strlen(str); i++) {
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}