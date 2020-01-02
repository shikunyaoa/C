#include <stdio.h>

int main() {

	//默认情况下，声明在块或者函数头中的任何变量都属于自动存储类型
	//自动存储期意味着，程序在进入该变量声明所在的块时变量存在
	//程序在退出该块时变量消失，原来该变量占用的内存位置现在可做他用
	int x = 30; //原始的x
	//可以使用同名变量，但是该变量是存储在不同内存位置上的另一个变量
	printf("x in outer block:%d at %p\n", x, &x);

	{
		int x = 77; //新的x，隐藏了原始的x
		printf("x in inner block: %d at %p\n", x, &x);
	}

	printf("x in outer block:%d at %p\n", x, &x);

	while (x++ < 33) {
		int x = 100; //新的x，隐藏了原始的x
		x++;
		printf("x in while loop: %d at %p\n", x, &x);

	}
	printf("x in outer block:%d at %p\n", x, &x);

	return 0;
}