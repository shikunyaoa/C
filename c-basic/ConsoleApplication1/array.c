#include <stdio.h>

#define NUM 10

int main() {
	int s[NUM];
	int i, sum = 0;

	for (i = 0; i < NUM; i++) {
		printf("�������%dλͬѧ�ĳɼ�", i + 1);
		scanf("%d", &s[i]);
		sum += s[i];
	}

	printf("�ɼ��������, ƽ������%.2f\n", (double)sum / NUM);
	return 0;
}