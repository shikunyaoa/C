#include <stdio.h>

// define :宏定义的特性给常量命名
// #define是预处理指令
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0F / 9.0f)

int main(void) {

	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);
	//把华氏温度转换为相应的摄氏温度
	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.1f\n", celsius);

	return 0;
}