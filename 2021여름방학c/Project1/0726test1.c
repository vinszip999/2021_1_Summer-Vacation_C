#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
// ����ڷκ��� ���ڿ��� �޾Ƽ� �Ű������� �����ϰ�
// main���� �������� ��ȯ�Ͽ��� ����ϴ� ���α׷� �ۼ�
void rearr(char*, char*);

int main()
{
	char s[] = "I am a girl", r[20];
	rearr(s, r);
	puts(s); puts(r);


	//printf("�������� ��ȯ�� ���ڿ��� : %s" reverseString(c));

	return 0;
}
void rearr(char* arr, char* r) {
	int i, j;
	for (i = strlen(arr) - 1, j = 0;  i >= 0; i--, j++) {
		r[j] = arr[i];
	}


	//printf("���ڿ��� �Է��ϼ��� : ");
	//c = gets(str);


}