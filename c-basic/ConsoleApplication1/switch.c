#include <stdio.h>

int main() {
	char h;

	printf("�������ĳɼ���\n");
	scanf("%c", &h);

	switch (h)
	{
	case 'A':
		printf("��ĳɼ���90������\n");
		break;
	case 'B':
		printf("��ĳɼ���80������\n");
		break;
	case 'C':
		printf("��ĳɼ���70������\n");
		break;
	case 'D':
		printf("��ĳɼ���60������\n");
		break;
	case 'E':
		printf("��ĳɼ���60������\n");
		break;
	default:
		printf("��������Ч�ĳɼ�\n");
		break;
	}
}