#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include "my.h" // h -> header ���� ������Ͽ� �Լ� ������ �������.
// EOF �Ǵ� ������ ���ڰ� �Էµ� ������ ������ �Է¹޾Ƽ� �Էµ� ������ ���� ����Ͻÿ�.
void Print(int, char);

int main(void)
{
	int num;
	char ch;

	printf("����� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("����� ���ڸ� �Է��ϼ��� : ");
	scanf(" %c", &ch);

	Print(num, ch);

	return 0;

} // end of main

void Print(char ch, int num) {
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j < num - i; j++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	//for (int i = num; i > 0; i--) { // 5 4 3 2 1
	//	for (int j = 0; i < i; j++) { // 1~~4 1~3 1~2
	//		print("%c", ch);
	//	}
	//	printf("\n");
	//}
}