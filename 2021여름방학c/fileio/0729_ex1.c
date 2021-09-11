#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 휘트니스센터의 회원관리를 만들고,
// 회원정보 : 회원번호(xxx) 001, 이름, 체중, 
// 이름으로 검색
// 회원번호, 이름, 체중을 출력
// 검색 계속 n
struct member
{
	char name[20], num[4];
	int weight;
};
int main(void)
{
	struct member m[100];

	char name[20], num[4], file[20];
	int weight, check;
	FILE* fpi = NULL, * fpo = NULL;
	printf("사용할 데이터 파일 명을 입력하세요 : ");
	gets(file);
	fpo = fopen(file, "w+");
	if (fpo == NULL) printf("open fail");
	else {
		while (1) {
			fflush(stdin);
			printf("input : \n");
			check = fscanf(stdin, "%s", num);
			if (check == EOF) break;
			fflush(stdin);
			gets(name);
			fscanf(stdin, "%d", &weight);
			fprintf(fpo, "%s %s %d\n", num, name, weight);
		}
	}
	fclose(fpo);

	return i;

}
int data_read(struct member* m) {
	FILE* fpi; int i = 0;
	fpi = fopen(file, "r");

}