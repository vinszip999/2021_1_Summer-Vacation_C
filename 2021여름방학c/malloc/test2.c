#include <stdio.h>
#include <stdlib.h>
// �Ǽ� �Է� �����κа� �Ҽ��� ���� �κ��� ���� ����
// ����ü �ع� �Ǽ���, ���� �κ�, �Ҽ��� ���� �κ�
struct id
{
	double s, f; int d;
};
int main(void)
{
	int n; struct id* p;
	scanf("%d", &n);
	// sizeof <- ����ü ũ��
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