#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ��й�ȣ�� "123"�̴�. 
// ��й�ȣ�� 3ȸ �����ϸ� "������ ���ϴ�."�� ����ϴ� �Լ��� �ۼ��Ͻÿ�.
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
	//	printf("��й�ȣ�� �Է��ϼ��� : ");
	//	scanf("%d", pw);
	//	printf("\n");

	//	if (strcmp(pw = password)) {
	//		printf("����");
	//	}
	//	else {
	//		printf("Ʋ�� ��й�ȣ �Դϴ�. �ٽ� �Է��� �ּ���.");
	//	}

	//} while (count == 3);

	for (int i = 1; i <= 3; i++) {
		printf("��й�ȣ�� �Է��ϼ��� : ");
		scanf("%d", pw);
		printf("\n");

		if (pw == password) {
			printf("����"); break;
		} // end of if-1
		else {
			count++;
			if (count != 3) {
				printf("Ʋ�� ��й�ȣ �Դϴ�. �ٽ� �Է��� �ּ���.");

			} // end of if-2
			else {
				printf("��й�ȣ�� 3ȸ �����Ͽ����ϴ�.\n ������ ���ϴ�.");
			
			} // end of else-2
			
		} // end of else-1

	} // end of for
}
