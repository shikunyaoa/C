#include <stdio.h>

//使用字符读写函数读取指定文件
main() {
	FILE *fp;
	char ch;
	if ((fp = fopen("C:\\Users\\No1\\Desktop\\xxx.txt", "rt")) == NULL) {
		printf("\n Cannot open file strike any key exit!");
		getch();
		exit();
	}
	ch = fgetc(fp);
	while (ch != EOF) {
		putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
}