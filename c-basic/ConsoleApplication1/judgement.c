#include <stdio.h>
#include <ctype.h>

//ʹ���ַ��жϺ������ж��ַ����и��ַ���ռ�õĸ���
void main(void) {

	char num[80];
	int i, d = 1, l = 1, p = 1, c = 1, o = 1, b = 1, u = 1; //�������ͱ���
	printf("Please input the string: \n");
	gets(num);
	for (i = 0; i < strlen(num); i++) {
		if (isprint(num[i])) { //�жϵ�ǰ�ַ��Ƿ�Ϊ�ɴ�ӡ�ַ�
			if (isalnum(num[i])) { //�жϵ�ǰ�ַ��Ƿ�Ϊ��ĸ������
				if (isdigit(num[i])) { //�жϵ�ǰ�ַ��Ƿ�Ϊ����
					d++;
				}
				else if (islower(num[i])) { //�жϵ�ǰ�ַ��Ƿ�ΪСд��ĸ
					l++;
				}
				else if (isupper(num[i])) { //�жϵ�ǰ�ַ��Ƿ�Ϊ��д��ĸ
					u++;
				}
			}
			else if (isspace(num[i])) { //�жϵ�ǰ�ַ��Ƿ�Ϊ�ո�
				b++;
			}
			else if (ispunct(num[i])) { //�жϵ�ǰ�ַ��Ƿ�Ϊ����ַ�
				p++;
			}
			else {
				o++;
			}
		}
		else if (iscntrl(num[i])){  //�жϵ�ǰ�ַ��Ƿ�տ����ַ�
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