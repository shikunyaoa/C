#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//如何定义各种变量
	int a = 1;
	short int b = 2;
	long int c = 3;
	float d = 1.1;
	double e = 1.23;
	char f = 'F';

	//下面验证我所说的通常是正确的
	//sizeof是运算符不是函数，可以得到各种类型所占的字节数
	printf("int's length is %d\n",sizeof(int)); //int's length is 4
	printf("short int's length is %d\n", sizeof(short int)); //short int's length is 2
	printf("long int's length is %d\n", sizeof(long int)); //long int's length is 4
	printf("float's length is %d\n", sizeof(float)); //float's length is 4
	printf("double's length is %d\n", sizeof(double)); //double's length is 8
	printf("char's length is %d\n", sizeof(char)); //char's length is 1

	
	system("pause");
	return 0;
}