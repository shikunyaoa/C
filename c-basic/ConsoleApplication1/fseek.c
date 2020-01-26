#include <stdlib.h>
#include <stdio.h>
#define MAX 50

//使用fseek函数从文件中随机读取其中的某个数据
void main() {
	FILE *fp;
	int num, i, array[MAX];
	long offset;
	for (i = 0; i < MAX; i++) {
		array[i] = i + 10;
	}

	if ((fp = fopen("123.txt", "wb")) == NULL) {
		printf("Error opening file 123.txt.\n");
		exit(1);
	}

	if (fwrite(array, sizeof(int), MAX, fp) != MAX) {
		printf("Error writing data to file.\n");
		exit(1);
	}

	fclose(fp);
	if ((fp = fopen("123.txt", "rb")) == NULL) {
		printf("Error opening file 123.txt.\n");
		exit(1);
	}

	while (1) {
		printf("Please input offset(input -1 to quit):\n");
		scanf("%1d", &offset);
		if (offset < 0) {
			break;
		}
		if (fseek(fp, (offset*sizeof(int)), SEEK_SET) != 0) { //文件定位
			printf("Error using fseek().\n");
			exit(1);
		}
		fread(&num, sizeof(int), 1, fp); //从文件中读取当前位置的数
		printf("The offset is %1d, its value is %d.\n", offset, num);
	}
	fclose(fp); //关闭文件
}