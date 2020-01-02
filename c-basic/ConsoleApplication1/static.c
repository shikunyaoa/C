#include <stdio.h>

void trystat(void);

int main(void) {

	int count;

	for (count = 1; count <= 3; count++) {
		printf("Here comes iteration %d\n", count);
		trystat();
	}
	return 0;
}

void trystat(void) {
	
	int fade = 1;
	//使用static声明静态变量，只初始化一次
	//静态变量和外部变量在程序被载入内存时已经执行完毕
	//把这条声明放在函数中是为了告诉编译器只有这个函数才能看到改变量
	static int stay = 1;
	printf("fade = %d and stay = %d\n", fade++, stay++);
}