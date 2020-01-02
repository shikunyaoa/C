#include <stdio.h>

void func();

void func() {
	//extern告诉编译器这个变量会在后面声明，不要报错
	extern count;
	count++;
}

int count = 0;
int main() {

	func();

	printf("%d\n", count);

	return 0;

}