#include <stdio.h>

// define :�궨������Ը���������
// #define��Ԥ����ָ��
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0F / 9.0f)

int main(void) {

	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);
	//�ѻ����¶�ת��Ϊ��Ӧ�������¶�
	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.1f\n", celsius);

	return 0;
}