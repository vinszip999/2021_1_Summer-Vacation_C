#include<stdio.h>
// 정수 5개 입력 받아서 출력
int main() {
	int num[5];

	//for (int i = 0; i < 5; i++) {
	//	printf("정수를 입력하세요 : ");
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