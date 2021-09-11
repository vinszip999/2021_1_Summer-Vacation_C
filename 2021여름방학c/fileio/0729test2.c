#include <stdio.h>
// 이름   나이
int main()
{
	char name[20]; int age, check;
	FILE* fpi = NULL, * fpo = NULL;

	fpo = fopen("./name.txt", "w+");
	if (fpo == NULL) printf("open fail");
	else {
		while (1) {
			check = fscanf(stdin, "%s", name); // stdin 키보드 입력
			fscanf(stdin, "%d", &age); // 키보드로 정수 입력 받기
			if (check == EOF) break;
			fprintf(fpo, "%s %d\n", name, age);
		}

	}
	fclose(fpo);

	return 0;
}