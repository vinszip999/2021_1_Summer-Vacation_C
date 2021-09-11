#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include "my.h" // h -> header 파일 헤더파일엔 함수 선언이 들어있음.
// EOF 또는 임의의 문자가 입력될 때까지 정수를 입력받아서 입력된 정수의 합을 출력하시오.
void Print(int, char);

int main(void)
{
	int num;
	char ch;

	printf("출력할 시작 숫자를 입력하세요 : ");
	scanf("%d", &num);
	printf("출력할 문자를 입력하세요 : ");
	scanf(" %c", &ch);

	Print(num, ch);

	return 0;

} // end of main

void Print(char ch, int num) {
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j < num - i; j++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	//for (int i = num; i > 0; i--) { // 5 4 3 2 1
	//	for (int j = 0; i < i; j++) { // 1~~4 1~3 1~2
	//		print("%c", ch);
	//	}
	//	printf("\n");
	//}
}