#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int ch;
	FILE *fp;

	char fname[50]; //�洢�ļ���
	printf("Enter the name of the file:");
	scanf("%s", fname);

	fp = fopen(fname, "r"); //�򿪴���ȡ�ļ�
	if (fp == NULL) {
		printf("Failed to open file. Bye\n");
		exit(1);
	}

	//getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
	while ((ch = getc(fp)) != EOF) {
		putchar(ch);
	}

	fclose(fp);
	return 0;
}