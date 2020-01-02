#include <stdio.h>

int main() {

	int array[4][5] = { 0 };
	int i, j, k = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			array[i][j] = k++;
		}
	}
	//二维数组必须解引用两次才能获取原始值
	//因为外层数组存储的是里层数组的地址值
	//*(array + 1) == array[1] 这是c的语法糖(不是新的功能,而是一种新的写法简化操作)
	printf("*(array + 1): %p\n", *(array + 1));
	printf("array[1]: %p\n", array[1]);
	printf("&array[1][0]: %p\n", &array[1][0]);
	return 0;
}