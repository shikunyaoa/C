#include <stdio.h>

int main() {

	//��������ָ�������
	//������ֻ��һ����ַ
	//��ָ����һ����ֵ(�ɱ�ģ������������ɱ�)
	char str[] = "I Love C";
	char *target = str;
	int count = 0;

	while (*target++ != '\0') {
		count++;
	}

	printf("�ַ�����str�ĳ���Ϊ:%d\n", count);

	return 0;
}