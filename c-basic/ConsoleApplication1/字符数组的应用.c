#include <stdio.h>

int main(void) {

	//定义字符数组
	char string[81];
	int i, num = 0, word = 0;
	char c;
	//gets输入字符串的函数 gets(字符数组)
	gets(string);
	for (i = 0; (c = string[i]) != '\0'; i++) {
		if (c == ' ') {
			word = 0;
		}
		else if (word == 0) {
			word = 1;
			num++;
		}
	}
	printf("There are %d words in thie line .\n", num);
	return 0;
}

/*
在Visual Stadio 2015中输出结果为：
I Love C
There are 3 words in thie line .
结论：C语言中使用字符数组表示字符串
*/