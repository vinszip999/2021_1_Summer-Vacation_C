#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
// �̸��� ���̸� �Է� �޾Ƽ� �����ϰ� ����ϴ� ���α׷� �ۼ�.
struct member {
	char name[SIZE];
	int age;

};
int main(void)
{
	struct member m[3];
	for (int i = 0; i <= 2; i++) {
		printf("�̸��� ���̸� �Է��ϼ��� : ");
		scanf("%s %d", m[i].name, &m[i].age); 
		// m[i].name ��ü�� �ּ� �����̱� ������ &�� �����Ѵ�.***
		printf("\n");
	}
	for (int i = 0; i <= 2; i++) {
		printf("�̸� : %s, ���� : %d\n", m[i].name, m[i].age);
	}
	

	return 0;

}