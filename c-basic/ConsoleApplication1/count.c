#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int ch; //��ȡ�ļ�ʱ������ÿ���ַ��ĵط�
	FILE *fp; //�ļ�ָ��
	unsigned long count = 0;

	//argc�鿴�Ƿ��������в���
	if (argc != 2) {
		//�ַ�����,argv[0]�Ǹó��������
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);

	}
	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//getc()��putc()������getchar()��putchar()������������
	//Ҫ����ǰ��������ʹ����һ���ļ�
	while ((ch = getc(fp)) != EOF) {
		putc(ch, stdout); //��putchar(ch)��ͬ
		count++;
	}

	fclose(fp);
	printf("File %s has %lu characters\n", argv[1], count);
	return 0;
}