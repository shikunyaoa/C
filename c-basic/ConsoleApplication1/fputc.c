#include <stdio.h>

//fputc������putc��һ���ַ�д��ָ�����ļ���
main() {
	FILE *fp;
	char ch;
	if ((fp = fopen("C:\\Users\\No1\\Desktop\\xxx.txt", "wt+")) == NULL) {
		printf("Cannot open file strike any key exit!");
		getch();
		exit(1);
	}

	printf("input a string: \n"); //����Ҫд���ļ�������
	ch = getchar(); //��ȡ��һ���ַ�
	while (ch != '\n') {
		fputc(ch, fp); //����ǰ�ַ������ļ���
		ch = getchar(); //��ȡ��һ���ַ�
 	}

	fclose(fp);     //�ر��ļ�
}