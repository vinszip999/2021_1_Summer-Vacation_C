#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���ڿ��� �Է¹ް�, �Է� ���� ���ڿ����� Ư�� ���ڰ� �� �� �ִ����� Ȯ���ϴ� 
// ���α׷��� �ۼ��Ͻÿ�. ���� Ȯ�� �Լ��� �ۼ��� ��
// (�Լ��� �Ű������� ���ڿ��� �˻����ڷ� �ϰ� ����� �Լ��� ȣ���� ������ ���)

int main(void)
{
	char str[100];
	char c;
	int count = 0;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);

	
	printf("ã�� Ư�� ���ڸ� �Է��ϼ��� : ");
	scanf(" %c", &c);

	for (int i = 1; i <= str; i++) {

	}
	if (str == c) {
		count++;
	}
	printf("%c�� �� ������ : %d", c, count);


	

	return 0;

} // end of main
