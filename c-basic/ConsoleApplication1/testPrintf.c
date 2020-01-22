#include <stdio.h>

int main(void) {
	for (int j = 8; j > 0; j--) {
		for (int i = 0; i < (j + 2) ; i++) {
			if (j ==3 && i == 0) {
				printf("*");
			}
			else if (j == 2 && i == 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		
		printf("*\n");
	}
	return 0;
}