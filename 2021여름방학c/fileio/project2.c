#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 1.
// 주민번호(xxxxx-x)를 입력받고 함수로 전달
// 함수에서 나이와 성별을 추출
// main에서 나이와 성별을 출력

// 2.
// 문자열에서 공백 전까지만 출력하는 프로그램을 작성하시오.

int main(void)
{
	char str, * s;
	s = (char*)malloc(size(char)*str);
	printf("문자열을 입력하세요 : ");
	scanf("%s", &str);
	for (int i = 0; i < 100; i++) {
		if (s[i] == " ") {
			break;
		}
	}
	printf("문자열 : %s", s);
	




	return 0;
}