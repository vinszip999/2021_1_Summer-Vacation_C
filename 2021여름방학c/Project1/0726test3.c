#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ���� 2��(a,b)�� ���(avg)�� �����ϴ� ����ü�� �����
// ���� 2���� ����� avg�� ���� �� ���

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