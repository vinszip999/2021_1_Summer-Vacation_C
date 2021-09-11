#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 동적 메모리 할당을 이용하여 
// 사용자로부터 받은 주소록을 저장하고 출력하는 프로그램을 작성하라.
// 이름과 휴대폰 번호만을 저장하도록 하자.
// 주소의 개수 : 1
// 이름 입력 : 홍길동
// 휴대폰 번호 : 010-123-14556
// 이름 휴대폰 번호
// ----------------
// 홍길동 010-123-4556
// 1. 사용자로부터 먼저 주소의 개수를 입력받도록 하자
// 2. 계속 입력하시겠습니까?(Y/N)

int main(void)
{
	int address;
	char c;

	while (1) {

		printf("주소의 개수를 입력하세요 : ");
		scanf("%d", &address);

		printf("계속 입력하시겠습니까?(Y/N) ");
		scanf(" %c", &c);

		if (c == 'Y') {

		}
		else {
			break;
		}

	};


	return 0;
}































