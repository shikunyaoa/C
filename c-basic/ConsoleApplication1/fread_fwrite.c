#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Êý¾Ý¿é¶ÁÐ´º¯Êý
void main(void) {
	char * buffer[10];
	FILE * fp;
	int iter;
	const char * format = "This is the %d %d sentence!\n";
	char * postfix[4] = { "st", "nd", "rd", "th" };
	if ((fp = fopen("123.txt", "wb+")) == NULL) {
		printf("can not ope nfile fwb for writing \t");
		exit(1);
	}

	for (iter = 0; iter < 10; iter++) {
		buffer[iter] = (char *)malloc(strlen(format) + 1);
		sprintf(buffer[iter], format, iter + 1, postfix[iter > 3 ? 3 : iter]);
	}


	for (iter = 0; iter < 10; iter++) {
		fwrite(buffer[iter], strlen(format), 1, fp);
		free(buffer[iter]);
	}

	fclose(fp);
}