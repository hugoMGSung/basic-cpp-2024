
#include <stdio.h>

int main(void) {
	
	char str[] = "Hello, World!";
	char str2[] = "ABC\0DEF";

	printf("문자열 str은 \'%s\'입니다.\n", str);
	printf("문자열 str은 \'%s\'입니다.\n", str2);

	return 0;
}