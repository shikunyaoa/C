#include <string.h>
#include <stdio.h>

//�ַ�����Сдת������
int main(void) {

	char str[80];
	puts("Please input the character string:");
	gets(str); //�����ַ���
	printf("\n xiao xie = %s", strlwr(str)); 
	printf("\n da xie = %s", strupr(str));
	

	return 0;
}