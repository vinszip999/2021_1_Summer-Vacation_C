#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5
//int hap(int* p);
// 정수 5개를 입력받고 매개변수로 전달.
// 함수에서 최대값과 최소값을 추출.
// 최대값과 최소값을 main에서 출력하는 프로그램을 작성하시오.
int maxmin(int* p);

int main()
{
	int num[SIZE], * p = num;

	for (int i = 0; i < SIZE; i++) {
		printf("정수 값 5개를 입력하세요 : ");
		scanf("%d", &num[i]);
		printf("\n");
	}
	
	maxmin(*p);

	//printf("최대값 : %d\n", max);
	//printf("최소값 : %d\n", min);

	return 0;
}
int maxmin(int* p) // int p[]
{
	int max = p[0];
	int min = p[0];
	for (int i = 0; i < SIZE; i++) {
		if (p[i] > max) {
			max = p[i];
		}
		if (p[i] < min){
			min = p[i];
	}
	printf("최대값 : %d\n", max);
	printf("최소값 : %d\n", min);


	//printf("최대값 : %s\n 최소값 : %s\n", max, min);

	//return printf("최대값 : %s\n 최소값 : %s\n", max, min);
}