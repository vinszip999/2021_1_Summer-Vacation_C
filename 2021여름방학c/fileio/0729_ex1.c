#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ��Ʈ�Ͻ������� ȸ�������� �����,
// ȸ������ : ȸ����ȣ(xxx) 001, �̸�, ü��, 
// �̸����� �˻�
// ȸ����ȣ, �̸�, ü���� ���
// �˻� ��� n
struct member
{
	char name[20], num[4];
	int weight;
};
int main(void)
{
	struct member m[100];

	char name[20], num[4], file[20];
	int weight, check;
	FILE* fpi = NULL, * fpo = NULL;
	printf("����� ������ ���� ���� �Է��ϼ��� : ");
	gets(file);
	fpo = fopen(file, "w+");
	if (fpo == NULL) printf("open fail");
	else {
		while (1) {
			fflush(stdin);
			printf("input : \n");
			check = fscanf(stdin, "%s", num);
			if (check == EOF) break;
			fflush(stdin);
			gets(name);
			fscanf(stdin, "%d", &weight);
			fprintf(fpo, "%s %s %d\n", num, name, weight);
		}
	}
	fclose(fpo);

	return i;

}
int data_read(struct member* m) {
	FILE* fpi; int i = 0;
	fpi = fopen(file, "r");

}