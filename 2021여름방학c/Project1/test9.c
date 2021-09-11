#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 정수 5개를 읽어서 배열에 저장. 배열을 매개변수로 전달하여
// 함수에서 평균값을 계산하여 평균값이 70 이상이면 P, 미만이면 F를 반환하고
// 결과로 "합격" 또는 "불합격"을 출력

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	printf("평균을 구할 점수 5개를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("5과목의 총 평균은 : %1lf\n", avg);

	return 0;

} // end of main

void Arr(int score) {

}
