#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "Original String";
	char str2[] = "New String";
	

	strcat(str1, " ");  //���������ַ����� strncat��Ҫ�Լ��ں���׷�� '\0'	
	strcat(str1, str2);

	printf("str1: %s\n", str1);
	

	return 0;
}