#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 정수 2개(a,b)와 평균(avg)을 보관하는 구조체를 만들고
// 정수 2개의 평균을 avg에 보관 후 출력

// definition
struct two {
	int a, b;
	double avg;
};
int main(void)
{
	struct two t;
	scanf("%d %d", &t.a, &t.b); // &t[0]
	t.avg = (t.a + t.b / 2.0);
	
	printf("%d", t.avg);

	return 0;

}