#include <stdio.h>

int main() {

	//ʹ��ָ���ӷ��ʱ���a��ֵ
	int a;
	int *p = &a; //����ָ��p���������a�ĵ�ַ

	printf("������һ������\n");
	scanf("%d", &a);

	printf("a = %d\n", a);

	printf("��������һ������\n");
	scanf("%d", p);
	printf("a = %d\n", a);

	return 0;
}