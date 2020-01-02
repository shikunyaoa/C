#include <stdio.h>

int main(void) {

	int zippo[4][2] = {
		{ 2, 4 },
		{ 6, 8 },
		{ 1, 3 },
		{ 5, 7 }
	};
	//定义一个数组指针，pz指向一个内含两个int类型值得数组
	int(*pz)[2];

	pz = zippo;

	printf("pz = %p, pz + 1 = %p\n", pz, pz + 1); //pz = 010FF998, pz + 1 = 010FF9A0

	printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1); //pz[0] = 010FF998, pz[0] + 1 = 010FF99C

	printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1); //*pz = 010FF998, *pz + 1 = 010FF99C

	printf("pz[0][0] = %d\n", pz[0][0]); //pz[0][0] = 2

	printf("*pz[0] = %d\n", *pz[0]); //*pz[0] = 2

	printf("**pz = %d\n", **pz); //**pz = 2

	printf("pz[2][1] = %d\n", pz[2][1]); //pz[2][1] = 3

	printf("*(*(pz+2)+1)=%d\n", *(*(pz + 2) + 1)); //*(*(pz+2)+1)=3
	return 0;
}