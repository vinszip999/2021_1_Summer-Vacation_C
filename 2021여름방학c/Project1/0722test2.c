#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5
//int hap(int* p);
// ���� 5���� �Է¹ް� �Ű������� ����.
// �Լ����� �ִ밪�� �ּҰ��� ����.
// �ִ밪�� �ּҰ��� main���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int maxmin(int* p);

int main()
{
	int num[SIZE], * p = num;

	for (int i = 0; i < SIZE; i++) {
		printf("���� �� 5���� �Է��ϼ��� : ");
		scanf("%d", &num[i]);
		printf("\n");
	}
	
	maxmin(*p);

	//printf("�ִ밪 : %d\n", max);
	//printf("�ּҰ� : %d\n", min);

	return 0;
}
int maxmin(int* p) // int p[]
{
	int max = p[0];
	int min = p[0];
	for (int i = 0; i < SIZE; i++) {
		if (p[i] > max) {
			max = p[i];
		}
		if (p[i] < min){
			min = p[i];
	}
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);


	//printf("�ִ밪 : %s\n �ּҰ� : %s\n", max, min);

	//return printf("�ִ밪 : %s\n �ּҰ� : %s\n", max, min);
}