#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���ڸ� �Է¹ް� �Է¹��� ������ ���� �� ���� ����ϱ�
// ��, ���� q�� �ԷµǴ� ���� ���α׷� ����
int main(void)
{
	char ch;
	int count = 0;

	
	do {

		printf("���ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);
		printf("\n");

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			count++;
		}

	} while (ch != 'q');

	printf("������ ������ ������ �� %d�� �Դϴ�.", count);
	
	return 0;
}