#include <stdio.h>
//声明函数的原型
void print_star(); //声明print_star函数
void print_message();  //声明print_mesage函数


int main(void) {

	print_star(); //调用print_star 函数
	print_message(); //调用print_message函数
	print_star();
	return 0;
}

//定义print_star函数
void print_star() {
	printf("*******************\n");
}

//定义print_message函数
void print_message() {
	printf("Hello C!\n");
}

/*
在Visual Stadio 2015中输出结果为：
*******************
Hello C!
*******************
结论：每个函数都实现了一个特定的功能，可以多次调用，简化了程序
*/