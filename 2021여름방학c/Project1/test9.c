#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���� 5���� �о �迭�� ����. �迭�� �Ű������� �����Ͽ�
// �Լ����� ��հ��� ����Ͽ� ��հ��� 70 �̻��̸� P, �̸��̸� F�� ��ȯ�ϰ�
// ����� "�հ�" �Ǵ� "���հ�"�� ���

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	printf("����� ���� ���� 5���� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("5������ �� ����� : %1lf\n", avg);

	return 0;

} // end of main

void Arr(int score) {

}
