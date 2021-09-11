#include <stdio.h>

int main()
{
	char op='h';
	FILE* fp = NULL;
	fp = fopen("./a.txt", "w"); // fp가 주소 받음 r, w
	// w모드는 만약 파일이 없으면 생성해준다.
	if (fp == NULL) {
		printf("open fail");
	}
	else {
		printf("open success!");
	}

	printf(fp, "%c", op);

	return 0;
}