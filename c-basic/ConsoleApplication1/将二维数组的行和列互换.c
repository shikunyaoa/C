#include <stdio.h>

int main(void) {
	//定义二维数组并初始化
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2], i, j;
	printf("array a:\n");
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 2; j++) {
			printf("%5d", a[i][j]);
			//将行和列的值互换
			b[j][i] = a[i][j];
		}
		printf("\n");
	}

	printf("array b:\n");
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 1; j++) {
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
在Visual Stadio 2015中输出结果为：
array a:
1    2    3
4    5    6
array b:
1    4
2    5
3    6
结论：二维数组只是一维数组的线性扩充，引用方式一致
*/