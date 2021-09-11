#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
// 이름과 나이를 입력 받아서 저장하고 출력하는 프로그램 작성.
struct member {
	char name[SIZE];
	int age;

};
int main(void)
{
	struct member m[3];
	for (int i = 0; i <= 2; i++) {
		printf("이름과 나이를 입력하세요 : ");
		scanf("%s %d", m[i].name, &m[i].age); 
		// m[i].name 자체가 주소 정보이기 때문에 &를 빼야한다.***
		printf("\n");
	}
	for (int i = 0; i <= 2; i++) {
		printf("이름 : %s, 나이 : %d\n", m[i].name, m[i].age);
	}
	

	return 0;

}