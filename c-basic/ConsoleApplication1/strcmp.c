#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[] = "I Love C";
	char str2[] = "I Love Java";

	if (!strcmp(str1, str2)) { //strcmp����ASCLL��Ƚ������ַ���
		printf("�����ַ�����ȫһ��\n");
	}
	else {
		printf("�����ַ������ڲ���\n");
	}

	return 0;
}