#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 1.
// �ֹι�ȣ(xxxxx-x)�� �Է¹ް� �Լ��� ����
// �Լ����� ���̿� ������ ����
// main���� ���̿� ������ ���

// 2.
// ���ڿ����� ���� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(void)
{
	char str, * s;
	s = (char*)malloc(size(char)*str);
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", &str);
	for (int i = 0; i < 100; i++) {
		if (s[i] == " ") {
			break;
		}
	}
	printf("���ڿ� : %s", s);
	




	return 0;
}