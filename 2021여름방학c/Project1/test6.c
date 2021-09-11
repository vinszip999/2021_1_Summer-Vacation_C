#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 입력받은 1부터 n까지의 홀수의 합을 구하시오. 단 프로그램은 0을 입력하면 종료.
int main(void)
{
	int num;
	int count = 0, sum = 0;

	while(1){
		sum = 0;
		printf("홀수의 합을 어디까지 구할지 입력하세요 : ");
		scanf("%d", &num);

		if (num != 0) {
			for (int i = 1; i <= num; i++) {
				if (i % 2 == 1) {
					sum += i;
				}
			}
			printf("%d까지의 총 홀수의 합은 : %d", num, sum);
			printf("\n");
		}
		else { // num == 0 
			printf("프로그램을 종료합니다....");
			break;

		} // end of else

	} // end of while

	return 0;

} // end of main