#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 4
// 동을 입력하면 주차가능대수를 출력하는 함수 작성
void print(struct parking* car);

struct parking {
	short dong;
	int car;
};

int main(void)
{
	int n, car;
	char op;
	struct parking p[SIZE] = { {111, 35}, {112, 53}, {113, 42}, {114, 49} };

	printf("동을 입력하세요 : ");
	scanf("%d", &n);

	for (int i = 0; i <= 3; i++) {
		if (n == p[i].dong) {
			car = p[i].car;
			break;
		} // end of if
	
	} // end of for

	print(&car, p);

	return 0;
}
// 주소일 땐 주소로 , 데이터일 땐 데이터로
void print(int *car, struct parking *p) {

	printf("주차 가능 대수는 %d대 입니다.", *car);
}
