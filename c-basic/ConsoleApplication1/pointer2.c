#include <stdio.h>
#include <string.h>

int main() {

	char *str = "I Love C";
	int i;
	//�������ƾ��������һ��Ԫ�صĵ�ֵַ
	//����ͨ������ָ������ȡ�����ֵ
	for (i = 0; i < strlen(str); i++) {
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}