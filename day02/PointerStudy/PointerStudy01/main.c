#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 읽어들인 정수를 0~100이 되도록 조정
int adjust_point(int* n) {
	if (*n < 0) *n = 0;
	if (*n > 100) *n = 100;
}

int main() {
	int point = 0;
	
	printf("시험 점수 < ");
	scanf("%d", &point);  // point의 주소위치에 점수를 입력

	adjust_point(&point);  // point의 주소를 adjust_point에 전달

	printf("점수는 %d입니다.\n", point);

	return 0;
}