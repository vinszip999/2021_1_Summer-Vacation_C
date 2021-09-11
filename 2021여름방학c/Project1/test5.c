#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 문자를 입력받고 입력받은 문자의 모음 총 갯수 출력하기
// 단, 문자 q가 입력되는 순간 프로그램 종료
int main(void)
{
	char ch;
	int count = 0;

	
	do {

		printf("문자를 입력하세요 : ");
		scanf(" %c", &ch);
		printf("\n");

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			count++;
		}

	} while (ch != 'q');

	printf("문자의 모음의 갯수는 총 %d개 입니다.", count);
	
	return 0;
}