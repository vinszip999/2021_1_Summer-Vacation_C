#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
// 사용자로부터 문자열을 받아서 매개변수로 전달하고
// main에서 역순으로 변환하여서 출력하는 프로그램 작성
void rearr(char*, char*);

int main()
{
	char s[] = "I am a girl", r[20];
	rearr(s, r);
	puts(s); puts(r);


	//printf("역순으로 변환한 문자열은 : %s" reverseString(c));

	return 0;
}
void rearr(char* arr, char* r) {
	int i, j;
	for (i = strlen(arr) - 1, j = 0;  i >= 0; i--, j++) {
		r[j] = arr[i];
	}


	//printf("문자열을 입력하세요 : ");
	//c = gets(str);


}