#include <stdio.h>

int main() {
	
	char a = 'F';
	int f = 123;

	//定义指针变量 以*开头，加自定义名称定义指针变量，指针变量是4个字节，保存存储变量的地址值
	//&加变量的名称获取存储变量的地址值
	char *pa = &a;
	int *pb = &f;
	//两处的*属于符号重用，既可以用来定义指针变量，也可以用来获取指针变量指向的地址存放的值
	printf("a = %c\n", *pa); //*加指变量名称获取变量的值
	printf("f = %d\n", *pb);

	*pa = 'C';
	*pb += 1;
	printf("Now a = %c\n", *pa); //*加指变量名称获取变量的值
	printf("Now f = %d\n", *pb);

	//指针变量的大小都为4，和类型没有关系
	printf("sizeof pa = %d\n", sizeof(pa));
	printf("sizeof pb = %d\n", sizeof(pb));

	//不加* 得到的就是地址值
	printf("the addr of a is: %p\n", pa);
	printf("the addr of b is: %p\n", pb);

	return 0;
}