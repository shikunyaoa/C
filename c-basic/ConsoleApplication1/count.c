#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int ch; //读取文件时，储存每个字符的地方
	FILE *fp; //文件指针
	unsigned long count = 0;

	//argc查看是否有命令行参数
	if (argc != 2) {
		//字符串中,argv[0]是该程序的名称
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);

	}
	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//getc()和putc()函数与getchar()和putchar()函数的区别是
	//要告诉前两个函数使用哪一个文件
	while ((ch = getc(fp)) != EOF) {
		putc(ch, stdout); //与putchar(ch)相同
		count++;
	}

	fclose(fp);
	printf("File %s has %lu characters\n", argv[1], count);
	return 0;
}