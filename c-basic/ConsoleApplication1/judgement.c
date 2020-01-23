#include <stdio.h>
#include <ctype.h>

//使用字符判断函数来判断字符串中各字符所占用的个数
void main(void) {

	char num[80];
	int i, d = 1, l = 1, p = 1, c = 1, o = 1, b = 1, u = 1; //定义整型变量
	printf("Please input the string: \n");
	gets(num);
	for (i = 0; i < strlen(num); i++) {
		if (isprint(num[i])) { //判断当前字符是否为可打印字符
			if (isalnum(num[i])) { //判断当前字符是否为字母或数字
				if (isdigit(num[i])) { //判断当前字符是否为数字
					d++;
				}
				else if (islower(num[i])) { //判断当前字符是否为小写字母
					l++;
				}
				else if (isupper(num[i])) { //判断当前字符是否为大写字母
					u++;
				}
			}
			else if (isspace(num[i])) { //判断当前字符是否为空格
				b++;
			}
			else if (ispunct(num[i])) { //判断当前字符是否为标点字符
				p++;
			}
			else {
				o++;
			}
		}
		else if (iscntrl(num[i])){  //判断当前字符是否空控制字符
			c++;
		}
		else {
			o++;
		}
	}

	printf("Digit: %d\n", d);
	printf("Lowercase letter: %d\n", l);
	printf("Capital letter: %d\n", u);
	printf("Blank:%d\n", b);
	printf("Punct: %d\n", p);
	printf("Contrl: %d\n", c);
	printf("Other: %d\n", o);
}