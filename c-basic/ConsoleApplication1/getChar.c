#include <stdio.h>

int main() {

	int count = 0;
	printf("������һ��Ӣ���ַ�?");
	while (getchar() != '\n') {
		count++; 
	}
	printf("���ܹ�����%d���ַ�\n", count);
	return 0;
}