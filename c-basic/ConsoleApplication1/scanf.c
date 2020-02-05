#include <stdio.h>

int main(void) {

	int i， j , k;
	
	//scanf函数将键盘输入的字符转化为格式控制符格式数据，然后存储到变量对应的地址中
	printf("Please enter a number: "); //Please enter a number: 1
	scanf("%d", &i);
	printf("i = %d\n", i); //i = 1

	printf("Please enter a number: "); //Please enter a number: m123
	//当包含非输入控制符时，需要原样输入，否则得到垃圾数据
	scanf("m%d", &i);
	printf("i = %d\n", i); //i =123

	printf("Please enter three number: "); //Please enter a number: 1 2 3
	scanf("%d %d %d", &i, &j, &k);
	printf("i = %d, j = %d, k = %d\n", i, j, k); //i = 1, j=2, k=3

}