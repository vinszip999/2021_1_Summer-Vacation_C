#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// double 형의 반지름을 입력 원의 넓이를 출력
// 반지름을 매개변수로 전달, 넓이를 반환
double cal_area(double radius);

int main(void) {

	double num1;

	printf("원의 넓이를 구할 double 형의 반지름을 입력하세요 : ");
	scanf("%lf", &num1); 

	printf("원의 넓이는 %f입니다.\n", cal_area(num1));

	return 0;
}

double cal_area(double radius) {
	return radius * radius * 3.14;
}