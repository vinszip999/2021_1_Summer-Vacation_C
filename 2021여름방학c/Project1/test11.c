#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

int main()
{
	char str[100]; // MAX -> �׳� ���� 100���� �ٲ㼭 ��**
	int len;

	printf("�Է� �ؽ�Ʈ : ");
	gets(str);
	len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			if (str[i + 1] == ' ') {
				str[len] = '\0';
				for (int j = i; j < len; j++) {
					str[j] = str[j + 1];
				} // end of for-2
				len--;
				i--;
			} // end of if-2
		} // end of if-1
	} // end of for-1
	printf("��� ���ڿ� : %s", str);
} // end of main