#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// double ���� �������� �Է� ���� ���̸� ���
// �������� �Ű������� ����, ���̸� ��ȯ
double cal_area(double radius);

int main(void) {

	double num1;

	printf("���� ���̸� ���� double ���� �������� �Է��ϼ��� : ");
	scanf("%lf", &num1); 

	printf("���� ���̴� %f�Դϴ�.\n", cal_area(num1));

	return 0;
}

double cal_area(double radius) {
	return radius * radius * 3.14;
}