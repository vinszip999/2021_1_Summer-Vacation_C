#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 문자열을 입력받고, 입력 받은 문자열에서 특정 글자가 몇 개 있는지를 확인하는 
// 프로그램을 작성하시오. 개수 확인 함수를 작성할 것
// (함수의 매개변수는 문자열과 검색문자로 하고 결과는 함수를 호출한 곳에서 출력)

int main(void)
{
	char str[100];
	char c;
	int count = 0;

	printf("문자열을 입력하세요 : ");
	gets(str);

	
	printf("찾을 특정 글자를 입력하세요 : ");
	scanf(" %c", &c);

	for (int i = 1; i <= str; i++) {

	}
	if (str == c) {
		count++;
	}
	printf("%c의 총 개수는 : %d", c, count);


	

	return 0;

} // end of main
