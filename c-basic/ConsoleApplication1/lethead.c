#include <stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
//�����ͱ���һ�����ж������ͣ��κγ�����ʹ�ú���֮ǰ��Ҫ�����ú���������
//��һ��void�Ǻ������ͣ���ʾ����û�з���ֵ
//�ڶ���void�����ú�����������
void starbar(void); //����ԭ��,���߱���������������

int main(void) {
	
	starbar(); 
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar(); //ʹ�ú���,�ڴ˴�ִ�к���
	return 0;
}

//���庯����ָ������Ҫ��ʲô
void starbar(void) {
	
	int count;
	for (count = 1; count <= WIDTH; count++) {
		putchar('*');
	}
	putchar('\n');
}