// ���ڸ� �Է� �ް� ������ ������ ��� q
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h>


int main(void)
{
	char ch;
	int count = 0;

	do {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf(" %c", &
			ch);

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			count++;
		}

	} while (ch != 'q');

	

	printf("������ ������ ������ �� %d�� �Դϴ�.", count);

	return 0;
}
