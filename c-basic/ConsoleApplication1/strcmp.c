#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[] = "I Love C";
	char str2[] = "I Love Java";

	if (!strcmp(str1, str2)) { //strcmp根据ASCLL码比较两个字符串
		printf("两个字符串完全一致\n");
	}
	else {
		printf("两个字符串存在差异\n");
	}

	return 0;
}