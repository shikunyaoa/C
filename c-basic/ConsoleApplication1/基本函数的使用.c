#include <stdio.h>
//����������ԭ��
void print_star(); //����print_star����
void print_message();  //����print_mesage����


int main(void) {

	print_star(); //����print_star ����
	print_message(); //����print_message����
	print_star();
	return 0;
}

//����print_star����
void print_star() {
	printf("*******************\n");
}

//����print_message����
void print_message() {
	printf("Hello C!\n");
}

/*
��Visual Stadio 2015��������Ϊ��
*******************
Hello C!
*******************
���ۣ�ÿ��������ʵ����һ���ض��Ĺ��ܣ����Զ�ε��ã����˳���
*/