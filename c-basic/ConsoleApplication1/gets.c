#include <stdio.h>
#define STLEN 81

int main(void) {

	char words[STLEN];
	puts("Enter a string, please.");
	//gets()函数读取整行输入，直到遇到换行符，然后丢弃换行符，储存其余字符
	gets(words); 
	printf("Your string twice:\n");
	printf("%s\n", words);
	puts(words);
	puts("Done");
	return 0;
}