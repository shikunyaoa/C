#include <stdio.h>

int add(int, int);
int sub(int, int);
int calc(int(*fp)(int, int), int, int);
int(*select(char))(int, int);
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

//以函数指针作为返回值
int(*select(char op))(int, int) {

	switch (op)
	{
	case '+': return add;
	case '-': return sub;
	}
}
int main() {

	int num1, num2;
	char op;
	int(*fp)(int, int);
	

	printf("请输入一个式子如(1 + 2):");
	scanf("%d%c%d", &num1, &op, &num2);

	fp = select(op);
	
	printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));
}