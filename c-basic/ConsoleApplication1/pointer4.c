#include <stdio.h>

int main() {

	//�ַ��������ƾ����ַ������һ��Ԫ�صĵ�ַ
	char str[120];

	printf("������һ���ַ���");
	scanf("%s", str);

	//printf("��������ַ���Ϊ: %s\n", str);

	printf("�ַ������һԪ�صĵ�ַΪ: %p\n", str);
	printf("�ַ������һԪ�صĵ�ַΪ: %p\n", &str[0]);
	return 0;
}