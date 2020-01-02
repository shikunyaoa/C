#include <stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
//函数和变量一样，有多种类型，任何程序在使用函数之前都要声明该函数的类型
//第一个void是函数类型，表示函数没有返回值
//第二个void表名该函数不带参数
void starbar(void); //函数原型,告诉编译器函数的类型

int main(void) {
	
	starbar(); 
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar(); //使用函数,在此处执行函数
	return 0;
}

//定义函数，指定函数要做什么
void starbar(void) {
	
	int count;
	for (count = 1; count <= WIDTH; count++) {
		putchar('*');
	}
	putchar('\n');
}