#include <stdio.h>

int main()
{
	char op='h';
	FILE* fp = NULL;
	fp = fopen("./a.txt", "w"); // fp�� �ּ� ���� r, w
	// w���� ���� ������ ������ �������ش�.
	if (fp == NULL) {
		printf("open fail");
	}
	else {
		printf("open success!");
	}

	printf(fp, "%c", op);

	return 0;
}