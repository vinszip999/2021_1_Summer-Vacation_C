#include <stdio.h>

int main()
{
	int a[] = { 3, 5, 7, 9 }, * p = a;
	printf("%d %d %d", a[1], p[1], *(a+1), *(p+1)); // *a+1 *p +1
	hap(a);

	return 0;
}
int hap(int* p) // int p[]
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += *(p + i); // p[i]
	}
	printf(sum);
}