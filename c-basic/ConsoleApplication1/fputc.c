#include <stdio.h>

//fputc函数和putc把一个字符写入指定的文件中
main() {
	FILE *fp;
	char ch;
	if ((fp = fopen("C:\\Users\\No1\\Desktop\\xxx.txt", "wt+")) == NULL) {
		printf("Cannot open file strike any key exit!");
		getch();
		exit(1);
	}

	printf("input a string: \n"); //输入要写入文件的内容
	ch = getchar(); //获取第一个字符
	while (ch != '\n') {
		fputc(ch, fp); //将当前字符输入文件中
		ch = getchar(); //获取下一个字符
 	}

	fclose(fp);     //关闭文件
}