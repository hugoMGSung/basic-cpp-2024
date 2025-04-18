#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 128

// 문자열 s의 길이 반환
int str_length(const char s[]) {
	int len = 0;

	while (s[len])
		len++;

	return len;
}

// 문자열 s의 문자 나열 반전
void rev_string(char s[]) {
	int i, len = str_length(s);

	for (i = 0; i < len / 2; i++) {
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

// 문자열 배열의 문자 나열 반전
void rev_strings(char s[][SIZE], int n) {
	int i;
	for (i = 0; i < n; i++)
		rev_string(s[i]);
}

// 문자열 배열 출력
void put_strary(const char s[][SIZE], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
}

int main(void) {
	char cs[][SIZE] = { "SEC", "ABC", "12345" };

	rev_strings(cs, 3);  // 반전
	put_strary(cs, 3);  // 출력

	return 0;
}