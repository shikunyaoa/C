#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//��ζ�����ֱ���
	int a = 1;
	short int b = 2;
	long int c = 3;
	float d = 1.1;
	double e = 1.23;
	char f = 'F';

	//������֤����˵��ͨ������ȷ��
	//sizeof����������Ǻ��������Եõ�����������ռ���ֽ���
	printf("int's length is %d\n",sizeof(int)); //int's length is 4
	printf("short int's length is %d\n", sizeof(short int)); //short int's length is 2
	printf("long int's length is %d\n", sizeof(long int)); //long int's length is 4
	printf("float's length is %d\n", sizeof(float)); //float's length is 4
	printf("double's length is %d\n", sizeof(double)); //double's length is 8
	printf("char's length is %d\n", sizeof(char)); //char's length is 1

	
	system("pause");
	return 0;
}