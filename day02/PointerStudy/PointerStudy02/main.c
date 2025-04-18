#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 윤년 체크
int is_leap(int y) {
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

// y년 m월의 일수
int days_of_month(int y, int m) {
	int mdays[][12] = {
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },   /* 평년 */
		{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },   /* 윤년 */
	};
	return mdays[is_leap(y)][m - 1];
}

// y년 m월 d일을 전날 날짜로 갱신
void decrement_date(int* y, int* m, int* d) {
	if (*d > 1) {
		--*d;
	} else {
		if (--*m < 1) {
			--*y;
			*m = 12;
		}
		*d = days_of_month(*y, *m);
	}
}

// y년 m월 d일을 다음날 날짜로 갱신
void increment_date(int* y, int* m, int* d) {
	if (*d < days_of_month(*y, *m)) {
		++*d;
	}
	else {
		if (++*m > 12) {
			++*y;
			*m = 1;
		}
		*d = 1;
	}
}

int main(void) {
	int i, n;
	int y, m, d;

	puts("날짜를 입력하세요.");
	printf("년: "); scanf("%d", &y);
	printf("월: "); scanf("%d", &m);
	printf("일: "); scanf("%d", &d);

	printf("며칠 뒤로 할까요? : "); scanf("%d", &n);
	for (i = 0; i < n; i++) {
		increment_date(&y, &m, &d);
	}

	printf("그 날은 %d년 %d월 %d일입니다.\n", y, m, d);

	printf("며칠 전으로 할까요? : "); scanf("%d", &n);
	for (i = 0; i < n; i++) {
		decrement_date(&y, &m, &d);
	}

	printf("그 날은 %d년 %d월 %d일입니다.\n", y, m, d);

	return 0;
}