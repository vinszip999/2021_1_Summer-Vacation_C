#include<stdio.h>
// ���� 5�� �Է� �޾Ƽ� ���
int main() {
	int num[5];

	//for (int i = 0; i < 5; i++) {
	//	printf("������ �Է��ϼ��� : ");
	//	scanf("%d", &num[i]);
	//}
	//for (int i = 0; i < 5; i++) {
	//	printf("%d", num[i]);
	//}

	FILE* fp=NULL;
	fp = fopen("a.txt", "w+");

	for (int i = 0; i < 5; i++) {
		fscanf(stdin, "%d", &num[i]);
	}
	for (int i = 0; i < 5; i++) {
		fprintf(fp, "%d", num[i]); // stdout
	}

	fclose(fp);

	return 0;
}