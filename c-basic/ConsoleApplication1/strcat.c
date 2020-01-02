#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "Original String";
	char str2[] = "New String";
	

	strcat(str1, " ");  //连接两个字符串， strncat需要自己在后面追加 '\0'	
	strcat(str1, str2);

	printf("str1: %s\n", str1);
	

	return 0;
}