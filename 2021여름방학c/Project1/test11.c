#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

int main()
{
	char str[100]; // MAX -> 그냥 숫자 100으로 바꿔서 봄**
	int len;

	printf("입력 텍스트 : ");
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
	printf("결과 문자열 : %s", str);
} // end of main