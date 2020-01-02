#include <stdio.h>

int main() {

	//数组名和指针的区别
	//数组名只是一个地址
	//而指针是一个左值(可变的，而数组名不可变)
	char str[] = "I Love C";
	char *target = str;
	int count = 0;

	while (*target++ != '\0') {
		count++;
	}

	printf("字符数组str的长度为:%d\n", count);

	return 0;
}