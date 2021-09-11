#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// EOF 또는 임의의 문자가 입력될 때까지 정수를 입력받아서 입력된 정수의 합을 출력하시오.
int main(void)
{
	int num;
	int sum = 0;
	int ret;

	while (1) {
		sum = 0;
		printf("합을 구할 정수를 입력하세요 : ");
		ret = scanf("%d", &num);

		if (ret == EOF || ret == 0) {
			printf("프로그램을 종료합니다...");
			break;
		}else{
			for (int i = 1; i <= num; i++) {
				sum += i;
			}
			printf("%d까지의 총 정수의 합은 : %d", num, sum);
			printf("\n");
			
		} // end of else

	} // end of while

	return 0;

} // end of main