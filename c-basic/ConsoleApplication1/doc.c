#include <stdio.h>
#include <string.h>
#define M 4

//通过各种方式对文件进行操作
void main() {
	FILE *fp[M]; //定义文件指针数组
	char ch, filename[40], mode[4], fn[M + 1][40] = { 0,0,0,0 };
	int i = 1, n = 0;
	while (i <= M) {
		printf("\nPlease input the filename and mode(%d):\n", i);
		gets(filename);
		fflush();  //刷新输入缓冲区
		gets(mode); //输入使用文件方式
		if ((fp[i] = fopen(filename, mode)) != NULL) {
			printf("Successful open %s in mode %s \n", filename, mode);
			strcpy(fn[i], filename);
		}
		else {
			printf("Error open file %s in mode %s \n", filename, mode);
		}
		i++;
	}

	printf("Please input the filename which must close. \n");
	gets(filename);
	for (i = 1; i <= M; i++) {
		if (strcmp(fn[i], filename) == 0) {
			n = i;
			break;
		}
	}

	if (n == 0) {
		printf("Opens file named %s not to succeed! \n", filename);
	}
	else {
		if (fclose(fp[n]) == 0) {
			printf("Success close file named %s \n", fn[n]);
		}
		else {
			printf("can not close file named %s!\n", filename);
			exit(1); //退出程序
		}
	}

	printf("Whether to close all file?(y/n)\n");
	scanf("%c", &ch);
	if (ch == 'y') {            //关闭所有文件
		printf("The success closure is left over %d files. \n", fcloseall());
	}
}