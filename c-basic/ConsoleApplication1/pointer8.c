#include <stdio.h>

int main(void) {

	int zippo[4][2] = {
		{2, 4},
		{6, 8},
		{1, 3},
		{5, 7}
	};

	printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1); //zippo = 00D6F760, zippo + 1 = 00D6F768  zippo������int��С��Ԫ��

	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1); //zippo[0] = 00D6F760, zippo[0] + 1 = 00D6F764 ��������ŵĻ��ǵ�ַ

	printf("*zippo = %p, *zippo+1=%p\n", *zippo, *zippo + 1);	//*zippo = 00D6F760, *zippo+1=00D6F764

	printf("zippo[0][0] = %d\n", zippo[0][0]); //zippo[0][0] = 2  ʹ���±귨��ȡ��һԪ��

	printf("*zippo[0]=%d\n", *zippo[0]); // *zippo[0]=2 ʹ��ָ�뷨��ȡ��һ��Ԫ��

	printf(" **zippo=%d\n", **zippo); // **zippo=2 ʹ��ָ�뷨���������λ�ȡ��һ��Ԫ��

	printf("zippo[2][1]=%d\n", zippo[2][1]); // zippo[2][1]=3 ʹ���±귨��ȡ�����еڶ��е�Ԫ�ص�ֵ

	printf("*(*(zippo+2)+1)=%d\n", *(*(zippo + 2) + 1)); //*(*(zippo+2)+1)=3 ʹ��ָ�뷨���������λ�ȡ�����еڶ��е�Ԫ�ص�ֵ
	return 0;
}