#include <stdio.h>
#include <string.h>

int main() {

	char str1[] = "I love C";
	char str2[40];

	strncpy(str2, str1, 5); //���Ƹ��Ƶ��ַ���
	str2[5] = '\0';

	printf("str2: %s\n", str2);
	return 0;
}