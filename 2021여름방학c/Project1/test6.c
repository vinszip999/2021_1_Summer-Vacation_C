#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �Է¹��� 1���� n������ Ȧ���� ���� ���Ͻÿ�. �� ���α׷��� 0�� �Է��ϸ� ����.
int main(void)
{
	int num;
	int count = 0, sum = 0;

	while(1){
		sum = 0;
		printf("Ȧ���� ���� ������ ������ �Է��ϼ��� : ");
		scanf("%d", &num);

		if (num != 0) {
			for (int i = 1; i <= num; i++) {
				if (i % 2 == 1) {
					sum += i;
				}
			}
			printf("%d������ �� Ȧ���� ���� : %d", num, sum);
			printf("\n");
		}
		else { // num == 0 
			printf("���α׷��� �����մϴ�....");
			break;

		} // end of else

	} // end of while

	return 0;

} // end of main