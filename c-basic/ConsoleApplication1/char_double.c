#include <stdio.h>
#include <conio.h>
//将字符整型转换成浮点型
int main(void) {

	char str[100];
	gets(str);
	double num = 0;
	int i = 0;
	double t = 10;
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') {
			if (t == 10) {
				num = num * t + str[i] - 48;
			}
			else {
				num += (str[i] - 48) * t;
				t = t*0.1;
			}
		}

		if (str[i] == '.') {
			t = 0.1;
		}
		i++;
	}
	if (str[i] == '-') {
		num = 0 - num;
	}

	printf("%1f\n", num);
	return 0;
}