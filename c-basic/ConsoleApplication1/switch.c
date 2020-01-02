#include <stdio.h>

int main() {
	char h;

	printf("请输出你的成绩？\n");
	scanf("%c", &h);

	switch (h)
	{
	case 'A':
		printf("你的成绩在90分以上\n");
		break;
	case 'B':
		printf("你的成绩在80分以上\n");
		break;
	case 'C':
		printf("你的成绩在70分以上\n");
		break;
	case 'D':
		printf("你的成绩在60分以上\n");
		break;
	case 'E':
		printf("你的成绩在60分以下\n");
		break;
	default:
		printf("请输入有效的成绩\n");
		break;
	}
}