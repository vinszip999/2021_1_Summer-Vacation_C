#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100
// 주민번호(xxxxx-x)를 입력받고 함수로 전달
// 함수에서 나이와 성별을 추출
// main에서 나이와 성별을 출력

int main()
{
	char str[MAX]; // MAX -> 그냥 숫자 100으로 바꿔서 봄**
	int len;

	printf("주민번호를 입력하세요 : ");
	gets(str);
	len = strlen(str);

	
} // end of main

