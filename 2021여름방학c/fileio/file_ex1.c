#include <stdio.h>
// Ű����� �ڽ��� �̸��� �Է¹ް�,
// name.txt ���Ͽ� ���� �� ������ �о �̸��� ����Ϳ� ��� fgetc
// fgets

int main(void)
{
	char op = 'p', c[100] = "hello";
	FILE* fp = NULL, * fpo;
	fp = fopen("./a.txt", "r+");
	fpo = fopen("./b.txt", "w+");
	if (fp == NULL) {
		printf("open fail");
	}
	else {
		printf("open success\n");
	}
	fgets(c, 100, fp);
	fputs(c, fpo);

	fclose(fp);
	fclose(fpo);


	return 0;
}