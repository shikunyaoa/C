#include <stdio.h>

int main(void) {

	int zippo[4][2] = {
		{2, 4},
		{6, 8},
		{1, 3},
		{5, 7}
	};

	printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1); //zippo = 00D6F760, zippo + 1 = 00D6F768  zippo是两个int大小的元素

	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1); //zippo[0] = 00D6F760, zippo[0] + 1 = 00D6F764 外层数组存放的还是地址

	printf("*zippo = %p, *zippo+1=%p\n", *zippo, *zippo + 1);	//*zippo = 00D6F760, *zippo+1=00D6F764

	printf("zippo[0][0] = %d\n", zippo[0][0]); //zippo[0][0] = 2  使用下标法获取第一元素

	printf("*zippo[0]=%d\n", *zippo[0]); // *zippo[0]=2 使用指针法获取第一个元素

	printf(" **zippo=%d\n", **zippo); // **zippo=2 使用指针法解引用两次获取第一个元素

	printf("zippo[2][1]=%d\n", zippo[2][1]); // zippo[2][1]=3 使用下标法获取第三行第二列的元素的值

	printf("*(*(zippo+2)+1)=%d\n", *(*(zippo + 2) + 1)); //*(*(zippo+2)+1)=3 使用指针法解引用两次获取第三行第二列的元素的值
	return 0;
}