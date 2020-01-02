#include <stdio.h>

int main() {

	//字符数组名称就是字符数组第一个元素的地址
	char str[120];

	printf("请输入一个字符串");
	scanf("%s", str);

	//printf("你输入的字符串为: %s\n", str);

	printf("字符数组第一元素的地址为: %p\n", str);
	printf("字符数组第一元素的地址为: %p\n", &str[0]);
	return 0;
}