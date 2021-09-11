// 문자를 입력 받고 모음의 개수를 출력 q
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h>


int main(void)
{
	char ch;
	int count = 0;

	do {
		printf("문자를 입력하세요 : ");
		scanf(" %c", &
			ch);

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			count++;
		}

	} while (ch != 'q');

	

	printf("문자의 모음의 개수는 총 %d개 입니다.", count);

	return 0;
}
