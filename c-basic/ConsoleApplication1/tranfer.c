#include <string.h>
#include <stdio.h>

//字符串大小写转换函数
int main(void) {

	char str[80];
	puts("Please input the character string:");
	gets(str); //接收字符串
	printf("\n xiao xie = %s", strlwr(str)); 
	printf("\n da xie = %s", strupr(str));
	

	return 0;
}