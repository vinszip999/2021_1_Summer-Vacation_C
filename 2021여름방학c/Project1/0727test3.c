#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 4
// ���� �Է��ϸ� �������ɴ���� ����ϴ� �Լ� �ۼ�
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

	printf("���� �Է��ϼ��� : ");
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
// �ּ��� �� �ּҷ� , �������� �� �����ͷ�
void print(int *car, struct parking *p) {

	printf("���� ���� ����� %d�� �Դϴ�.", *car);
}
