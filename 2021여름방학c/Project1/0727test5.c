// ��Ʈ�Ͻ������� ȸ�������� �����,
// ȸ������ : ȸ����ȣ(xxx) 001, �̸�, ü��, 
// �̸����� �˻�
// ȸ����ȣ, �̸�, ü���� ���
// �˻� ��� n
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define MAX 5
void print(int* na, int* nn, int* ww);

struct fitness {
	char num[MAX]; // ȸ����ȣ
	char name[SIZE]; // �̸�
	double weight; // ������
};
typedef struct fitness fit;

int main(void)
{
	char n[SIZE]; // �̸� �Է��� �� ����
	char na; // �̸� ����
	char nn; // ȸ����ȣ ����
	double ww; // ������ ����
	char op; 
	fit f[MAX] = { {"001", "��̶�", 65.7}, {"002", "�̻糪", 45.3}, {"003", "����", 46.5}, {"004", "������", 43.6} };

	printf("�̸��� �Է��ϼ��� : ");
	gets(n);

	for (int i = 0; i <= MAX; i++) {
		if (strcmp(f[i].name, n)==0) {
			na = f[i].name;
			nn = f[i].num;
			ww = f[i].weight;
			break;
		} // end of if

	} // end of for

	printf("�̸� : %s, ȸ����ȣ : %s, ������ : %lf", na, nn, ww);
	print(&na, &nn, &ww);

	return 0;
}

void print(int* na, int *nn, int *ww) {

	printf("�̸��� %S�̰�, ȸ�� ��ȣ�� %nn, �����Դ� %f�Դϴ�.", *na, *nn, *ww);
}
