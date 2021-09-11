// 휘트니스센터의 회원관리를 만들고,
// 회원정보 : 회원번호(xxx) 001, 이름, 체중, 
// 이름으로 검색
// 회원번호, 이름, 체중을 출력
// 검색 계속 n
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define MAX 5
void print(int* na, int* nn, int* ww);

struct fitness {
	char num[MAX]; // 회원번호
	char name[SIZE]; // 이름
	double weight; // 몸무게
};
typedef struct fitness fit;

int main(void)
{
	char n[SIZE]; // 이름 입력한 값 저장
	char na; // 이름 저장
	char nn; // 회원번호 저장
	double ww; // 몸무게 저장
	char op; 
	fit f[MAX] = { {"001", "김미라", 65.7}, {"002", "이사나", 45.3}, {"003", "김사랑", 46.5}, {"004", "유빛나", 43.6} };

	printf("이름을 입력하세요 : ");
	gets(n);

	for (int i = 0; i <= MAX; i++) {
		if (strcmp(f[i].name, n)==0) {
			na = f[i].name;
			nn = f[i].num;
			ww = f[i].weight;
			break;
		} // end of if

	} // end of for

	printf("이름 : %s, 회원번호 : %s, 몸무게 : %lf", na, nn, ww);
	print(&na, &nn, &ww);

	return 0;
}

void print(int* na, int *nn, int *ww) {

	printf("이름은 %S이고, 회원 번호는 %nn, 몸무게는 %f입니다.", *na, *nn, *ww);
}
