#include <stdio.h>

int add(int, int);
int sub(int, int);
int calc(int(*fp)(int, int), int, int);
int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}
//以函数指针作为参数
int calc(int(*fp)(int, int), int num1, int num2) {
	return (*fp)(num1, num2);
}

int main() {

	printf(" 5 + 3 = %d\n", calc(add, 5, 3));
	printf(" 5 - 3 = %d\n", calc(sub, 5, 3));
	return 0;
}