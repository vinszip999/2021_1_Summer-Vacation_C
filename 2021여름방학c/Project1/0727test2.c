#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
// ���� �������� ���̸� �����ϴ� ���α׷��� �ۼ�
// �� ���̸� ����ϴ� �Լ��� �ۼ��ϰ�, ����Լ��� �ۼ��Ͽ� ����ϱ�
void circle_area(struct Circle *c);

struct circle{
	int radius; // ������
	double area; // ���� ����
};
int main(void)
{
	struct circle c;

	printf("���� �������� �Է��ϼ��� : ");
	scanf("%d", &c.radius);

	//c.area = area(c);
	
	circle_area(&c);
	print(c); // 12byte�� ����

	return 0;
}

void circle_area(struct circle *c) { // main���� ���� c�� �ּҰ� ����
	c->area = c->radius * c->radius * 3.14;

}
void print(struct circle c) {
	printf("���� ���̴� : %f", c.area);
}