#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("int's length is %d",sizeof(int)); //sizeof����������Ǻ��������ֽ�Ϊ��λ
	printf("long int's length is %d", sizeof(long int));
	printf("long long int's length is %d", sizeof(long long int));

	system("pause");
	return 0;
}