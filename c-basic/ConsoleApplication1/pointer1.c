#include <stdio.h>

int main() {
	
	char a = 'F';
	int f = 123;

	//����ָ����� ��*��ͷ�����Զ������ƶ���ָ�������ָ�������4���ֽڣ�����洢�����ĵ�ֵַ
	//&�ӱ��������ƻ�ȡ�洢�����ĵ�ֵַ
	char *pa = &a;
	int *pb = &f;
	//������*���ڷ������ã��ȿ�����������ָ�������Ҳ����������ȡָ�����ָ��ĵ�ַ��ŵ�ֵ
	printf("a = %c\n", *pa); //*��ָ�������ƻ�ȡ������ֵ
	printf("f = %d\n", *pb);

	*pa = 'C';
	*pb += 1;
	printf("Now a = %c\n", *pa); //*��ָ�������ƻ�ȡ������ֵ
	printf("Now f = %d\n", *pb);

	//ָ������Ĵ�С��Ϊ4��������û�й�ϵ
	printf("sizeof pa = %d\n", sizeof(pa));
	printf("sizeof pb = %d\n", sizeof(pb));

	//����* �õ��ľ��ǵ�ֵַ
	printf("the addr of a is: %p\n", pa);
	printf("the addr of b is: %p\n", pb);

	return 0;
}