#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
// 원의 반지름과 넓이를 보관하는 프로그램을 작성
// 단 넓이를 계산하는 함수를 작성하고, 출력함수도 작성하여 출력하기
void circle_area(struct Circle *c);

struct circle{
	int radius; // 반지름
	double area; // 원의 넓이
};
int main(void)
{
	struct circle c;

	printf("원의 반지름을 입력하세요 : ");
	scanf("%d", &c.radius);

	//c.area = area(c);
	
	circle_area(&c);
	print(c); // 12byte방 만듬

	return 0;
}

void circle_area(struct circle *c) { // main에서 만든 c의 주소가 있음
	c->area = c->radius * c->radius * 3.14;

}
void print(struct circle c) {
	printf("원의 넓이는 : %f", c.area);
}