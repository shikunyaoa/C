#include <stdio.h>

char *getWord(char);
//指针函数
//使用指针作为返回值要这样定义函数
char *getWord(char c) {

	switch (c)
	{
	case 'A': return "Apple";
	case 'B': return "Banana";
	case 'C': return "Cat";
	case 'D': return "Dog";
	default:
		return "None";
	}
}
int main() {

	char input;

	printf("请输入一个字母:");
	scanf("%c", &input);

	printf("%s\n", getWord(input));

	return 0;
}