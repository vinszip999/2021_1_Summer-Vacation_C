#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 비밀번호는 "123"이다. 
// 비밀번호가 3회 실패하면 "계정이 잠김니다."를 출력하는 함수를 작성하시오.
int pwcheck();
int main(void)
{
	int password;
	int pw;

	//pwcheck(password, pw);

	return 0;

}

int pwcheck() {

	int password = 123;
	int pw;
	static int count = 0;

	//do {
	//	printf("비밀번호를 입력하세요 : ");
	//	scanf("%d", pw);
	//	printf("\n");

	//	if (strcmp(pw = password)) {
	//		printf("성공");
	//	}
	//	else {
	//		printf("틀린 비밀번호 입니다. 다시 입력해 주세요.");
	//	}

	//} while (count == 3);

	for (int i = 1; i <= 3; i++) {
		printf("비밀번호를 입력하세요 : ");
		scanf("%d", pw);
		printf("\n");

		if (pw == password) {
			printf("성공"); break;
		} // end of if-1
		else {
			count++;
			if (count != 3) {
				printf("틀린 비밀번호 입니다. 다시 입력해 주세요.");

			} // end of if-2
			else {
				printf("비밀번호가 3회 실패하였습니다.\n 계정이 잠깁니다.");
			
			} // end of else-2
			
		} // end of else-1

	} // end of for
}
