#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// fg.txt 텍스트 file 내용 읽어서 모니터에 출력하는 프로그램 작성하기
#define MAX 100000
int main(void) {

	// <전체 내용 읽어서 출력하기>
	char buffer[MAX] = { 0, }; // 모든 공간 NULL로 초기화
	FILE* fp = fopen("fg.txt", "r"); // fg.txt 파일을 r(읽기) 모드로 읽기
	// 1부터 MAX자 까지 읽음.
	fread(buffer, 1, MAX, fp); // 전체 읽기
	printf("%s\n", buffer);

	fclose(fp); // 파일 닫기

	return 0;


	// <한줄 씩 읽기>

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