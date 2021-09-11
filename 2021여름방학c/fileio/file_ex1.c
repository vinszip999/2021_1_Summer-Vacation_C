#include <stdio.h>
// 키보드로 자신의 이름을 입력받고,
// name.txt 파일에 저장 후 파일을 읽어서 이름을 모니터에 출력 fgetc
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