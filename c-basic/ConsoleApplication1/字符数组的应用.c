#include <stdio.h>

int main(void) {

	//�����ַ�����
	char string[81];
	int i, num = 0, word = 0;
	char c;
	//gets�����ַ����ĺ��� gets(�ַ�����)
	gets(string);
	for (i = 0; (c = string[i]) != '\0'; i++) {
		if (c == ' ') {
			word = 0;
		}
		else if (word == 0) {
			word = 1;
			num++;
		}
	}
	printf("There are %d words in thie line .\n", num);
	return 0;
}

/*
��Visual Stadio 2015��������Ϊ��
I Love C
There are 3 words in thie line .
���ۣ�C������ʹ���ַ������ʾ�ַ���
*/