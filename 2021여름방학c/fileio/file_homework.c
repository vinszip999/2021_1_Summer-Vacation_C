#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// fg.txt �ؽ�Ʈ file ���� �о ����Ϳ� ����ϴ� ���α׷� �ۼ��ϱ�
#define MAX 100000
int main(void) {

	// <��ü ���� �о ����ϱ�>
	char buffer[MAX] = { 0, }; // ��� ���� NULL�� �ʱ�ȭ
	FILE* fp = fopen("fg.txt", "r"); // fg.txt ������ r(�б�) ���� �б�
	// 1���� MAX�� ���� ����.
	fread(buffer, 1, MAX, fp); // ��ü �б�
	printf("%s\n", buffer);

	fclose(fp); // ���� �ݱ�

	return 0;


	// <���� �� �б�>

	//char buffer[MAX];
	//FILE* p_file = NULL;

	//if (0 == fopen_s(&p_file, "fg.txt", "rt")) {

	//	while (fgets(buffer, MAX, p_file) != NULL) {
	//		printf("%s", buffer);
	//	}
	//	fclose(p_file);
	//	printf("\n");
	//}

	// return 0;
}