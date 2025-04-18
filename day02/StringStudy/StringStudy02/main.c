#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[] = "ABC";
	char str[48];

	printf("문자열 str 입력 > ");
	scanf("%s", str);  // 읽어들인 문자열
	printf("문자열 s : \"%s\"\n", s);  // 초기화된 문자열
	printf("문자열 str : \"%s\"\n", str);  // 읽어들인 문자열

	s[0] = '\0';
	str[0] = '\0';

	printf("문자열 s : \"%s\"\n", s);  // 초기화된 문자열
	printf("문자열 str : \"%s\"\n", str);  // 읽어들인 문자열

	return 0;
}