#include <stdio.h>

int main() {

	//Ĭ������£������ڿ���ߺ���ͷ�е��κα����������Զ��洢����
	//�Զ��洢����ζ�ţ������ڽ���ñ����������ڵĿ�ʱ��������
	//�������˳��ÿ�ʱ������ʧ��ԭ���ñ���ռ�õ��ڴ�λ�����ڿ�������
	int x = 30; //ԭʼ��x
	//����ʹ��ͬ�����������Ǹñ����Ǵ洢�ڲ�ͬ�ڴ�λ���ϵ���һ������
	printf("x in outer block:%d at %p\n", x, &x);

	{
		int x = 77; //�µ�x��������ԭʼ��x
		printf("x in inner block: %d at %p\n", x, &x);
	}

	printf("x in outer block:%d at %p\n", x, &x);

	while (x++ < 33) {
		int x = 100; //�µ�x��������ԭʼ��x
		x++;
		printf("x in while loop: %d at %p\n", x, &x);

	}
	printf("x in outer block:%d at %p\n", x, &x);

	return 0;
}