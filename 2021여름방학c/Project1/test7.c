#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// EOF �Ǵ� ������ ���ڰ� �Էµ� ������ ������ �Է¹޾Ƽ� �Էµ� ������ ���� ����Ͻÿ�.
int main(void)
{
	int num;
	int sum = 0;
	int ret;

	while (1) {
		sum = 0;
		printf("���� ���� ������ �Է��ϼ��� : ");
		ret = scanf("%d", &num);

		if (ret == EOF || ret == 0) {
			printf("���α׷��� �����մϴ�...");
			break;
		}else{
			for (int i = 1; i <= num; i++) {
				sum += i;
			}
			printf("%d������ �� ������ ���� : %d", num, sum);
			printf("\n");
			
		} // end of else

	} // end of while

	return 0;

} // end of main