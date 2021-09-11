#include <stdio.h>
#include <stdlib.h>
// 실수 입력 정수부분과 소수점 이하 부분을 각각 저장
// 구조체 멈버 실수값, 정수 부분, 소수점 이하 부분
struct id
{
	double s, f; int d;
};
int main(void)
{
	int n; struct id* p;
	scanf("%d", &n);
	// sizeof <- 구조체 크기
	p = (struct id*)malloc(sizeof(struct id) * n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &p[i].s);
	}
	printf("\n\n");

	for (int i = 0; i < n; i++) {
		p[i].d = (int)p[i].s;
		p[i].f = p[i].s - p[i].d;

	}
	free(p);

	return 0;
}