#include <stdio.h>
// �̸�   ����
int main()
{
	char name[20]; int age, check;
	FILE* fpi = NULL, * fpo = NULL;

	fpo = fopen("./name.txt", "w+");
	if (fpo == NULL) printf("open fail");
	else {
		while (1) {
			check = fscanf(stdin, "%s", name); // stdin Ű���� �Է�
			fscanf(stdin, "%d", &age); // Ű����� ���� �Է� �ޱ�
			if (check == EOF) break;
			fprintf(fpo, "%s %d\n", name, age);
		}

	}
	fclose(fpo);

	return 0;
}