#include <stdio.h>

int main(void) {

	int i�� j , k;
	
	//scanf����������������ַ�ת��Ϊ��ʽ���Ʒ���ʽ���ݣ�Ȼ��洢��������Ӧ�ĵ�ַ��
	printf("Please enter a number: "); //Please enter a number: 1
	scanf("%d", &i);
	printf("i = %d\n", i); //i = 1

	printf("Please enter a number: "); //Please enter a number: m123
	//��������������Ʒ�ʱ����Ҫԭ�����룬����õ���������
	scanf("m%d", &i);
	printf("i = %d\n", i); //i =123

	printf("Please enter three number: "); //Please enter a number: 1 2 3
	scanf("%d %d %d", &i, &j, &k);
	printf("i = %d, j = %d, k = %d\n", i, j, k); //i = 1, j=2, k=3

}