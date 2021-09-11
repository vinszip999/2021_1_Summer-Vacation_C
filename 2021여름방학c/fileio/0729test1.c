#include <stdio.h>
int main(void) {
	char n[256], p; FILE* fp;
	fp = fopen("./file/fg.txt", "r");
	if (fp = NULL) printf("open fail");
	else {
		do {
			p = fgets(n, 255, fp); // <- 모니터에서 읽고 싶을 때 // stdin
			if (p == NULL) break;
			fputs(n, stdout); // fp, stdout

		} while (1); // (p != NULL)
	}
	fclose(fp);

	return 0;
}